/********************************************************************************
** Form generated from reading UI file 'enrollmanager.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENROLLMANAGER_H
#define UI_ENROLLMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EnrollManager
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_7;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QGridLayout *gridLayout;
    QLineEdit *pidLineEdit;
    QLabel *label;
    QLabel *label_8;
    QLineEdit *nameLineEdit;
    QLabel *label_5;
    QLabel *label_3;
    QDateEdit *birthDateEdit;
    QTextEdit *addressTextEdit;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QRadioButton *maleRadioButton;
    QRadioButton *femaleRadioButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *telLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QTextEdit *memoTextEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *enrollPushButton;

    void setupUi(QWidget *EnrollManager)
    {
        if (EnrollManager->objectName().isEmpty())
            EnrollManager->setObjectName("EnrollManager");
        EnrollManager->resize(700, 350);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EnrollManager->sizePolicy().hasHeightForWidth());
        EnrollManager->setSizePolicy(sizePolicy);
        EnrollManager->setSizeIncrement(QSize(0, 0));
        gridLayout_2 = new QGridLayout(EnrollManager);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_7 = new QLabel(EnrollManager);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("qproperty-alignment: AlignCenter;"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_7);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pidLineEdit = new QLineEdit(EnrollManager);
        pidLineEdit->setObjectName("pidLineEdit");
        pidLineEdit->setEnabled(true);
        pidLineEdit->setMinimumSize(QSize(0, 30));
        pidLineEdit->setReadOnly(true);

        gridLayout->addWidget(pidLineEdit, 0, 1, 1, 1);

        label = new QLabel(EnrollManager);
        label->setObjectName("label");
        label->setMinimumSize(QSize(45, 0));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        label->setFont(font1);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_8 = new QLabel(EnrollManager);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(0, 30));
        label_8->setFont(font1);

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        nameLineEdit = new QLineEdit(EnrollManager);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setMinimumSize(QSize(0, 30));
        QFont font2;
        font2.setPointSize(11);
        nameLineEdit->setFont(font2);

        gridLayout->addWidget(nameLineEdit, 1, 1, 1, 1);

        label_5 = new QLabel(EnrollManager);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(80, 0));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_3 = new QLabel(EnrollManager);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(60, 0));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        birthDateEdit = new QDateEdit(EnrollManager);
        birthDateEdit->setObjectName("birthDateEdit");
        birthDateEdit->setMinimumSize(QSize(0, 30));
        birthDateEdit->setFont(font2);

        gridLayout->addWidget(birthDateEdit, 2, 1, 1, 1);

        addressTextEdit = new QTextEdit(EnrollManager);
        addressTextEdit->setObjectName("addressTextEdit");
        addressTextEdit->setFont(font2);

        gridLayout->addWidget(addressTextEdit, 3, 1, 1, 1);


        horizontalLayout_5->addLayout(gridLayout);

        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(EnrollManager);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(45, 30));
        label_2->setMaximumSize(QSize(80, 16777215));
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        maleRadioButton = new QRadioButton(EnrollManager);
        maleRadioButton->setObjectName("maleRadioButton");

        horizontalLayout_2->addWidget(maleRadioButton);

        femaleRadioButton = new QRadioButton(EnrollManager);
        femaleRadioButton->setObjectName("femaleRadioButton");

        horizontalLayout_2->addWidget(femaleRadioButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(EnrollManager);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(80, 0));
        label_4->setMaximumSize(QSize(80, 16777215));
        label_4->setFont(font1);

        horizontalLayout_3->addWidget(label_4);

        telLineEdit = new QLineEdit(EnrollManager);
        telLineEdit->setObjectName("telLineEdit");
        telLineEdit->setMinimumSize(QSize(0, 30));
        telLineEdit->setFont(font2);

        horizontalLayout_3->addWidget(telLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_6 = new QLabel(EnrollManager);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(80, 0));
        label_6->setMaximumSize(QSize(80, 16777215));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_4->addWidget(label_6);

        memoTextEdit = new QTextEdit(EnrollManager);
        memoTextEdit->setObjectName("memoTextEdit");
        memoTextEdit->setFont(font2);

        horizontalLayout_4->addWidget(memoTextEdit);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(398, 37, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        enrollPushButton = new QPushButton(EnrollManager);
        enrollPushButton->setObjectName("enrollPushButton");
        enrollPushButton->setMinimumSize(QSize(80, 40));
        enrollPushButton->setFont(font1);

        horizontalLayout->addWidget(enrollPushButton);


        verticalLayout_3->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(EnrollManager);

        QMetaObject::connectSlotsByName(EnrollManager);
    } // setupUi

    void retranslateUi(QWidget *EnrollManager)
    {
        EnrollManager->setWindowTitle(QCoreApplication::translate("EnrollManager", "Form", nullptr));
        label_7->setText(QCoreApplication::translate("EnrollManager", "\354\213\240\352\267\234 \355\231\230\354\236\220 \353\223\261\353\241\235", nullptr));
        label->setText(QCoreApplication::translate("EnrollManager", "\354\235\264\353\246\204", nullptr));
        label_8->setText(QCoreApplication::translate("EnrollManager", "\355\231\230\354\236\220 \353\262\210\355\230\270", nullptr));
        label_5->setText(QCoreApplication::translate("EnrollManager", "\354\243\274\354\206\214", nullptr));
        label_3->setText(QCoreApplication::translate("EnrollManager", "\354\203\235\353\205\204\354\233\224\354\235\274", nullptr));
        label_2->setText(QCoreApplication::translate("EnrollManager", "\354\204\261\353\263\204", nullptr));
        maleRadioButton->setText(QCoreApplication::translate("EnrollManager", "\353\202\250\354\204\261", nullptr));
        femaleRadioButton->setText(QCoreApplication::translate("EnrollManager", "\354\227\254\354\204\261", nullptr));
        label_4->setText(QCoreApplication::translate("EnrollManager", "\354\240\204\355\231\224\353\262\210\355\230\270", nullptr));
        label_6->setText(QCoreApplication::translate("EnrollManager", "\353\251\224\353\252\250", nullptr));
        enrollPushButton->setText(QCoreApplication::translate("EnrollManager", "\353\223\261\353\241\235", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnrollManager: public Ui_EnrollManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENROLLMANAGER_H
