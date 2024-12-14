#ifndef ADDINGMENU_H
#define ADDINGMENU_H

#include <QDialog>
#include <fstream>
#include <string>
#include <shared_map.h>
#include <QMessageBox>
#include <shared_vector.h>

namespace Ui {
class addingMenu;
}

class addingMenu : public QDialog
{
    Q_OBJECT

public:
    explicit addingMenu(QWidget *parent = nullptr, std::string file_name = "default.txt");
    ~addingMenu();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addingMenu *ui;
    std::ofstream file;
    std::string _file_name;
};

#endif // ADDINGMENU_H
