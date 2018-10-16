/********************************************************************************
** Form generated from reading UI file 'mystudents.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSTUDENTS_H
#define UI_MYSTUDENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyStudents
{
public:
    QWidget *centralWidget;
    QListWidget *danhSachSinhVienLwt;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyStudents)
    {
        if (MyStudents->objectName().isEmpty())
            MyStudents->setObjectName(QStringLiteral("MyStudents"));
        MyStudents->resize(400, 300);
        centralWidget = new QWidget(MyStudents);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        danhSachSinhVienLwt = new QListWidget(centralWidget);
        danhSachSinhVienLwt->setObjectName(QStringLiteral("danhSachSinhVienLwt"));
        danhSachSinhVienLwt->setGeometry(QRect(140, 40, 256, 141));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 80, 111, 41));
        MyStudents->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyStudents);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        MyStudents->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyStudents);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MyStudents->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MyStudents);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MyStudents->setStatusBar(statusBar);

        retranslateUi(MyStudents);

        QMetaObject::connectSlotsByName(MyStudents);
    } // setupUi

    void retranslateUi(QMainWindow *MyStudents)
    {
        MyStudents->setWindowTitle(QApplication::translate("MyStudents", "MyStudents", nullptr));
        label->setText(QApplication::translate("MyStudents", "Danh S\303\241ch Sinh vi\303\252n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyStudents: public Ui_MyStudents {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSTUDENTS_H
