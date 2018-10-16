#include "mystudents.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyStudents w;
    w.show();

    return a.exec();
}
