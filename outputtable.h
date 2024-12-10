#ifndef OUTPUTTABLE_H
#define OUTPUTTABLE_H

#include <QDialog>

namespace Ui {
class outputTable;
}

class outputTable : public QDialog
{
    Q_OBJECT

public:
    explicit outputTable(QWidget *parent = nullptr);
    ~outputTable();

private:
    Ui::outputTable *ui;

};

#endif // OUTPUTTABLE_H
