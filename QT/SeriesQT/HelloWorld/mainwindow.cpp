#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
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

void MainWindow::on_ShowBtn_clicked()
{
    std::cout << "click to Show Button" <<std::endl;
}

void MainWindow::on_HideBtn_clicked()
{
    std::cout << "click to HideButton" << std::endl;
}
