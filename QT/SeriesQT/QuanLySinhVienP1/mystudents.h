#ifndef MYSTUDENTS_H
#define MYSTUDENTS_H

#include <QMainWindow>

namespace Ui {
class MyStudents;
}

class MyStudents : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyStudents(QWidget *parent = nullptr);
    ~MyStudents();

private:
    Ui::MyStudents *ui;
};

#endif // MYSTUDENTS_H
