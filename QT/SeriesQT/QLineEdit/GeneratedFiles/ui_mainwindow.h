/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *FullNameLine;
    QLabel *FullNameLabel;
    QPushButton *pushButton;
    QPushButton *TestMapBtn;
    QPushButton *TestVectorBtn;
    QRadioButton *MaleRadioBtn;
    QRadioButton *FemaleRadioBtn;
    QRadioButton *unknownRadioBtn;
    QPushButton *showGenderBtn;
    QLineEdit *GenderLineEdit;
    QCheckBox *MorningCheckBox;
    QCheckBox *AfternoonCheckBox;
    QCheckBox *EveningCheckBox;
    QPushButton *ShowFavoriteBtn;
    QLineEdit *ShowPeriodLineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        FullNameLine = new QLineEdit(centralWidget);
        FullNameLine->setObjectName(QStringLiteral("FullNameLine"));
        FullNameLine->setGeometry(QRect(70, 0, 221, 31));
        FullNameLabel = new QLabel(centralWidget);
        FullNameLabel->setObjectName(QStringLiteral("FullNameLabel"));
        FullNameLabel->setGeometry(QRect(10, 10, 61, 31));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 40, 75, 23));
        TestMapBtn = new QPushButton(centralWidget);
        TestMapBtn->setObjectName(QStringLiteral("TestMapBtn"));
        TestMapBtn->setGeometry(QRect(120, 40, 75, 23));
        TestVectorBtn = new QPushButton(centralWidget);
        TestVectorBtn->setObjectName(QStringLiteral("TestVectorBtn"));
        TestVectorBtn->setGeometry(QRect(220, 40, 75, 23));
        MaleRadioBtn = new QRadioButton(centralWidget);
        MaleRadioBtn->setObjectName(QStringLiteral("MaleRadioBtn"));
        MaleRadioBtn->setGeometry(QRect(80, 110, 82, 17));
        FemaleRadioBtn = new QRadioButton(centralWidget);
        FemaleRadioBtn->setObjectName(QStringLiteral("FemaleRadioBtn"));
        FemaleRadioBtn->setGeometry(QRect(80, 150, 82, 17));
        unknownRadioBtn = new QRadioButton(centralWidget);
        unknownRadioBtn->setObjectName(QStringLiteral("unknownRadioBtn"));
        unknownRadioBtn->setGeometry(QRect(80, 190, 82, 17));
        showGenderBtn = new QPushButton(centralWidget);
        showGenderBtn->setObjectName(QStringLiteral("showGenderBtn"));
        showGenderBtn->setGeometry(QRect(0, 220, 75, 23));
        GenderLineEdit = new QLineEdit(centralWidget);
        GenderLineEdit->setObjectName(QStringLiteral("GenderLineEdit"));
        GenderLineEdit->setGeometry(QRect(90, 220, 81, 20));
        MorningCheckBox = new QCheckBox(centralWidget);
        MorningCheckBox->setObjectName(QStringLiteral("MorningCheckBox"));
        MorningCheckBox->setGeometry(QRect(300, 110, 70, 17));
        AfternoonCheckBox = new QCheckBox(centralWidget);
        AfternoonCheckBox->setObjectName(QStringLiteral("AfternoonCheckBox"));
        AfternoonCheckBox->setGeometry(QRect(300, 150, 70, 17));
        EveningCheckBox = new QCheckBox(centralWidget);
        EveningCheckBox->setObjectName(QStringLiteral("EveningCheckBox"));
        EveningCheckBox->setGeometry(QRect(300, 190, 70, 20));
        ShowFavoriteBtn = new QPushButton(centralWidget);
        ShowFavoriteBtn->setObjectName(QStringLiteral("ShowFavoriteBtn"));
        ShowFavoriteBtn->setGeometry(QRect(210, 220, 75, 23));
        ShowPeriodLineEdit = new QLineEdit(centralWidget);
        ShowPeriodLineEdit->setObjectName(QStringLiteral("ShowPeriodLineEdit"));
        ShowPeriodLineEdit->setGeometry(QRect(310, 220, 81, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
#ifndef QT_NO_WHATSTHIS
        FullNameLine->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        FullNameLabel->setText(QApplication::translate("MainWindow", "Full Name", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Submit", nullptr));
        TestMapBtn->setText(QApplication::translate("MainWindow", "TestMap", nullptr));
        TestVectorBtn->setText(QApplication::translate("MainWindow", "TestVector", nullptr));
        MaleRadioBtn->setText(QApplication::translate("MainWindow", "Male", nullptr));
        FemaleRadioBtn->setText(QApplication::translate("MainWindow", "Female", nullptr));
        unknownRadioBtn->setText(QApplication::translate("MainWindow", "unknown", nullptr));
        showGenderBtn->setText(QApplication::translate("MainWindow", "ShowGender", nullptr));
        MorningCheckBox->setText(QApplication::translate("MainWindow", "Bu\341\273\225i s\303\241ng", nullptr));
        AfternoonCheckBox->setText(QApplication::translate("MainWindow", "Bu\341\273\225i chi\341\273\201u", nullptr));
        EveningCheckBox->setText(QApplication::translate("MainWindow", "Bu\341\273\225i t\341\273\221i", nullptr));
        ShowFavoriteBtn->setText(QApplication::translate("MainWindow", "ShowFavorite", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
