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
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *modifyPushButton;
    QPushButton *deletePushButton;
    QPushButton *WaitPushButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *searchComboBox;
    QLineEdit *searchLineEdit;
    QPushButton *searchPushButton;
    QTableWidget *clientInfoTableWidget;
    QWidget *widget2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *patientFace;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *PatientInfoManager)
    {
        if (PatientInfoManager->objectName().isEmpty())
            PatientInfoManager->setObjectName("PatientInfoManager");
        PatientInfoManager->resize(329, 666);
        widget = new QWidget(PatientInfoManager);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 550, 307, 59));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        modifyPushButton = new QPushButton(widget);
        modifyPushButton->setObjectName("modifyPushButton");
        QFont font;
        font.setPointSize(11);
        modifyPushButton->setFont(font);

        horizontalLayout->addWidget(modifyPushButton);

        deletePushButton = new QPushButton(widget);
        deletePushButton->setObjectName("deletePushButton");
        deletePushButton->setFont(font);

        horizontalLayout->addWidget(deletePushButton);

        WaitPushButton = new QPushButton(widget);
        WaitPushButton->setObjectName("WaitPushButton");
        WaitPushButton->setFont(font);
        WaitPushButton->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(255, 255, 127)}"));

        horizontalLayout->addWidget(WaitPushButton);

        widget1 = new QWidget(PatientInfoManager);
        widget1->setObjectName("widget1");
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        searchComboBox = new QComboBox(widget1);
        searchComboBox->addItem(QString());
        searchComboBox->addItem(QString());
        searchComboBox->setObjectName("searchComboBox");
        searchComboBox->setFont(font);

        horizontalLayout_2->addWidget(searchComboBox);

        searchLineEdit = new QLineEdit(widget1);
        searchLineEdit->setObjectName("searchLineEdit");
        searchLineEdit->setFont(font);

        horizontalLayout_2->addWidget(searchLineEdit);

        searchPushButton = new QPushButton(widget1);
        searchPushButton->setObjectName("searchPushButton");
        searchPushButton->setFont(font);

        horizontalLayout_2->addWidget(searchPushButton);

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
        QFont font1;
        font1.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font1);
        clientInfoTableWidget->setItem(0, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font1);
        clientInfoTableWidget->setItem(1, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFont(font1);
        clientInfoTableWidget->setItem(2, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font1);
        clientInfoTableWidget->setItem(3, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFont(font1);
        clientInfoTableWidget->setItem(4, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFont(font1);
        clientInfoTableWidget->setItem(5, 0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setFont(font1);
        clientInfoTableWidget->setItem(6, 0, __qtablewidgetitem14);
        clientInfoTableWidget->setObjectName("clientInfoTableWidget");
        clientInfoTableWidget->setGeometry(QRect(12, 277, 301, 271));
        clientInfoTableWidget->setFont(font);
        clientInfoTableWidget->setStyleSheet(QString::fromUtf8("QTableCornerButton::section {background-color: #FFFFFF;}\n"
"QHeaderView {background-color: #FFFFFF;}"));
        clientInfoTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        widget2 = new QWidget(PatientInfoManager);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(12, 54, 248, 218));
        verticalLayout = new QVBoxLayout(widget2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget2);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label_2->setFont(font2);

        verticalLayout->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        patientFace = new QLabel(widget2);
        patientFace->setObjectName("patientFace");
        patientFace->setMinimumSize(QSize(150, 180));
        patientFace->setMaximumSize(QSize(150, 180));
        patientFace->setFrameShape(QFrame::StyledPanel);

        horizontalLayout_3->addWidget(patientFace);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(PatientInfoManager);

        QMetaObject::connectSlotsByName(PatientInfoManager);
    } // setupUi

    void retranslateUi(QWidget *PatientInfoManager)
    {
        PatientInfoManager->setWindowTitle(QCoreApplication::translate("PatientInfoManager", "Form", nullptr));
        modifyPushButton->setText(QCoreApplication::translate("PatientInfoManager", "\355\231\230\354\236\220 \354\240\225\353\263\264\n"
"\354\210\230\354\240\225", nullptr));
        deletePushButton->setText(QCoreApplication::translate("PatientInfoManager", "\355\231\230\354\236\220 \354\240\225\353\263\264\n"
"\354\202\255\354\240\234", nullptr));
        WaitPushButton->setText(QCoreApplication::translate("PatientInfoManager", "\353\214\200\352\270\260 \353\252\205\353\213\250\354\227\220\n"
"\354\266\224\352\260\200", nullptr));
        searchComboBox->setItemText(0, QCoreApplication::translate("PatientInfoManager", "\355\231\230\354\236\220 \353\262\210\355\230\270", nullptr));
        searchComboBox->setItemText(1, QCoreApplication::translate("PatientInfoManager", "\355\231\230\354\236\220 \354\235\264\353\246\204", nullptr));

        searchPushButton->setText(QCoreApplication::translate("PatientInfoManager", "\352\262\200\354\203\211", nullptr));
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

        label_2->setText(QCoreApplication::translate("PatientInfoManager", "\355\231\230\354\236\220 \354\240\225\353\263\264", nullptr));
        patientFace->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PatientInfoManager: public Ui_PatientInfoManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTINFOMANAGER_H
