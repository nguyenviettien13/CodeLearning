#include "mystudents.h"
#include "ui_mystudents.h"
#include "student.h"


MyStudents::MyStudents(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyStudents)
{
    ui->setupUi(this);
    QListWidgetItem *item = new Student("Nguyễn Thùy Dương",
                                        "26/9/1996",
                                        "Hoai Duc HN");
    ui->danhSachSinhVienLwt->addItem(item);
}

MyStudents::~MyStudents()
{
    delete ui;
}
