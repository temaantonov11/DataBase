/********************************************************************************
** Form generated from reading UI file 'nameform.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAMEFORM_H
#define UI_NAMEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_nameForm
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *nameForm)
    {
        if (nameForm->objectName().isEmpty())
            nameForm->setObjectName("nameForm");
        nameForm->resize(668, 372);
        lineEdit = new QLineEdit(nameForm);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(200, 130, 251, 41));
        label = new QLabel(nameForm);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 50, 341, 51));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setTextFormat(Qt::TextFormat::AutoText);
        pushButton = new QPushButton(nameForm);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 220, 121, 41));

        retranslateUi(nameForm);

        QMetaObject::connectSlotsByName(nameForm);
    } // setupUi

    void retranslateUi(QDialog *nameForm)
    {
        nameForm->setWindowTitle(QCoreApplication::translate("nameForm", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("nameForm", "Input data base name (with extension)", nullptr));
        pushButton->setText(QCoreApplication::translate("nameForm", "enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nameForm: public Ui_nameForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAMEFORM_H
