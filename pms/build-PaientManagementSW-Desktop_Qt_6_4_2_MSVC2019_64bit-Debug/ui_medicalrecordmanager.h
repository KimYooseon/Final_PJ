/********************************************************************************
** Form generated from reading UI file 'medicalrecordmanager.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDICALRECORDMANAGER_H
#define UI_MEDICALRECORDMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MedicalRecordManager
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QTableWidget *tableWidget_5;

    void setupUi(QWidget *MedicalRecordManager)
    {
        if (MedicalRecordManager->objectName().isEmpty())
            MedicalRecordManager->setObjectName("MedicalRecordManager");
        MedicalRecordManager->resize(293, 323);
        gridLayout = new QGridLayout(MedicalRecordManager);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_7 = new QLabel(MedicalRecordManager);
        label_7->setObjectName("label_7");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);

        tableWidget_5 = new QTableWidget(MedicalRecordManager);
        tableWidget_5->setObjectName("tableWidget_5");

        verticalLayout->addWidget(tableWidget_5);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(MedicalRecordManager);

        QMetaObject::connectSlotsByName(MedicalRecordManager);
    } // setupUi

    void retranslateUi(QWidget *MedicalRecordManager)
    {
        MedicalRecordManager->setWindowTitle(QCoreApplication::translate("MedicalRecordManager", "Form", nullptr));
        label_7->setText(QCoreApplication::translate("MedicalRecordManager", "\354\247\204\353\243\214 \352\270\260\353\241\235", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MedicalRecordManager: public Ui_MedicalRecordManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDICALRECORDMANAGER_H
