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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatientStatusManager
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QTreeWidget *waitTreatmentTreeWidget;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_3;
    QCheckBox *cephCheckBox;
    QCheckBox *panoCheckBox;
    QPushButton *shootRequestPushButton;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QTreeWidget *waitPaymentTreeWidget;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QPushButton *paymentPushButton;

    void setupUi(QWidget *PatientStatusManager)
    {
        if (PatientStatusManager->objectName().isEmpty())
            PatientStatusManager->setObjectName("PatientStatusManager");
        PatientStatusManager->resize(576, 345);
        gridLayout = new QGridLayout(PatientStatusManager);
        gridLayout->setObjectName("gridLayout");
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

        waitTreatmentTreeWidget = new QTreeWidget(PatientStatusManager);
        waitTreatmentTreeWidget->setObjectName("waitTreatmentTreeWidget");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(waitTreatmentTreeWidget->sizePolicy().hasHeightForWidth());
        waitTreatmentTreeWidget->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(11);
        waitTreatmentTreeWidget->setFont(font1);
        waitTreatmentTreeWidget->setAlternatingRowColors(false);
        waitTreatmentTreeWidget->setRootIsDecorated(false);

        verticalLayout->addWidget(waitTreatmentTreeWidget);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalSpacer_3 = new QSpacerItem(20, 148, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        cephCheckBox = new QCheckBox(PatientStatusManager);
        cephCheckBox->setObjectName("cephCheckBox");
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        cephCheckBox->setFont(font2);
        cephCheckBox->setChecked(true);

        verticalLayout_5->addWidget(cephCheckBox);

        panoCheckBox = new QCheckBox(PatientStatusManager);
        panoCheckBox->setObjectName("panoCheckBox");
        panoCheckBox->setFont(font2);
        panoCheckBox->setChecked(true);

        verticalLayout_5->addWidget(panoCheckBox);

        shootRequestPushButton = new QPushButton(PatientStatusManager);
        shootRequestPushButton->setObjectName("shootRequestPushButton");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(shootRequestPushButton->sizePolicy().hasHeightForWidth());
        shootRequestPushButton->setSizePolicy(sizePolicy1);
        shootRequestPushButton->setMinimumSize(QSize(80, 80));
        shootRequestPushButton->setFont(font2);

        verticalLayout_5->addWidget(shootRequestPushButton);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");

        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_6 = new QLabel(PatientStatusManager);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        verticalLayout_3->addWidget(label_6);

        waitPaymentTreeWidget = new QTreeWidget(PatientStatusManager);
        waitPaymentTreeWidget->setObjectName("waitPaymentTreeWidget");
        sizePolicy.setHeightForWidth(waitPaymentTreeWidget->sizePolicy().hasHeightForWidth());
        waitPaymentTreeWidget->setSizePolicy(sizePolicy);
        waitPaymentTreeWidget->setFont(font1);
        waitPaymentTreeWidget->setAlternatingRowColors(false);
        waitPaymentTreeWidget->setRootIsDecorated(false);
        waitPaymentTreeWidget->setUniformRowHeights(false);

        verticalLayout_3->addWidget(waitPaymentTreeWidget);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalSpacer_2 = new QSpacerItem(20, 148, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        paymentPushButton = new QPushButton(PatientStatusManager);
        paymentPushButton->setObjectName("paymentPushButton");
        sizePolicy1.setHeightForWidth(paymentPushButton->sizePolicy().hasHeightForWidth());
        paymentPushButton->setSizePolicy(sizePolicy1);
        paymentPushButton->setMinimumSize(QSize(80, 80));
        paymentPushButton->setFont(font2);

        verticalLayout_4->addWidget(paymentPushButton);


        horizontalLayout_2->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);


        retranslateUi(PatientStatusManager);

        QMetaObject::connectSlotsByName(PatientStatusManager);
    } // setupUi

    void retranslateUi(QWidget *PatientStatusManager)
    {
        PatientStatusManager->setWindowTitle(QCoreApplication::translate("PatientStatusManager", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("PatientStatusManager", "\354\247\204\353\243\214\353\214\200\352\270\260 \354\240\225\353\263\264", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = waitTreatmentTreeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("PatientStatusManager", "\354\247\204\353\243\214 \355\230\204\355\231\251", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("PatientStatusManager", "\355\231\230\354\236\220 \354\235\264\353\246\204", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("PatientStatusManager", "\355\231\230\354\236\220 ID", nullptr));
        cephCheckBox->setText(QCoreApplication::translate("PatientStatusManager", "Ceph", nullptr));
        panoCheckBox->setText(QCoreApplication::translate("PatientStatusManager", "Pano", nullptr));
        shootRequestPushButton->setText(QCoreApplication::translate("PatientStatusManager", "\354\264\254\354\230\201 \354\235\230\353\242\260", nullptr));
        label_6->setText(QCoreApplication::translate("PatientStatusManager", "\354\210\230\353\202\251 \353\214\200\352\270\260 \354\240\225\353\263\264", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = waitPaymentTreeWidget->headerItem();
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("PatientStatusManager", "\355\231\230\354\236\220 \354\235\264\353\246\204", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("PatientStatusManager", "\355\231\230\354\236\220 ID", nullptr));
        paymentPushButton->setText(QCoreApplication::translate("PatientStatusManager", "\354\210\230\353\202\251\354\262\230\353\246\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientStatusManager: public Ui_PatientStatusManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTSTATUSMANAGER_H
