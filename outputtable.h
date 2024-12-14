#ifndef OUTPUTTABLE_H
#define OUTPUTTABLE_H

#include <fstream>
#include <string>
#include <QDialog>
#include <QTextEdit>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QDebug>
#include <QtWidgets>

namespace Ui {
class outputTable;
}

class outputTable : public QDialog
{
    Q_OBJECT

public:
    explicit outputTable(QWidget *parent = nullptr, std::string file_name = "default.txt");
    ~outputTable();
    void output();

private:
    Ui::outputTable *ui;

    std::string name;


};

#endif // OUTPUTTABLE_H
