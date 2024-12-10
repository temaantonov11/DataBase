#include "outputtable.h"
#include "ui_outputtable.h"

outputTable::outputTable(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::outputTable)
{
    ui->setupUi(this);
}

outputTable::~outputTable()
{
    delete ui;
}
