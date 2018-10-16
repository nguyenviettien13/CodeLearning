#ifndef STUDENT_H
#define STUDENT_H
#include<QListWidgetItem>
#include<qstring.h>

using namespace std;

class Student:public QListWidgetItem
{
private:
    QString m_name;
    QString m_dateOfBirth;
    QString m_HomeTown;
public:
    Student();
    Student(QString name,QString dateOfBirth, QString homeTown);
    Student(QString name);

    void setName(const QString & name);
    void setDateOfBirth(const QString & dateOfBirth);
    void setHomeTown(const QString & hometown);
    QString getName() const;
    QString getDateOfBirth() const;
    QString getHomeTown() const;
};

inline Student::Student()
{

}

inline Student::Student(QString name, QString dateOfBirth, QString homeTown) :
	m_name(name),
	m_dateOfBirth(dateOfBirth),
	m_HomeTown(homeTown)
{

};


inline Student::Student(QString name)
{
	m_name = name;
};

#endif // STUDENT_H
