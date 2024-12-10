/********************************************************************************
** Form generated from reading UI file 'addingmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDINGMENU_H
#define UI_ADDINGMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addingMenu
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;

    void setupUi(QDialog *addingMenu)
    {
        if (addingMenu->objectName().isEmpty())
            addingMenu->setObjectName("addingMenu");
        addingMenu->resize(645, 390);
        lineEdit = new QLineEdit(addingMenu);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(62, 150, 121, 31));
        lineEdit_2 = new QLineEdit(addingMenu);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(190, 150, 121, 31));
        lineEdit_3 = new QLineEdit(addingMenu);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(320, 150, 121, 31));
        lineEdit_4 = new QLineEdit(addingMenu);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(450, 150, 121, 31));
        pushButton = new QPushButton(addingMenu);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(280, 220, 101, 41));

        retranslateUi(addingMenu);

        QMetaObject::connectSlotsByName(addingMenu);
    } // setupUi

    void retranslateUi(QDialog *addingMenu)
    {
        addingMenu->setWindowTitle(QCoreApplication::translate("addingMenu", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("addingMenu", "add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addingMenu: public Ui_addingMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDINGMENU_H
