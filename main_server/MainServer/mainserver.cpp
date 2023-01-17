#include "mainserver.h"
#include "ui_mainserver.h"
#include <QTcpServer>
#include <QTcpSocket>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QTableWidget>
#include <QSqlRecord>
#include <QTcpSocket>

static inline qint32 ArrayToInt(QByteArray source);

MainServer::MainServer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainServer)
{
    ui->setupUi(this);
    server = new QTcpServer(this);
    //socket = new QTcpSocket(this); //될라나
    QTcpSocket* socket = (QTcpSocket*)(sender());
    connect(server, SIGNAL(newConnection()), this, SLOT(newConnection()));

    QString socket_data = QString("Listening: %1\n").arg(server->listen(QHostAddress::Any, 8001) ? "true" : "false");
    ui->textEdit->append(socket_data);

    this->loadData();


    //connect(this, SIGNAL(sendNewPID(QString)), SLOT(sendDataToClient(QString))); //구현 다 한 후에 헤더에 선언하기

}

MainServer::~MainServer()
{
    delete ui;
}

void MainServer::newConnection()
{
    QTcpSocket* socket = (QTcpSocket*)(sender());
    while (server->hasPendingConnections())
    {
        //QTcpSocket *socket = server->nextPendingConnection();
        socket = server->nextPendingConnection();
        connect(socket, SIGNAL(readyRead()), this, SLOT(receiveData()));
        connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));
        QByteArray *buffer = new QByteArray();
        qint32 *s = new qint32(0);
        buffers.insert(socket, buffer);
        sizes.insert(socket, s);
    }
}

void MainServer::disconnected()
{
    QTcpSocket *socket = static_cast<QTcpSocket*>(sender());
    QByteArray *buffer = buffers.value(socket);
    qint32 *s = sizes.value(socket);
    socket->deleteLater();
    delete buffer;
    delete s;
}

bool MainServer::writeData(QByteArray data)
{
    QTcpSocket* socket = (QTcpSocket*)(sender());
    if(socket->state() == QAbstractSocket::ConnectedState)
    {
        //socket->write(IntToArray(data.size()));
        socket->write(data); // 데이터를 보내줌
        return socket->waitForBytesWritten();
    }
    else
    {
        return false;
    }
}

void MainServer::sendDataToClient(QString newData)
{


    QString sendData = newData;
    send_flag = writeData(sendData.toStdString().c_str()); //writeData의 첫 번째 인자는 char *data와 같은 형식임
    if(!send_flag)
        qDebug() << "Socket send fail\n";



    //    if(fd_flag)
    //    {
    //        QString sendData = newData;
    //        send_flag = writeData(sendData.toStdString().c_str()); //writeData의 첫 번째 인자는 char *data와 같은 형식임
    //        if(!send_flag)
    //            qDebug() << "Socket send fail\n";

    //    }


}

