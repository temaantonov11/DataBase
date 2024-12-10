/********************************************************************************
** Form generated from reading UI file 'outputtable.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTTABLE_H
#define UI_OUTPUTTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_outputTable
{
public:

    void setupUi(QDialog *outputTable)
    {
        if (outputTable->objectName().isEmpty())
            outputTable->setObjectName("outputTable");
        outputTable->resize(576, 335);

        retranslateUi(outputTable);

        QMetaObject::connectSlotsByName(outputTable);
    } // setupUi

    void retranslateUi(QDialog *outputTable)
    {
        outputTable->setWindowTitle(QCoreApplication::translate("outputTable", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class outputTable: public Ui_outputTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTTABLE_H
