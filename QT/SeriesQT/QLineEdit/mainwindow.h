#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include<QDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_TestMapBtn_clicked();

    void on_TestVectorBtn_clicked();

    void on_showGenderBtn_clicked();

    void on_ShowFavoriteBtn_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
