#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

}


void MainWindow::on_pushButton_2_clicked()
{

}




void MainWindow::on_CreateButton_clicked()
{
    nameFormWindow = new nameForm(this, "create");
    nameFormWindow->show();
}


void MainWindow::on_openButton_clicked()
{
    nameFormWindow = new nameForm(this, "open");
    nameFormWindow->show();
}

