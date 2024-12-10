#ifndef NEWDATABASE_H
#define NEWDATABASE_H

#include <QDialog>
#include <fstream>
#include <addingmenu.h>
#include <string>

namespace Ui {
class newDataBase;
}

class newDataBase : public QDialog
{
    Q_OBJECT

public:
    explicit newDataBase(QWidget *parent = nullptr, std::string file_name = "default.txt", std::string stats = "create");
    ~newDataBase();

private slots:
    void on_pushButton_clicked();

    void on_outputButton_clicked();

private:
    Ui::newDataBase *ui;
    std::ofstream file;
    addingMenu *addMenu;
    std::string name;

};

#endif // NEWDATABASE_H
