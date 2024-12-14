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
        file.open(file_name, std::ios::in | std::ios::out);
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
    output_table = new outputTable(this, name);

    output_table->show();

}


void newDataBase::on_changeButton_clicked()
{
    change_menu = new changeMenu(this, name);
    change_menu -> show();
}


void newDataBase::on_findButton_clicked()
{
    find_menu = new findMenu(this, name);
    find_menu -> show();
}

