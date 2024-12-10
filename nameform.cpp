#include "nameform.h"
#include "ui_nameform.h"
#include "newdatabase.h"

nameForm::nameForm(QWidget *parent, std::string status)
    : QDialog(parent)
    , ui(new Ui::nameForm)
{
    ui->setupUi(this);
    operation = status;
}

nameForm::~nameForm()
{
    delete ui;
}

void nameForm::on_pushButton_clicked()
{
    std::string file_name = ui->lineEdit->text().toStdString();

    newDataBaseWindow = new newDataBase(this, file_name, operation);
    newDataBaseWindow->setWindowTitle("Data Base");
    newDataBaseWindow->show();
}
