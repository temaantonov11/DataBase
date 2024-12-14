/********************************************************************************
** Form generated from reading UI file 'changemenu.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEMENU_H
#define UI_CHANGEMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_changeMenu
{
public:
    QLineEdit *PK;
    QPushButton *changeButton;
    QLineEdit *PKchange;
    QLineEdit *key2change;
    QLineEdit *key3change;
    QLineEdit *key4change;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *changeMenu)
    {
        if (changeMenu->objectName().isEmpty())
            changeMenu->setObjectName("changeMenu");
        changeMenu->resize(800, 522);
        PK = new QLineEdit(changeMenu);
        PK->setObjectName("PK");
        PK->setGeometry(QRect(340, 160, 121, 24));
        changeButton = new QPushButton(changeMenu);
        changeButton->setObjectName("changeButton");
        changeButton->setGeometry(QRect(360, 290, 80, 24));
        PKchange = new QLineEdit(changeMenu);
        PKchange->setObjectName("PKchange");
        PKchange->setGeometry(QRect(140, 220, 113, 24));
        key2change = new QLineEdit(changeMenu);
        key2change->setObjectName("key2change");
        key2change->setGeometry(QRect(270, 220, 113, 24));
        key3change = new QLineEdit(changeMenu);
        key3change->setObjectName("key3change");
        key3change->setGeometry(QRect(410, 220, 113, 24));
        key4change = new QLineEdit(changeMenu);
        key4change->setObjectName("key4change");
        key4change->setGeometry(QRect(550, 220, 113, 24));
        label = new QLabel(changeMenu);
        label->setObjectName("label");
        label->setGeometry(QRect(168, 200, 51, 20));
        label_2 = new QLabel(changeMenu);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(310, 200, 49, 16));
        label_3 = new QLabel(changeMenu);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(430, 200, 49, 16));
        label_4 = new QLabel(changeMenu);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(590, 200, 49, 16));
        label_5 = new QLabel(changeMenu);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(380, 140, 49, 16));

        retranslateUi(changeMenu);

        QMetaObject::connectSlotsByName(changeMenu);
    } // setupUi

    void retranslateUi(QDialog *changeMenu)
    {
        changeMenu->setWindowTitle(QCoreApplication::translate("changeMenu", "Dialog", nullptr));
        changeButton->setText(QCoreApplication::translate("changeMenu", "change", nullptr));
        label->setText(QCoreApplication::translate("changeMenu", "Id ", nullptr));
        label_2->setText(QCoreApplication::translate("changeMenu", "\320\234\320\260\321\200\320\272\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("changeMenu", "\320\234\320\276\320\264\320\265\320\273\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("changeMenu", "\320\223\320\276\320\264", nullptr));
        label_5->setText(QCoreApplication::translate("changeMenu", "id", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changeMenu: public Ui_changeMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEMENU_H
