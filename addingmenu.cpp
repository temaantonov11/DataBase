#include "addingmenu.h"
#include "ui_addingmenu.h"


addingMenu::addingMenu(QWidget *parent, std::string file_name)
    : QDialog(parent)
    , ui(new Ui::addingMenu)
{
    ui->setupUi(this);
    file.open(file_name, std::ios::app);
}

addingMenu::~addingMenu()
{
    delete ui;
    file.close();
}

void addingMenu::on_pushButton_clicked()
{

    QString first = ui ->lineEdit ->text();
    QString second = ui->lineEdit_2->text();
    QString third = ui->lineEdit_3->text();
    QString fourth = ui->lineEdit_4->text();

    std::string addedString = first.toStdString() + " " + second.toStdString() + " " + third.toStdString() + " " + fourth.toStdString();
    file << addedString << std::endl;

    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();


}

