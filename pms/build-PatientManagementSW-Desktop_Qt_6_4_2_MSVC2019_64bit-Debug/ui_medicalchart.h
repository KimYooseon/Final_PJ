/********************************************************************************
** Form generated from reading UI file 'medicalchart.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDICALCHART_H
#define UI_MEDICALCHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MedicalChart
{
public:
    QLabel *label;
    QLabel *label_2;
    QFrame *frame;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QPlainTextEdit *plainTextEdit;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_16;
    QLineEdit *lineEdit_17;
    QPlainTextEdit *plainTextEdit_2;
    QLabel *label_3;

    void setupUi(QWidget *MedicalChart)
    {
        if (MedicalChart->objectName().isEmpty())
            MedicalChart->setObjectName("MedicalChart");
        MedicalChart->resize(610, 645);
        MedicalChart->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(MedicalChart);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 10, 601, 51));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(MedicalChart);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(460, 60, 121, 20));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("border-bottom-width: 1px;\n"
"border-bottom-style: solid;\n"
"border-radius: 0px;"));
        frame = new QFrame(MedicalChart);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(20, 90, 561, 531));
        QFont font2;
        font2.setPointSize(11);
        frame->setFont(font2);
        frame->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
"border-style: solid;\n"
"border-radius: 0px;"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(0, 0, 91, 41));
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
"border-style: solid;\n"
"border-radius: 0px;"));
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(true);
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(220, 0, 91, 41));
        lineEdit_2->setFont(font2);
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
"border-style: solid;\n"
"border-radius: 0px;"));
        lineEdit_2->setAlignment(Qt::AlignCenter);
        lineEdit_2->setReadOnly(true);
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(450, 0, 51, 41));
        lineEdit_3->setFont(font2);
        lineEdit_3->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
"border-style: solid;\n"
"border-radius: 0px;"));
        lineEdit_3->setAlignment(Qt::AlignCenter);
        lineEdit_3->setReadOnly(true);
        lineEdit_4 = new QLineEdit(frame);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(90, 0, 131, 41));
        lineEdit_4->setAlignment(Qt::AlignCenter);
        lineEdit_4->setReadOnly(true);
        lineEdit_5 = new QLineEdit(frame);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(310, 0, 141, 41));
        lineEdit_5->setAlignment(Qt::AlignCenter);
        lineEdit_5->setReadOnly(true);
        lineEdit_6 = new QLineEdit(frame);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(500, 0, 61, 41));
        lineEdit_6->setAlignment(Qt::AlignCenter);
        lineEdit_6->setReadOnly(true);
        lineEdit_7 = new QLineEdit(frame);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(0, 40, 91, 41));
        lineEdit_7->setFont(font2);
        lineEdit_7->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
"border-style: solid;\n"
"border-radius: 0px;"));
        lineEdit_7->setAlignment(Qt::AlignCenter);
        lineEdit_7->setReadOnly(true);
        lineEdit_8 = new QLineEdit(frame);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(90, 40, 191, 41));
        lineEdit_8->setFont(font2);
        lineEdit_8->setAlignment(Qt::AlignCenter);
        lineEdit_8->setReadOnly(true);
        lineEdit_9 = new QLineEdit(frame);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setGeometry(QRect(280, 40, 91, 41));
        lineEdit_9->setFont(font2);
        lineEdit_9->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
"border-style: solid;\n"
"border-radius: 0px;"));
        lineEdit_9->setAlignment(Qt::AlignCenter);
        lineEdit_9->setReadOnly(true);
        lineEdit_10 = new QLineEdit(frame);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setGeometry(QRect(370, 40, 191, 41));
        lineEdit_10->setFont(font2);
        lineEdit_10->setAlignment(Qt::AlignCenter);
        lineEdit_10->setReadOnly(true);
        lineEdit_11 = new QLineEdit(frame);
        lineEdit_11->setObjectName("lineEdit_11");
        lineEdit_11->setGeometry(QRect(0, 80, 51, 71));
        lineEdit_11->setFont(font2);
        lineEdit_11->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
"border-style: solid;\n"
"border-radius: 0px;"));
        lineEdit_11->setAlignment(Qt::AlignCenter);
        lineEdit_11->setReadOnly(true);
        plainTextEdit = new QPlainTextEdit(frame);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(50, 80, 511, 71));
        plainTextEdit->setFont(font2);
        plainTextEdit->setReadOnly(true);
        lineEdit_12 = new QLineEdit(frame);
        lineEdit_12->setObjectName("lineEdit_12");
        lineEdit_12->setGeometry(QRect(0, 150, 561, 11));
        lineEdit_12->setReadOnly(true);
        lineEdit_13 = new QLineEdit(frame);
        lineEdit_13->setObjectName("lineEdit_13");
        lineEdit_13->setGeometry(QRect(0, 160, 121, 41));
        lineEdit_13->setFont(font2);
        lineEdit_13->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
"border-style: solid;\n"
"border-radius: 0px;"));
        lineEdit_13->setAlignment(Qt::AlignCenter);
        lineEdit_13->setReadOnly(true);
        lineEdit_14 = new QLineEdit(frame);
        lineEdit_14->setObjectName("lineEdit_14");
        lineEdit_14->setGeometry(QRect(120, 160, 161, 41));
        lineEdit_14->setAlignment(Qt::AlignCenter);
        lineEdit_14->setReadOnly(true);
        lineEdit_15 = new QLineEdit(frame);
        lineEdit_15->setObjectName("lineEdit_15");
        lineEdit_15->setGeometry(QRect(280, 160, 111, 41));
        lineEdit_15->setFont(font2);
        lineEdit_15->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
"border-style: solid;\n"
"border-radius: 0px;"));
        lineEdit_15->setAlignment(Qt::AlignCenter);
        lineEdit_15->setReadOnly(true);
        lineEdit_16 = new QLineEdit(frame);
        lineEdit_16->setObjectName("lineEdit_16");
        lineEdit_16->setGeometry(QRect(390, 160, 171, 41));
        lineEdit_16->setAlignment(Qt::AlignCenter);
        lineEdit_16->setReadOnly(true);
        lineEdit_17 = new QLineEdit(frame);
        lineEdit_17->setObjectName("lineEdit_17");
        lineEdit_17->setGeometry(QRect(0, 200, 91, 331));
        lineEdit_17->setFont(font2);
        lineEdit_17->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
"border-style: solid;\n"
"border-radius: 0px;"));
        lineEdit_17->setAlignment(Qt::AlignCenter);
        lineEdit_17->setReadOnly(true);
        plainTextEdit_2 = new QPlainTextEdit(frame);
        plainTextEdit_2->setObjectName("plainTextEdit_2");
        plainTextEdit_2->setGeometry(QRect(90, 200, 471, 331));
        plainTextEdit_2->setFont(font2);
        plainTextEdit_2->setReadOnly(true);
        label_3 = new QLabel(MedicalChart);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 60, 101, 20));
        label_3->setFont(font1);

        retranslateUi(MedicalChart);

        QMetaObject::connectSlotsByName(MedicalChart);
    } // setupUi

    void retranslateUi(QWidget *MedicalChart)
    {
        MedicalChart->setWindowTitle(QCoreApplication::translate("MedicalChart", "Form", nullptr));
        label->setText(QCoreApplication::translate("MedicalChart", "\354\247\204\353\243\214 \353\202\264\354\227\255", nullptr));
        label_2->setText(QCoreApplication::translate("MedicalChart", "No.", nullptr));
        lineEdit->setText(QCoreApplication::translate("MedicalChart", "\355\231\230\354\236\220\353\262\210\355\230\270", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MedicalChart", "\355\231\230\354\236\220\354\204\261\353\252\205", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("MedicalChart", "\354\204\261\353\263\204", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("MedicalChart", "\354\203\235\353\205\204\354\233\224\354\235\274", nullptr));
        lineEdit_8->setText(QString());
        lineEdit_9->setText(QCoreApplication::translate("MedicalChart", "\354\240\204\355\231\224\353\262\210\355\230\270", nullptr));
        lineEdit_10->setText(QString());
        lineEdit_11->setText(QCoreApplication::translate("MedicalChart", "\354\243\274\354\206\214", nullptr));
        plainTextEdit->setPlainText(QString());
        lineEdit_13->setText(QCoreApplication::translate("MedicalChart", "\353\213\264\353\213\271\354\235\230\354\202\254\353\262\210\355\230\270", nullptr));
        lineEdit_15->setText(QCoreApplication::translate("MedicalChart", "\353\213\264\353\213\271\354\235\230\354\202\254\353\252\205", nullptr));
        lineEdit_17->setText(QCoreApplication::translate("MedicalChart", "\354\247\204\353\241\234 \354\206\214\352\262\254", nullptr));
        plainTextEdit_2->setPlainText(QString());
        label_3->setText(QCoreApplication::translate("MedicalChart", "\354\247\204\353\243\214\354\235\274\354\236\220:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MedicalChart: public Ui_MedicalChart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDICALCHART_H
