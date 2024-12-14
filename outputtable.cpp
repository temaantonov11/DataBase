#include "outputtable.h"
#include "ui_outputtable.h"

outputTable::outputTable(QWidget *parent, std::string file_name)
    : QDialog(parent)
    , ui(new Ui::outputTable)
{
    ui->setupUi(this);
    name = file_name;
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    QTextEdit *textEdit = new QTextEdit(this);
    mainLayout->addWidget(textEdit);
    setLayout(mainLayout);


    std::ifstream file;
    file.open(name);

    QString line;
    std::string std_line;
    QColor customColor(255, 165, 0);
    textEdit->setTextColor(customColor);
    while (std::getline(file, std_line)) {
        line = QString::fromStdString(std_line);
        textEdit->append(line);
    }
    file.close();


}

outputTable::~outputTable()
{
    delete ui;
}

void outputTable::output(){



}
