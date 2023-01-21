/********************************************************************************
** Form generated from reading UI file 'patientinfomanager.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTINFOMANAGER_H
#define UI_PATIENTINFOMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatientInfoManager
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *searchComboBox;
    QLineEdit *searchLineEdit;
    QPushButton *searchPushButton;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *patientFace;
    QSpacerItem *horizontalSpacer;
    QTableWidget *clientInfoTableWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *modifyPushButton;
    QPushButton *deletePushButton;
    QPushButton *WaitPushButton;

    void setupUi(QWidget *PatientInfoManager)
    {
        if (PatientInfoManager->objectName().isEmpty())
            PatientInfoManager->setObjectName(QString::fromUtf8("PatientInfoManager"));
        PatientInfoManager->resize(315, 664);
        gridLayout = new QGridLayout(PatientInfoManager);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        searchComboBox = new QComboBox(PatientInfoManager);
        searchComboBox->addItem(QString());
        searchComboBox->addItem(QString());
        searchComboBox->setObjectName(QString::fromUtf8("searchComboBox"));
        QFont font;
        font.setPointSize(11);
        searchComboBox->setFont(font);

        horizontalLayout_2->addWidget(searchComboBox);

        searchLineEdit = new QLineEdit(PatientInfoManager);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));
        searchLineEdit->setFont(font);

        horizontalLayout_2->addWidget(searchLineEdit);

        searchPushButton = new QPushButton(PatientInfoManager);
        searchPushButton->setObjectName(QString::fromUtf8("searchPushButton"));
        searchPushButton->setFont(font);

        horizontalLayout_2->addWidget(searchPushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        label_2 = new QLabel(PatientInfoManager);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        patientFace = new QLabel(PatientInfoManager);
        patientFace->setObjectName(QString::fromUtf8("patientFace"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(patientFace->sizePolicy().hasHeightForWidth());
        patientFace->setSizePolicy(sizePolicy);
        patientFace->setMinimumSize(QSize(150, 180));
        patientFace->setMaximumSize(QSize(150, 180));
        patientFace->setFrameShape(QFrame::StyledPanel);

        horizontalLayout_3->addWidget(patientFace);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        clientInfoTableWidget = new QTableWidget(PatientInfoManager);
        if (clientInfoTableWidget->columnCount() < 1)
            clientInfoTableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        clientInfoTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (clientInfoTableWidget->rowCount() < 7)
            clientInfoTableWidget->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        clientInfoTableWidget->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        clientInfoTableWidget->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        clientInfoTableWidget->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        clientInfoTableWidget->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font);
        clientInfoTableWidget->setVerticalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font);
        clientInfoTableWidget->setVerticalHeaderItem(5, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font);
        clientInfoTableWidget->setVerticalHeaderItem(6, __qtablewidgetitem7);
        QFont font2;
        font2.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font2);
        clientInfoTableWidget->setItem(0, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font2);
        clientInfoTableWidget->setItem(1, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFont(font2);
        clientInfoTableWidget->setItem(2, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font2);
        clientInfoTableWidget->setItem(3, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFont(font2);
        clientInfoTableWidget->setItem(4, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFont(font2);
        clientInfoTableWidget->setItem(5, 0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setFont(font2);
        clientInfoTableWidget->setItem(6, 0, __qtablewidgetitem14);
        clientInfoTableWidget->setObjectName(QString::fromUtf8("clientInfoTableWidget"));
        clientInfoTableWidget->setFont(font);
        clientInfoTableWidget->setStyleSheet(QString::fromUtf8("QTableCornerButton::section {background-color: #FFFFFF;}\n"
"QHeaderView {background-color: #FFFFFF;}"));
        clientInfoTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(clientInfoTableWidget);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        modifyPushButton = new QPushButton(PatientInfoManager);
        modifyPushButton->setObjectName(QString::fromUtf8("modifyPushButton"));
        modifyPushButton->setFont(font);

        horizontalLayout->addWidget(modifyPushButton);

        deletePushButton = new QPushButton(PatientInfoManager);
        deletePushButton->setObjectName(QString::fromUtf8("deletePushButton"));
        deletePushButton->setFont(font);

        horizontalLayout->addWidget(deletePushButton);

        WaitPushButton = new QPushButton(PatientInfoManager);
        WaitPushButton->setObjectName(QString::fromUtf8("WaitPushButton"));
        WaitPushButton->setFont(font);
        WaitPushButton->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(255, 255, 127)}"));

        horizontalLayout->addWidget(WaitPushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(PatientInfoManager);

        QMetaObject::connectSlotsByName(PatientInfoManager);
    } // setupUi

    void retranslateUi(QWidget *PatientInfoManager)
    {
        PatientInfoManager->setWindowTitle(QCoreApplication::translate("PatientInfoManager", "Form", nullptr));
        searchComboBox->setItemText(0, QCoreApplication::translate("PatientInfoManager", "\355\231\230\354\236\220 \353\262\210\355\230\270", nullptr));
        searchComboBox->setItemText(1, QCoreApplication::translate("PatientInfoManager", "\355\231\230\354\236\220 \354\235\264\353\246\204", nullptr));

        searchPushButton->setText(QCoreApplication::translate("PatientInfoManager", "\352\262\200\354\203\211", nullptr));
        label_2->setText(QCoreApplication::translate("PatientInfoManager", "\355\231\230\354\236\220 \354\240\225\353\263\264", nullptr));
        patientFace->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = clientInfoTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("PatientInfoManager", "\354\240\225\353\263\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = clientInfoTableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("PatientInfoManager", "\355\231\230\354\236\220 \353\262\210\355\230\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = clientInfoTableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("PatientInfoManager", "\355\231\230\354\236\220 \354\235\264\353\246\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = clientInfoTableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("PatientInfoManager", "\354\204\261\353\263\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = clientInfoTableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("PatientInfoManager", "\354\203\235\353\205\204\354\233\224\354\235\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = clientInfoTableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("PatientInfoManager", "\354\240\204\355\231\224\353\262\210\355\230\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = clientInfoTableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("PatientInfoManager", "\354\243\274\354\206\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = clientInfoTableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("PatientInfoManager", "\353\251\224\353\252\250", nullptr));

        const bool __sortingEnabled = clientInfoTableWidget->isSortingEnabled();
        clientInfoTableWidget->setSortingEnabled(false);
        clientInfoTableWidget->setSortingEnabled(__sortingEnabled);

        modifyPushButton->setText(QCoreApplication::translate("PatientInfoManager", "\355\231\230\354\236\220 \354\240\225\353\263\264\n"
"\354\210\230\354\240\225", nullptr));
        deletePushButton->setText(QCoreApplication::translate("PatientInfoManager", "\355\231\230\354\236\220 \354\240\225\353\263\264\n"
"\354\202\255\354\240\234", nullptr));
        WaitPushButton->setText(QCoreApplication::translate("PatientInfoManager", "\353\214\200\352\270\260 \353\252\205\353\213\250\354\227\220\n"
"\354\266\224\352\260\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientInfoManager: public Ui_PatientInfoManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTINFOMANAGER_H
