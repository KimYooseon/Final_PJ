/********************************************************************************
** Form generated from reading UI file 'mainserver.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSERVER_H
#define UI_MAINSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainServer
{
public:
    QTextEdit *textEdit;
    QTabWidget *tabWidget;
    QWidget *patient;
    QTableView *patientTableView;
    QWidget *dentist;
    QTableView *dentistTableView;
    QWidget *image;
    QTableView *imageTableView;
    QWidget *report;
    QTableView *reportTableView;
    QWidget *imageRelation;
    QTableView *imageRelationTableView;

    void setupUi(QWidget *MainServer)
    {
        if (MainServer->objectName().isEmpty())
            MainServer->setObjectName(QString::fromUtf8("MainServer"));
        MainServer->resize(1430, 600);
        textEdit = new QTextEdit(MainServer);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 381, 581));
        tabWidget = new QTabWidget(MainServer);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(410, 10, 1011, 581));
        patient = new QWidget();
        patient->setObjectName(QString::fromUtf8("patient"));
        patientTableView = new QTableView(patient);
        patientTableView->setObjectName(QString::fromUtf8("patientTableView"));
        patientTableView->setGeometry(QRect(0, 10, 1001, 531));
        tabWidget->addTab(patient, QString());
        dentist = new QWidget();
        dentist->setObjectName(QString::fromUtf8("dentist"));
        dentistTableView = new QTableView(dentist);
        dentistTableView->setObjectName(QString::fromUtf8("dentistTableView"));
        dentistTableView->setGeometry(QRect(0, 10, 1001, 531));
        tabWidget->addTab(dentist, QString());
        image = new QWidget();
        image->setObjectName(QString::fromUtf8("image"));
        imageTableView = new QTableView(image);
        imageTableView->setObjectName(QString::fromUtf8("imageTableView"));
        imageTableView->setGeometry(QRect(0, 10, 1001, 531));
        tabWidget->addTab(image, QString());
        report = new QWidget();
        report->setObjectName(QString::fromUtf8("report"));
        reportTableView = new QTableView(report);
        reportTableView->setObjectName(QString::fromUtf8("reportTableView"));
        reportTableView->setGeometry(QRect(0, 10, 1001, 531));
        tabWidget->addTab(report, QString());
        imageRelation = new QWidget();
        imageRelation->setObjectName(QString::fromUtf8("imageRelation"));
        imageRelationTableView = new QTableView(imageRelation);
        imageRelationTableView->setObjectName(QString::fromUtf8("imageRelationTableView"));
        imageRelationTableView->setGeometry(QRect(0, 10, 1001, 531));
        tabWidget->addTab(imageRelation, QString());

        retranslateUi(MainServer);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainServer);
    } // setupUi

    void retranslateUi(QWidget *MainServer)
    {
        MainServer->setWindowTitle(QCoreApplication::translate("MainServer", "Server", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(patient), QCoreApplication::translate("MainServer", "patient", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(dentist), QCoreApplication::translate("MainServer", "dentist", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(image), QCoreApplication::translate("MainServer", "image", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(report), QCoreApplication::translate("MainServer", "report", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(imageRelation), QCoreApplication::translate("MainServer", "imageRelation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainServer: public Ui_MainServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSERVER_H
