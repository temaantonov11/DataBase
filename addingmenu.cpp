#include "addingmenu.h"
#include "ui_addingmenu.h"


addingMenu::addingMenu(QWidget *parent, std::string file_name)
    : QDialog(parent)
    , ui(new Ui::addingMenu)
{
    ui->setupUi(this);
    _file_name = file_name;

}

addingMenu::~addingMenu()
{
    delete ui;

}

void addingMenu::on_pushButton_clicked()
{

    file.open(_file_name, std::ios::app);
    std::string first = ui ->lineEdit ->text().toStdString();
    std::string second = ui->lineEdit_2->text().toStdString();
    std::string third = ui->lineEdit_3->text().toStdString();
    std::string fourth = ui->lineEdit_4->text().toStdString();

    int key = stoi(first);

    if (mySharedMap.count(key) == 0){
        std::string addedString = first + " " + second + " " + third + " " + fourth;
        file << addedString << std::endl;
        mySharedMap[key] = addedString.size();
        key_sizes[key] = key_sizes[key - 1] + addedString.size() + 1;
    } else {
        QMessageBox::critical(this, "Ошибка добавления", "Такой id уже существует");
    }



    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();

    file.close();
}

