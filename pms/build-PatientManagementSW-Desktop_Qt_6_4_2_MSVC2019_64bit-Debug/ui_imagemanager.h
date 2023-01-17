/********************************************************************************
** Form generated from reading UI file 'imagemanager.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEMANAGER_H
#define UI_IMAGEMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageManager
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QTableWidget *tableWidget_7;

    void setupUi(QWidget *ImageManager)
    {
        if (ImageManager->objectName().isEmpty())
            ImageManager->setObjectName("ImageManager");
        ImageManager->resize(795, 318);
        gridLayout = new QGridLayout(ImageManager);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_4 = new QLabel(ImageManager);
        label_4->setObjectName("label_4");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        tableWidget_7 = new QTableWidget(ImageManager);
        tableWidget_7->setObjectName("tableWidget_7");

        verticalLayout->addWidget(tableWidget_7);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ImageManager);

        QMetaObject::connectSlotsByName(ImageManager);
    } // setupUi

    void retranslateUi(QWidget *ImageManager)
    {
        ImageManager->setWindowTitle(QCoreApplication::translate("ImageManager", "Form", nullptr));
        label_4->setText(QCoreApplication::translate("ImageManager", "\354\265\234\352\267\274 \354\264\254\354\230\201 \354\202\254\354\247\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageManager: public Ui_ImageManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEMANAGER_H
