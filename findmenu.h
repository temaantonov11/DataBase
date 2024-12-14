#ifndef FINDMENU_H
#define FINDMENU_H

#include <QDialog>
#include <string>
#include <findtable.h>

namespace Ui {
class findMenu;
}

class findMenu : public QDialog
{
    Q_OBJECT

public:
    explicit findMenu(QWidget *parent = nullptr, std::string file_name = "default.txt");
    ~findMenu();

private slots:
    void on_findButton_clicked();

private:
    Ui::findMenu *ui;
    std::string name;
    findTable *find_result;
};

#endif // FINDMENU_H
