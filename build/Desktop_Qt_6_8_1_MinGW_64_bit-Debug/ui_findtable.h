/********************************************************************************
** Form generated from reading UI file 'findtable.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDTABLE_H
#define UI_FINDTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_findTable
{
public:

    void setupUi(QDialog *findTable)
    {
        if (findTable->objectName().isEmpty())
            findTable->setObjectName("findTable");
        findTable->resize(611, 425);

        retranslateUi(findTable);

        QMetaObject::connectSlotsByName(findTable);
    } // setupUi

    void retranslateUi(QDialog *findTable)
    {
        findTable->setWindowTitle(QCoreApplication::translate("findTable", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class findTable: public Ui_findTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDTABLE_H
