#include "changemenu.h"
#include "ui_changemenu.h"

changeMenu::changeMenu(QWidget *parent, std::string file_name)
    : QDialog(parent)
    , ui(new Ui::changeMenu)
{
    ui->setupUi(this);
    name = file_name;
    file.open(name, std::ios::in | std::ios::out);
}

changeMenu::~changeMenu()
{
    delete ui;
    file.close();
}

void changeMenu::on_changeButton_clicked()
{
    std::string PK = ui->PK->text().toStdString();
    std::string PKchange = ui->PKchange->text().toStdString();
    std::string key2change = ui->key2change->text().toStdString();
    std::string key3change = ui->key3change->text().toStdString();
    std::string key4change = ui->key4change->text().toStdString();

    int key = stoi(PK);

    std::string newRecord = PKchange + " " + key2change + " " + key3change + " " + key4change + '\n';

    int size_string = key_sizes[key - 1];

    file.seekp(size_string, std::ios_base::beg);

    file << newRecord;

    for (int i = key; i < 10000; i++){
        if (key_sizes[i] == 0){
            break;
        } else {
            key_sizes[i] = key_sizes[i] - mySharedMap[key] + newRecord.size();
        }
    }

    mySharedMap[key] = newRecord.size();


}

