#ifndef FINDTABLE_H
#define FINDTABLE_H

#include <QDialog>
#include <QtWidgets>
#include <string>
#include <shared_map.h>
#include <shared_vector.h>
#include <QDialog>
#include <QTextEdit>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QDebug>
#include <fstream>


namespace Ui {
class findTable;
}

class findTable : public QDialog
{
    Q_OBJECT

public:
    explicit findTable(QWidget *parent = nullptr, std::string file_name = "default.txt", int key = 0);
    ~findTable();

private:
    Ui::findTable *ui;
    std::string name;






};

#endif // FINDTABLE_H
