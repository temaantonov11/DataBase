#include "newdatabase.h"
#include "ui_newdatabase.h"

newDataBase::newDataBase(QWidget *parent, std::string file_name, std::string status)
    : QDialog(parent)
    , ui(new Ui::newDataBase)
{
    ui->setupUi(this);
    if (status == "create") {
        file.open(file_name);
    } else {
        file.open(file_name, std::ios::app);
    }

    name = file_name;
}

newDataBase::~newDataBase()
{
    delete ui;
    file.close();
}

void newDataBase::on_pushButton_clicked()
{
    addMenu = new addingMenu(this, name);
    addMenu->setWindowTitle("Adding Menu");
    addMenu -> show();
}



void newDataBase::on_outputButton_clicked()
{

}