void MainServer::receiveData()
{
    QTcpSocket* socket = (QTcpSocket*)(sender());

    socket = static_cast<QTcpSocket*>(sender());
    buffer = buffers.value(socket);
    //qint32 *s = sizes.value(socket);
    //qint32 size = *s;

    buffer->append(socket->readAll());
    saveData = QString(buffer->data());
    ui->textEdit->insertPlainText(saveData);
    ui->textEdit->insertPlainText("\n");




    //어떤 이벤트인지에 따라 불러올 함수 써주기(각각 이벤트에 대한 함수 만들고 if-else문 타도록 만들자)
    QString event = saveData.split("<CR>")[0];
    QString id = saveData.split("<CR>")[1];
    QString data = saveData.split("<CR>")[2];

    qDebug() << "이벤트: " << event;

    /*환자관리 SW 이벤트*/
    if(event == "PER")      //신규환자 등록 끝났을 때: PER(enroll)
    {
        query->prepare("INSERT INTO patient (patient_no, patient_name, patient_sex, patient_birthdate,"
                       "patient_tel, patient_address, patient_memo)"
                       "VALUES(:patient_no, :patient_name, :patient_sex, :patient_birthdate,"
                       ":patient_tel, :patient_address, :patient_memo)");


        query->bindValue(":patient_no", id);
        query->bindValue(":patient_name", data.split("|")[0]);
        query->bindValue(":patient_sex", data.split("|")[1]);
        query->bindValue(":patient_birthdate", data.split("|")[2]);
        query->bindValue(":patient_tel", data.split("|")[3]);
        query->bindValue(":patient_address", data.split("|")[4]);
        query->bindValue(":patient_memo", data.split("|")[5]);
        query->exec();

        qDebug()<<"새로운 환자 정보 저장 완료";
        updateRecentData();
        //this->loadData();

    }
    else if(event == "PID")     //신규환자 PID 요청: PID
    {
        QString newPID = makeId();
        qDebug() << "newPID: " << newPID;
        QString sendData = "PID<CR>" + newPID + "<CR>";

        socket->write(sendData.toStdString().c_str());
        //sendDataToClient(sendData);

        //emit sendNewPID(newPID);
    }
    else if(event == "PDE")     //환자 정보 삭제: PDE(delete)
    {
        query->exec("delete from patient WHERE patient_no = '" + id + "'");
        patientModel->select();
    }
    else if(event == "PSE")     //검색: PSE(search)         //DB에 없는 환자 검색했을 때 죽는 거 예외처리 해야 함
    {
        QString sendData ="PSE<CR>";

        if(id == "0"){      //환자번호로 검색했을 때
            sendData = sendData + data + "<CR>";

            query->exec("select * from patient WHERE patient_no = '" + data + "'");
            QSqlRecord rec = query->record();
            qDebug() << "Number of columns: " << rec.count();

            while (query->next())
            {
                for(int i=1; i<rec.count() ; i++)
                {
                    qDebug() << "i: " << i << "data: " << query->value(i).toString(); // output all names
                    QString data = query->value(i).toString() + "|";
                    sendData += data;
                    qDebug() << "sendData: " << sendData;
                }
            }

            //            qDebug() << query->value(1).toString();
            //            int patientNoCol = rec.indexOf("patient_no"); // index of the field "patient_no"
            //            qDebug() << patientNoCol;
            //            while (query->next())
            //                qDebug() << query->value(patientNoCol).toString(); // output all names


            //            query->exec("SELECT * FROM patient WHERE patient_no = '" + data + "'");
            //            qDebug() << data;

            //            QSqlRecord rec = query->r
            //            qDebug() << query->record();
        }
        else if(id == "1"){     //환자이름으로 검색했을 때

            query->exec("select * from patient WHERE patient_name = '" + data + "'");
            QSqlRecord rec = query->record();
            qDebug() << "Number of columns: " << rec.count();

            while (query->next()){
                for(int i = 0; i<rec.count() ; i++)
                {
                    if(i == 0)
                    {
                        qDebug() << "i: " << i << "data: " << query->value(i).toString();
                        QString data = query->value(i).toString() + "<CR>";
                        sendData += data;
                        qDebug() << "sendData: " << sendData;
                    }
                    else
                    {
                        qDebug() << "i: " << i << "data: " << query->value(i).toString();
                        QString data = query->value(i).toString() + "|";
                        sendData += data;
                        qDebug() << "sendData: " << sendData;
                    }
                }


                //                qDebug() << query->value(0).toString(); // output all names
                //                QString data = query->value(0).toString() + "<CR>";
                //                sendData += data;
                //                qDebug() << "sendData: " << sendData;
            }

            //            while (query->next())
            //            {
            //                for(int i=1; i<rec.count() ; i++)
            //                {
            //                    qDebug() << "i: " << i << "data: " << query->value(i).toString(); // output all names
            //                    QString data = query->value(i).toString() + "|";
            //                    sendData += data;
            //                    qDebug() << "sendData: " << sendData;
            //                }
            //            }

            //query->exec("SELECT * FROM patient WHERE patient_name = '" + data + "'");
        }

        socket->write(sendData.toStdString().c_str());
        //this->loadData();
    }
    else if(event == "PMO")     //환자 정보 수정: PMO(modify)
    {

    }
    else if(event == "PFN")     //수납 처리: PFN(finish)
    {

    }
    else if(event == "AWL")     //대기 환자 추가: AWL(Add to Wait list)   //환자정보에서는 내부적으로 대기목록에 추가됨. 뷰어로만 보내주면 될 듯(pid랑 이름만).
                                //=> 환자SW에서 대기 버튼 눌렀다는 정보를 서버에서 받고 해당 환자에 대한 여러가지 정보들을 촬영/뷰어SW로 보냄
                                //위에 있는 기능은 진료시작/촬영시작에 해당하는 기능인 걸로 결정했음. 여기서는 pid랑 이름만 주기로. 딱 대기목록에 추가될 정보만 보내자
    {
        qDebug()<< "받은 진료대기환자 정보: " << saveData;
        qDebug() << "뷰어쪽으로 보내줄 진료대기환자 정보(촬영SW에는 안 보내줌): " + event + "<CR>" + id + "<CR>" + data.split("|")[0];
        //socket->write(saveData.toStdString().c_str());  //이 정보는 촬영SW와 뷰어SW쪽으로 보내져야 함.(지금 써져있는 socket은 임시..
        QString sendWaitData = event + "<CR>" + id + "<CR>" + data.split("|")[0];
        socket->write(sendWaitData.toStdString().c_str());
    }

    /*촬영 SW 이벤트*/
    else if(event == "IPR")     //환자 준비: IPR(patient ready) [받는 정보: 이벤트, ID, 촬영 타입 / 보낼 정보: 이벤트, ID, 촬영 타입, 이름, 생년월일, 성별]
    {

    }
    else if(event == "ISV")     //저장 및 전송: ISV(save) [보낼 정보: ID, 촬영 타입, 이름, 생년월일, 성별]
    {

    }


    /*영상 뷰어 SW 이벤트*/
    else if(event == "VNT")     //처방전 작성: VNT (write note)
    {

    }
    else if(event == "VTS")     //진료 시작: VTS(treatment start)
                                //[받을 정보: 이벤트, pid / 보낼 정보: 이벤트, pid, 이름, 성별, 생년월일, 메모]
    {

    }
    else if(event == "VTF")     //진료 완료: VTF(treatment finish) [받을 정보: 이벤트, pid / 보낼 정보: 이벤트, pid]
    {
        socket->write(saveData.toStdString().c_str()); //뷰어쪽에서 받은 정보 그대로 환자관리SW에 전송=>환자관리에서는 event가 VTS일 시에 환자 진료 상태 진료중으로 변경해주면 될 듯
    }

    /*촬영 요청 이벤트(환자SW/뷰어SW->촬영SW)*/
    else if(event == "SRQ")     //촬영 의뢰: SRQ(shoot request)
    {

    }

    buffer->clear(); //버퍼 비워주기
}

