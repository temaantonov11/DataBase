#ifndef NAMEFORM_H
#define NAMEFORM_H

#include <QDialog>
#include "newdatabase.h"

namespace Ui {
class nameForm;
}

class nameForm : public QDialog
{
    Q_OBJECT

public:
    explicit nameForm(QWidget *parent = nullptr, std::string status = "create");
    ~nameForm();

private slots:
    void on_pushButton_clicked();

private:
    Ui::nameForm *ui;
    newDataBase* newDataBaseWindow;
    std::string operation;
};

#endif // NAMEFORM_H
