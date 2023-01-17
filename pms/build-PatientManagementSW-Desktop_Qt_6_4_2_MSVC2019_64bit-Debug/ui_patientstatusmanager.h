/********************************************************************************
** Form generated from reading UI file 'patientstatusmanager.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTSTATUSMANAGER_H
#define UI_PATIENTSTATUSMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatientStatusManager
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QTableWidget *tableWidget_2;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *PatientStatusManager)
    {
        if (PatientStatusManager->objectName().isEmpty())
            PatientStatusManager->setObjectName("PatientStatusManager");
        PatientStatusManager->resize(576, 345);
        gridLayout = new QGridLayout(PatientStatusManager);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_5 = new QLabel(PatientStatusManager);
        label_5->setObjectName("label_5");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        tableWidget = new QTableWidget(PatientStatusManager);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font1;
        font1.setPointSize(9);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(tableWidget);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");

        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_6 = new QLabel(PatientStatusManager);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        verticalLayout_3->addWidget(label_6);

        tableWidget_2 = new QTableWidget(PatientStatusManager);
        if (tableWidget_2->columnCount() < 1)
            tableWidget_2->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font1);
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        tableWidget_2->setObjectName("tableWidget_2");
        sizePolicy.setHeightForWidth(tableWidget_2->sizePolicy().hasHeightForWidth());
        tableWidget_2->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(tableWidget_2);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalSpacer_2 = new QSpacerItem(20, 148, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        pushButton_3 = new QPushButton(PatientStatusManager);
        pushButton_3->setObjectName("pushButton_3");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setMinimumSize(QSize(80, 80));

        verticalLayout_4->addWidget(pushButton_3);


        horizontalLayout_2->addLayout(verticalLayout_4);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        retranslateUi(PatientStatusManager);

        QMetaObject::connectSlotsByName(PatientStatusManager);
    } // setupUi

    void retranslateUi(QWidget *PatientStatusManager)
    {
        PatientStatusManager->setWindowTitle(QCoreApplication::translate("PatientStatusManager", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("PatientStatusManager", "\354\247\204\353\243\214\353\214\200\352\270\260 \354\240\225\353\263\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("PatientStatusManager", "\355\231\230\354\236\220 ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("PatientStatusManager", "\355\231\230\354\236\220 \354\235\264\353\246\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("PatientStatusManager", "\354\247\204\353\243\214 \355\230\204\355\231\251", nullptr));
        label_6->setText(QCoreApplication::translate("PatientStatusManager", "\354\210\230\353\202\251 \353\214\200\352\270\260 \354\240\225\353\263\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("PatientStatusManager", "\354\210\230\353\202\251\353\214\200\352\270\260 \353\252\251\353\241\235", nullptr));
        pushButton_3->setText(QCoreApplication::translate("PatientStatusManager", "\354\210\230\353\202\251\354\262\230\353\246\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientStatusManager: public Ui_PatientStatusManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTSTATUSMANAGER_H
