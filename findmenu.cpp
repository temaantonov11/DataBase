#include "findmenu.h"
#include "ui_findmenu.h"

findMenu::findMenu(QWidget *parent, std::string file_name)
    : QDialog(parent)
    , ui(new Ui::findMenu)
{
    ui->setupUi(this);
    name = file_name;
}

findMenu::~findMenu()
{
    delete ui;
}

void findMenu::on_findButton_clicked()
{
    std::string PK = ui->PK->text().toStdString();
    int key = stoi(PK);
    find_result = new findTable(this, name, key);
    find_result -> show();
}

