#ifndef CHANGEMENU_H
#define CHANGEMENU_H

#include <QDialog>
#include <string>
#include <fstream>
#include <shared_map.h>
#include <shared_vector.h>

namespace Ui {
class changeMenu;
}

class changeMenu : public QDialog
{
    Q_OBJECT

public:
    explicit changeMenu(QWidget *parent = nullptr, std::string file_name = "default.txt");
    ~changeMenu();

private slots:
    void on_changeButton_clicked();

private:
    Ui::changeMenu *ui;
    std::string name;
    std::ofstream file;
};

#endif // CHANGEMENU_H
