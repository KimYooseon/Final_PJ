/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_1;
    QAction *actionInitialize;
    QAction *actionMonthlyReservation;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QFrame *patientInfoFrame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFrame *patientStatusFrame;
    QFrame *medicalRecordFrame;
    QFrame *imageFrame;
    QHBoxLayout *horizontalLayout_4;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QFrame *enrollFrame;
    QPushButton *enrollButton;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QMenuBar *menubar;
    QMenu *menu_2;
    QMenu *menu_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1158, 992);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        QFont font;
        action_2->setFont(font);
        action_1 = new QAction(MainWindow);
        action_1->setObjectName(QString::fromUtf8("action_1"));
        actionInitialize = new QAction(MainWindow);
        actionInitialize->setObjectName(QString::fromUtf8("actionInitialize"));
        actionMonthlyReservation = new QAction(MainWindow);
        actionMonthlyReservation->setObjectName(QString::fromUtf8("actionMonthlyReservation"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        patientInfoFrame = new QFrame(centralwidget);
        patientInfoFrame->setObjectName(QString::fromUtf8("patientInfoFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(patientInfoFrame->sizePolicy().hasHeightForWidth());
        patientInfoFrame->setSizePolicy(sizePolicy);
        patientInfoFrame->setMinimumSize(QSize(400, 800));
        patientInfoFrame->setMaximumSize(QSize(400, 800));
        patientInfoFrame->setBaseSize(QSize(400, 800));
        patientInfoFrame->setStyleSheet(QString::fromUtf8(""));
        patientInfoFrame->setFrameShape(QFrame::WinPanel);
        patientInfoFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(patientInfoFrame);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        patientStatusFrame = new QFrame(centralwidget);
        patientStatusFrame->setObjectName(QString::fromUtf8("patientStatusFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(patientStatusFrame->sizePolicy().hasHeightForWidth());
        patientStatusFrame->setSizePolicy(sizePolicy1);
        patientStatusFrame->setMinimumSize(QSize(230, 0));
        patientStatusFrame->setBaseSize(QSize(230, 0));
        patientStatusFrame->setFrameShape(QFrame::WinPanel);
        patientStatusFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(patientStatusFrame);

        medicalRecordFrame = new QFrame(centralwidget);
        medicalRecordFrame->setObjectName(QString::fromUtf8("medicalRecordFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(medicalRecordFrame->sizePolicy().hasHeightForWidth());
        medicalRecordFrame->setSizePolicy(sizePolicy2);
        medicalRecordFrame->setMinimumSize(QSize(100, 0));
        medicalRecordFrame->setBaseSize(QSize(110, 0));
        medicalRecordFrame->setFrameShape(QFrame::WinPanel);
        medicalRecordFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(medicalRecordFrame);


        verticalLayout->addLayout(horizontalLayout);

        imageFrame = new QFrame(centralwidget);
        imageFrame->setObjectName(QString::fromUtf8("imageFrame"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(imageFrame->sizePolicy().hasHeightForWidth());
        imageFrame->setSizePolicy(sizePolicy3);
        imageFrame->setMinimumSize(QSize(500, 0));
        imageFrame->setBaseSize(QSize(340, 0));
        imageFrame->setFrameShape(QFrame::WinPanel);
        imageFrame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(imageFrame);


        horizontalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(true);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setMinimumSize(QSize(70, 40));
        textEdit->setMaximumSize(QSize(70, 40));
        textEdit->setBaseSize(QSize(70, 40));

        horizontalLayout_4->addWidget(textEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(130, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(2);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);
        label->setMinimumSize(QSize(240, 30));
        label->setMaximumSize(QSize(240, 30));
        label->setBaseSize(QSize(240, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225")});
        font1.setPointSize(20);
        font1.setBold(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        enrollFrame = new QFrame(centralwidget);
        enrollFrame->setObjectName(QString::fromUtf8("enrollFrame"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(enrollFrame->sizePolicy().hasHeightForWidth());
        enrollFrame->setSizePolicy(sizePolicy5);
        enrollFrame->setMinimumSize(QSize(200, 110));
        enrollFrame->setMaximumSize(QSize(200, 110));
        enrollFrame->setBaseSize(QSize(200, 110));
        enrollFrame->setFrameShape(QFrame::StyledPanel);
        enrollFrame->setFrameShadow(QFrame::Raised);
        enrollButton = new QPushButton(enrollFrame);
        enrollButton->setObjectName(QString::fromUtf8("enrollButton"));
        enrollButton->setGeometry(QRect(70, 20, 131, 71));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        enrollButton->setFont(font2);

        horizontalLayout_4->addWidget(enrollFrame);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1158, 17));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        MainWindow->setMenuBar(menubar);

        toolBar->addAction(actionInitialize);
        toolBar->addSeparator();
        toolBar->addAction(actionMonthlyReservation);
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu_2->addAction(action_2);
        menu_3->addAction(action_1);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "PatientManagement", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\355\231\224\353\251\264 \354\264\210\352\270\260\355\231\224", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\354\233\224\352\260\204 \354\235\274\354\240\225", nullptr));
        action_1->setText(QCoreApplication::translate("MainWindow", "\353\217\204\354\233\200\353\247\220", nullptr));
        actionInitialize->setText(QCoreApplication::translate("MainWindow", "\355\231\224\353\251\264 \354\264\210\352\270\260\355\231\224", nullptr));
        actionMonthlyReservation->setText(QCoreApplication::translate("MainWindow", "\354\233\224\352\260\204 \354\230\210\354\225\275", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\355\231\230\354\236\220 \352\264\200\353\246\254", nullptr));
        enrollButton->setText(QCoreApplication::translate("MainWindow", "\354\213\240\352\267\234 \355\231\230\354\236\220 \353\223\261\353\241\235", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\354\235\274\354\240\225 \355\231\225\354\235\270", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\353\217\204\354\233\200\353\247\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