qint32 ArrayToInt(QByteArray source)
{
    qint32 temp;
    QDataStream data(&source, QIODevice::ReadWrite);
    data >> temp;
    return temp;
}


void MainServer::loadData()
{
    /*DB를 추가하고 DB의 이름을 설정*/
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "databaseConnection");
    db.setDatabaseName("database.db");

    //QString patient_no, patient_name, patient_sex, patient_birthdate, patient_tel, patient_address, patient_memo;

    /*DB를 오픈해 새로운 테이블을 만듦*/
    if (db.open( )) {
        query= new QSqlQuery(db);
        query->exec("CREATE TABLE IF NOT EXISTS patient(patient_no VARCHAR(10) Primary Key,"
                    "patient_name VARCHAR(10) NOT NULL, patient_sex VARCHAR(5) NOT NULL, patient_birthdate VARCHAR(15) NOT NULL,"
                    "patient_tel VARCHAR(15) NOT NULL, patient_address VARCHAR(60) NOT NULL, patient_memo VARCHAR(100));");
        patientModel = new QSqlTableModel(this, db);
        patientModel->setTable("patient");
        patientModel->select();
        patientModel->setHeaderData(0, Qt::Horizontal, tr("No"));
        patientModel->setHeaderData(1, Qt::Horizontal, tr("Name"));
        patientModel->setHeaderData(2, Qt::Horizontal, tr("Sex"));
        patientModel->setHeaderData(3, Qt::Horizontal, tr("Birthdate"));
        patientModel->setHeaderData(4, Qt::Horizontal, tr("Telephone Number"));
        patientModel->setHeaderData(5, Qt::Horizontal, tr("Address"));
        patientModel->setHeaderData(6, Qt::Horizontal, tr("Memo"));
        ui->patientTableView->setModel(patientModel);

        query2 = new QSqlQuery(db);
        query2->exec("CREATE TABLE IF NOT EXISTS dentist(dentist_no VARCHAR(10) Primary Key,"
                     "dentist_name VARCHAR(10) NOT NULL, dentist_sex VARCHAR(5) NOT NULL, dentist_tel VARCHAR(15) NOT NULL);");

        //        query2->exec("CREATE TABLE IF NOT EXISTS dentist(dentist_no VARCHAR(10) Primary Key,"
        //                    "dentist_name VARCHAR(10) NOT NULL, dentist_sex VARCHAR(5) NOT NULL), dentist_tel VARCHAR(15) NOT NULL);");
        dentistModel = new QSqlTableModel(this, db);
        dentistModel->setTable("dentist");
        dentistModel->select();
        dentistModel->setHeaderData(0, Qt::Horizontal, tr("No"));
        dentistModel->setHeaderData(1, Qt::Horizontal, tr("Name"));
        dentistModel->setHeaderData(2, Qt::Horizontal, tr("Sex"));
        dentistModel->setHeaderData(3, Qt::Horizontal, tr("Telephone Number"));
        ui->dentistTableView->setModel(dentistModel);
        //의사 정보는 수정삭제 불가능하게 만들어놨음. 고정된 정보
        query2->exec("INSERT INTO dentist VALUES ('D00001', '이정연', '여성', '010-1234-5678')");
        query2->exec("INSERT INTO dentist VALUES ('D00002', '안다미로', '남성', '010-8765-4321')");
        query2->exec("INSERT INTO dentist VALUES ('D00003', '박병규', '남성', '010-3456-7890')");



        query3= new QSqlQuery(db);
        query3->exec("CREATE TABLE IF NOT EXISTS image(image_no VARCHAR(10) Primary Key, patient_no VARCHAR(10) NOT NULL,"
                     "dentist_no VARCHAR(10) NOT NULL, modality VARCHAR(10) NOT NULL, bodypart_examined VARCHAR(30) NOT NULL,"
                     "image_date VARCHAR(15) NOT NULL, image_path varchar(300) NOT NULL);");
        imageModel = new QSqlTableModel(this, db);
        imageModel->setTable("image");
        imageModel->select();
        imageModel->setHeaderData(0, Qt::Horizontal, tr("Image No"));
        imageModel->setHeaderData(1, Qt::Horizontal, tr("Patient No"));
        imageModel->setHeaderData(2, Qt::Horizontal, tr("Dentist No"));
        imageModel->setHeaderData(3, Qt::Horizontal, tr("Modality"));
        imageModel->setHeaderData(4, Qt::Horizontal, tr("Body Part"));
        imageModel->setHeaderData(5, Qt::Horizontal, tr("Image Date"));
        imageModel->setHeaderData(6, Qt::Horizontal, tr("Image Path"));
        ui->imageTableView->setModel(imageModel);

        query4= new QSqlQuery(db);
        query4->exec("CREATE TABLE IF NOT EXISTS report(report_no VARCHAR(10) Primary Key, patient_no VARCHAR(10) NOT NULL,"
                     "dentist_no VARCHAR(10) NOT NULL, report_date VARCHAR(15) NOT NULL, report_note VARCHAR(500) NOT NULL);");
        reportModel = new QSqlTableModel(this, db);
        reportModel->setTable("report");
        reportModel->select();
        reportModel->setHeaderData(0, Qt::Horizontal, tr("Report No"));
        reportModel->setHeaderData(1, Qt::Horizontal, tr("Patient No"));
        reportModel->setHeaderData(2, Qt::Horizontal, tr("Dentist No"));
        reportModel->setHeaderData(3, Qt::Horizontal, tr("Report Date"));
        reportModel->setHeaderData(4, Qt::Horizontal, tr("Report Note"));
        ui->reportTableView->setModel(reportModel);

        query5= new QSqlQuery(db);
        query5->exec("CREATE TABLE IF NOT EXISTS image_relation(report_no VARCHAR(10), image_no VARCHAR(10), CONSTRAINT relation Primary Key(report_no, image_no));");
        imageRelationModel = new QSqlTableModel(this, db);
        imageRelationModel->setTable("image_relation");
        imageRelationModel->select();
        imageRelationModel->setHeaderData(0, Qt::Horizontal, tr("Report No"));
        imageRelationModel->setHeaderData(1, Qt::Horizontal, tr("Image No"));
        ui->imageRelationTableView->setModel(imageRelationModel);








        //            view->setModel(model);
        //            model->query(Qs("select * from table"));
        //            model->select();

        //        query->exec(QString("INSERT INTO patient VALUES (%1, '%2', '%3', '%4', '%5', '%6', '%7')").arg(patient_no)
        //                    .arg(patient_name).arg(patient_sex).arg(patient_birthdate).arg(patient_tel).arg(patient_address)
        //                    .arg(patient_memo));

        //query->exec("SELECT * FROM patient where patient_sex = '" + sex + "'");
    }

}


