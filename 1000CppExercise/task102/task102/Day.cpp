#include "Day.h"
#include "Month.h"
#include <iostream>


Day::Day(unsigned int day = 0, unsigned int month = 0, unsigned int year = 0)
{
	this->setDay(day);
	this->setMonth(month);
	this->setYear(year);
}


Day::~Day()
{
}

Day Day::findNextDay()
{
	int nextDay = getDay();
	int nextMonth = getMonth();
	int nextYear = getYear();
	int dayOfMonth = Month(getMonth(), getYear()).showNumberOfDay();
	if (getDay() == dayOfMonth)
	{
		nextDay = 1;
		if (getMonth() == 12)
		{
			nextMonth = 1;
			nextYear = getYear() + 1;
		}
		else
		{
			nextMonth++;
		}
	}
	else
	{
		nextDay++;
		
	}
	return Day(nextDay, nextMonth, nextYear);
}

std::ostream& operator<<(std::ostream & os, Day const &day)
{
	os << day.getDay() << "	" << day.getMonth() << "	" << day.getYear() << std::endl;
	return os;
}

int main()
{
	Day day(28, 2, 1996);
	Day nextDay = day.findNextDay();
	std::cout << nextDay;
	return 1;
}

