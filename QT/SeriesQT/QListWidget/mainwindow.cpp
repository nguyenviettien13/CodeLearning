#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qstring.h>

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
    if(!ui->nameItemltxt->text().isEmpty())
    {
        ui->ItemListwt->addItem(ui->nameItemltxt->text());
    }
    QString a = "Xin chào";
    QByteArray b;
}