QString MainServer::makeId( )
{
    int id;

    qDebug()<< "rowCount: " << patientModel->rowCount();

    if(patientModel->rowCount() == 0) {
        id = 1;
        qDebug()<< "it will return rowCount: 1";
        return "P" + QString::number(id).rightJustified(5,'0');
    } else {
        //auto id = patientModel->data(patientModel->index(patientModel->rowCount()-1, 0)).toInt();
        //qDebug() << "now" << patientModel->data(patientModel->index(patientModel->rowCount()-1, 0)).toInt();
        //id = patientModel->rowCount();
        //qDebug() << "last: " << query->
        //id++;

        int tempPid = patientModel->itemData(patientModel->index(patientModel->rowCount() - 1,0)).value(0).toString().right(5).toInt()+1; //마지막 row의 pid+1 값을 리턴
        qDebug() << "id is not 1, id: " << tempPid;
        qDebug()<< "it will return rowCount: " << "P" + QString::number(tempPid).rightJustified(5,'0');

//        qDebug() << "1: " << patientModel->itemData(patientModel->index(patientModel->rowCount() - 1,0));
//        qDebug() << "2: " << patientModel->itemData(patientModel->index(patientModel->rowCount() - 1,0)).value(0);
//        qDebug() << "3: " << patientModel->itemData(patientModel->index(patientModel->rowCount() - 1,0)).value(0).toString(); //"P00001"
//        qDebug() << "4: " <<  patientModel->itemData(patientModel->index(patientModel->rowCount() - 1,0)).value(0).toString().right(5).toInt();

        //return "P" + QString::number(id).rightJustified(5,'0');
        return "P" + QString::number(tempPid).rightJustified(5,'0');
    }
}

void MainServer::updateRecentData()
{
    patientModel->select();
}
