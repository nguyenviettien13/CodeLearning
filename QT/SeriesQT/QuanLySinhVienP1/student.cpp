#include "student.h"
#include <QListWidget>

Student::Student()
{

}

inline Student::Student(QString name,QString dateOfBirth, QString homeTown):
    m_name(name),
    m_dateOfBirth(dateOfBirth),
    m_HomeTown(homeTown)
{

};


inline Student::Student(QString name)
{
    m_name = name;
};
void Student::setName(const QString & name)
{
    m_name = name;
};

void Student::setDateOfBirth(const QString & dateOfBirth)
{
    m_dateOfBirth = dateOfBirth;
};
void Student::setHomeTown(const QString&  hometown)
{
    m_HomeTown = hometown;
};
QString Student::getName() const
{
    return m_name;
};
QString Student::getDateOfBirth() const

{
    return m_dateOfBirth;
};
QString Student::getHomeTown() const
{
    return m_HomeTown;
};
