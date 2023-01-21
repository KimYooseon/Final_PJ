/********************************************************************************
** Form generated from reading UI file 'medicalrecordmanager.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
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
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MedicalRecordManager
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QTreeWidget *recordTreeWidget;

    void setupUi(QWidget *MedicalRecordManager)
    {
        if (MedicalRecordManager->objectName().isEmpty())
            MedicalRecordManager->setObjectName(QString::fromUtf8("MedicalRecordManager"));
        MedicalRecordManager->resize(293, 323);
        gridLayout = new QGridLayout(MedicalRecordManager);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_7 = new QLabel(MedicalRecordManager);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);

        recordTreeWidget = new QTreeWidget(MedicalRecordManager);
        QFont font1;
        font1.setPointSize(11);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setFont(1, font1);
        __qtreewidgetitem->setFont(0, font1);
        recordTreeWidget->setHeaderItem(__qtreewidgetitem);
        recordTreeWidget->setObjectName(QString::fromUtf8("recordTreeWidget"));

        verticalLayout->addWidget(recordTreeWidget);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(MedicalRecordManager);

        QMetaObject::connectSlotsByName(MedicalRecordManager);
    } // setupUi

    void retranslateUi(QWidget *MedicalRecordManager)
    {
        MedicalRecordManager->setWindowTitle(QCoreApplication::translate("MedicalRecordManager", "Form", nullptr));
        label_7->setText(QCoreApplication::translate("MedicalRecordManager", "\354\247\204\353\243\214 \352\270\260\353\241\235", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = recordTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MedicalRecordManager", "\353\213\264\353\213\271 \354\235\230\354\202\254", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MedicalRecordManager", "\354\247\204\353\243\214 \353\202\240\354\247\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MedicalRecordManager: public Ui_MedicalRecordManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDICALRECORDMANAGER_H
