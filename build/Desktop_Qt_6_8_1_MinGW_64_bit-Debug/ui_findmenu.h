/********************************************************************************
** Form generated from reading UI file 'findmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDMENU_H
#define UI_FINDMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_findMenu
{
public:
    QLineEdit *PK;
    QPushButton *findButton;
    QLabel *label;

    void setupUi(QDialog *findMenu)
    {
        if (findMenu->objectName().isEmpty())
            findMenu->setObjectName("findMenu");
        findMenu->resize(751, 517);
        PK = new QLineEdit(findMenu);
        PK->setObjectName("PK");
        PK->setGeometry(QRect(280, 200, 121, 31));
        findButton = new QPushButton(findMenu);
        findButton->setObjectName("findButton");
        findButton->setGeometry(QRect(300, 250, 80, 24));
        label = new QLabel(findMenu);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 180, 49, 16));

        retranslateUi(findMenu);

        QMetaObject::connectSlotsByName(findMenu);
    } // setupUi

    void retranslateUi(QDialog *findMenu)
    {
        findMenu->setWindowTitle(QCoreApplication::translate("findMenu", "Dialog", nullptr));
        findButton->setText(QCoreApplication::translate("findMenu", "find", nullptr));
        label->setText(QCoreApplication::translate("findMenu", "id", nullptr));
    } // retranslateUi

};

namespace Ui {
    class findMenu: public Ui_findMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDMENU_H
