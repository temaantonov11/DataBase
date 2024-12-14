#include "findtable.h"
#include "ui_findtable.h"

findTable::findTable(QWidget *parent, std::string file_name, int key)
    : QDialog(parent)
    , ui(new Ui::findTable)
{
    ui->setupUi(this);
    name = file_name;
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    QTextEdit *textEdit = new QTextEdit(this);
    mainLayout->addWidget(textEdit);
    setLayout(mainLayout);

    std::ifstream file;
    file.open(name, std::ios::binary);

    QString line;
    std::string std_line;
    QColor customColor(255, 165, 0);
    textEdit->setTextColor(customColor);

    std::streampos pointer_file = key_sizes[key - 1];

    file.seekg(pointer_file);

    std::getline(file, std_line);
    line = QString::fromStdString(std_line);
    textEdit->append(line);

    file.close();

}

findTable::~findTable()
{
    delete ui;
}
