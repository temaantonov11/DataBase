/********************************************************************************
** Form generated from reading UI file 'newdatabase.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWDATABASE_H
#define UI_NEWDATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_newDataBase
{
public:
    QPushButton *pushButton;
    QPushButton *findButton;
    QPushButton *changeButton;
    QPushButton *pushButton_4;
    QPushButton *outputButton;

    void setupUi(QDialog *newDataBase)
    {
        if (newDataBase->objectName().isEmpty())
            newDataBase->setObjectName("newDataBase");
        newDataBase->resize(673, 423);
        pushButton = new QPushButton(newDataBase);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 130, 131, 41));
        findButton = new QPushButton(newDataBase);
        findButton->setObjectName("findButton");
        findButton->setGeometry(QRect(260, 190, 131, 41));
        changeButton = new QPushButton(newDataBase);
        changeButton->setObjectName("changeButton");
        changeButton->setGeometry(QRect(260, 250, 131, 41));
        pushButton_4 = new QPushButton(newDataBase);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(260, 310, 131, 41));
        outputButton = new QPushButton(newDataBase);
        outputButton->setObjectName("outputButton");
        outputButton->setGeometry(QRect(260, 70, 131, 41));

        retranslateUi(newDataBase);

        QMetaObject::connectSlotsByName(newDataBase);
    } // setupUi

    void retranslateUi(QDialog *newDataBase)
    {
        newDataBase->setWindowTitle(QCoreApplication::translate("newDataBase", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("newDataBase", "add record", nullptr));
        findButton->setText(QCoreApplication::translate("newDataBase", "find record", nullptr));
        changeButton->setText(QCoreApplication::translate("newDataBase", "change record", nullptr));
        pushButton_4->setText(QCoreApplication::translate("newDataBase", "backup", nullptr));
        outputButton->setText(QCoreApplication::translate("newDataBase", "outout data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newDataBase: public Ui_newDataBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWDATABASE_H
