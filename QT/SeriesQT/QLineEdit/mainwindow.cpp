#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qstring.h>
#include <qdebug.h>
#include <qmap.h>
#include <io.h>
#include <fcntl.h>
#include <typeinfo>

using namespace std;

bool is_valid_utf8(const char * string)
{
    if (!string)
        return true;

    const unsigned char * bytes = (const unsigned char *)string;
    unsigned int cp;
    int num;

    while (*bytes != 0x00)
    {
        if ((*bytes & 0x80) == 0x00)
        {
            // U+0000 to U+007F
            cp = (*bytes & 0x7F);
            num = 1;
        }
        else if ((*bytes & 0xE0) == 0xC0)
        {
            // U+0080 to U+07FF
            cp = (*bytes & 0x1F);
            num = 2;
        }
        else if ((*bytes & 0xF0) == 0xE0)
        {
            // U+0800 to U+FFFF
            cp = (*bytes & 0x0F);
            num = 3;
        }
        else if ((*bytes & 0xF8) == 0xF0)
        {
            // U+10000 to U+10FFFF
            cp = (*bytes & 0x07);
            num = 4;
        }
        else
            return false;

        bytes += 1;
        for (int i = 1; i < num; ++i)
        {
            if ((*bytes & 0xC0) != 0x80)
                return false;
            cp = (cp << 6) | (*bytes & 0x3F);
            bytes += 1;
        }

        if ((cp > 0x10FFFF) ||
            ((cp >= 0xD800) && (cp <= 0xDFFF)) ||
            ((cp <= 0x007F) && (num != 1)) ||
            ((cp >= 0x0080) && (cp <= 0x07FF) && (num != 2)) ||
            ((cp >= 0x0800) && (cp <= 0xFFFF) && (num != 3)) ||
            ((cp >= 0x10000) && (cp <= 0x1FFFFF) && (num != 4)))
            return false;
    }

    return true;
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->FullNameLine->setMaxLength(30);
    ui->FullNameLine->setStyleSheet("QLineEdit { background: rgb(0, 255, 255); selection-background-color: rgb(233, 99, 0); }");
    ui->FullNameLine->setText("Nguyen Viet Tien");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int a = 10;
    std::cout << a << std::endl;
    QString s1 = "AB";
    QString s2 = "AB";
    qDebug() << s1+ s2;
    int i = s1.compare(s2);
    if(i == 0)
    {
        std::cout << s1.toLocal8Bit().constData() << " = " << s2.toLocal8Bit().constData() << std::endl;
    }
    else if (i > 0) {
        std::cout << s1.toLocal8Bit().constData() << " > " << s2.toLocal8Bit().constData() << std::endl;
    }
    else{
        std::cout << s1.toLocal8Bit().constData() << " < " << s2.toLocal8Bit().constData() << std::endl;
    }
}

void MainWindow::on_pushButton_2_clicked()
{

}

void MainWindow::on_TestMapBtn_clicked()
{
    QMap<int, QString> map;
    map.insert(1, "Nguyen Van A");
    map.insert(2, "Nguyen Van B");
    map.insert(3, "Nguyen Van C");
    cout << map[3].toLocal8Bit().constData() << endl;
}

void MainWindow::on_TestVectorBtn_clicked()
{
    QVector<int> myvector;
    myvector.push_back(1);
    myvector.push_back(2);
    for(auto i: myvector)
    {
        cout << i << std::endl;
    }
}

void MainWindow::on_showGenderBtn_clicked()
{
    QString text;
    if(ui->unknownRadioBtn->isChecked())
    {
        text = "Unknow!!!";
        ui->GenderLineEdit->setText(text);
    }else if(ui->FemaleRadioBtn->isChecked())
    {
        text = "Female";
        ui->GenderLineEdit->setText(text);
    }
    else if (ui->MaleRadioBtn->isChecked())
    {
        text = "Male";
        ui->GenderLineEdit->setText(text);
    }
}

void MainWindow::on_ShowFavoriteBtn_clicked()
{
    QVector<QString> periods;
    if(ui->MorningCheckBox->isChecked())
    {
        periods.push_back("Morning");
    }
    if(ui->AfternoonCheckBox->isChecked())
    {
        periods.push_back("Afternoon");
    }
    if(ui->EveningCheckBox->isChecked())
    {
        periods.push_back("Evening");
    }
    QString s = "Hello ";
    for(QString text: periods)
    {
        s += text +" ";
    }
    s+= "Nguyễn Thùy Dương";


    QString qtStrData;
    QByteArray inBytes;
    const char *cStrData;

    inBytes = s.toUtf8();
    cStrData = inBytes.constData();

    //cout << typeid(s).name() << endl; -> QString
    // << typeid ("Nguyễn Thùy Dương").name() <<endl;
    const char * cp_s = s.toUtf8().constData();
    ui->ShowPeriodLineEdit->setText(cStrData);
    //_setmode(_fileno(stdin), _O_U8TEXT);
    //_setmode(_fileno(stdout), _O_U8TEXT);
    QString name = "Nguyễn Thùy Dương";
    if(is_valid_utf8("Nguyễn Việt Tiến"))
    {
        cout << "la utf8" << endl;
    }

    //cout << name.toLocal8Bit().constData() << endl;
    //cout << "Nguyễn Thùy Dương" <<endl;
    //cout << "Nguyễn Việt Tiến" << endl;
}
