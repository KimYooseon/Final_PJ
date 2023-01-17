/********************************************************************************
** Form generated from reading UI file 'patientinfomanager.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTINFOMANAGER_H
#define UI_PATIENTINFOMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatientInfoManager
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QPushButton *modifyPatientInfo_pushButton;
    QLineEdit *searchLineEdit;
    QLabel *label_2;
    QPushButton *pushButton_7;
    QComboBox *searchComboBox;
    QTableWidget *tableWidget;

    void setupUi(QWidget *PatientInfoManager)
    {
        if (PatientInfoManager->objectName().isEmpty())
            PatientInfoManager->setObjectName("PatientInfoManager");
        PatientInfoManager->resize(315, 664);
        gridLayout = new QGridLayout(PatientInfoManager);
        gridLayout->setObjectName("gridLayout");
        pushButton_6 = new QPushButton(PatientInfoManager);
        pushButton_6->setObjectName("pushButton_6");

        gridLayout->addWidget(pushButton_6, 3, 1, 1, 1);

        pushButton = new QPushButton(PatientInfoManager);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);

        modifyPatientInfo_pushButton = new QPushButton(PatientInfoManager);
        modifyPatientInfo_pushButton->setObjectName("modifyPatientInfo_pushButton");

        gridLayout->addWidget(modifyPatientInfo_pushButton, 3, 0, 1, 1);

        searchLineEdit = new QLineEdit(PatientInfoManager);
        searchLineEdit->setObjectName("searchLineEdit");

        gridLayout->addWidget(searchLineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(PatientInfoManager);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        pushButton_7 = new QPushButton(PatientInfoManager);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(255, 255, 127)}"));

        gridLayout->addWidget(pushButton_7, 3, 2, 1, 1);

        searchComboBox = new QComboBox(PatientInfoManager);
        searchComboBox->addItem(QString());
        searchComboBox->addItem(QString());
        searchComboBox->setObjectName("searchComboBox");

        gridLayout->addWidget(searchComboBox, 0, 0, 1, 1);

        tableWidget = new QTableWidget(PatientInfoManager);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tableWidget->rowCount() < 7)
            tableWidget->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem7);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout->addWidget(tableWidget, 2, 0, 1, 3);


        retranslateUi(PatientInfoManager);

        QMetaObject::connectSlotsByName(PatientInfoManager);
    } // setupUi

    void retranslateUi(QWidget *PatientInfoManager)
    {
        PatientInfoManager->setWindowTitle(QCoreApplication::translate("PatientInfoManager", "Form", nullptr));
        pushButton_6->setText(QCoreApplication::translate("PatientInfoManager", "\355\231\230\354\236\220 \354\240\225\353\263\264\n"
"\354\202\255\354\240\234", nullptr));
        pushButton->setText(QCoreApplication::translate("PatientInfoManager", "\352\262\200\354\203\211", nullptr));
        modifyPatientInfo_pushButton->setText(QCoreApplication::translate("PatientInfoManager", "\355\231\230\354\236\220 \354\240\225\353\263\264\n"
"\354\210\230\354\240\225", nullptr));
        label_2->setText(QCoreApplication::translate("PatientInfoManager", "\355\231\230\354\236\220 \354\240\225\353\263\264", nullptr));
        pushButton_7->setText(QCoreApplication::translate("PatientInfoManager", "\353\214\200\352\270\260 \353\252\205\353\213\250\354\227\220\n"
"\354\266\224\352\260\200", nullptr));
        searchComboBox->setItemText(0, QCoreApplication::translate("PatientInfoManager", "\355\231\230\354\236\220 \353\262\210\355\230\270", nullptr));
        searchComboBox->setItemText(1, QCoreApplication::translate("PatientInfoManager", "\355\231\230\354\236\220 \354\235\264\353\246\204", nullptr));

        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("PatientInfoManager", "\354\240\225\353\263\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("PatientInfoManager", "\355\231\230\354\236\220 \353\262\210\355\230\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("PatientInfoManager", "\355\231\230\354\236\220 \354\235\264\353\246\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("PatientInfoManager", "\354\204\261\353\263\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("PatientInfoManager", "\354\203\235\353\205\204\354\233\224\354\235\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("PatientInfoManager", "\354\240\204\355\231\224\353\262\210\355\230\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("PatientInfoManager", "\354\243\274\354\206\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("PatientInfoManager", "\353\251\224\353\252\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientInfoManager: public Ui_PatientInfoManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTINFOMANAGER_H
