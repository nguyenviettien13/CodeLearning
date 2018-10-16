#include "Day.h"
#include "Month.h"
#include <iostream>

Day::Day(int day, int month, int year)
{
	this->setDay(day);
	this->setMonth(month);
	this->setYear(year);
}


Day::~Day()
{
}

Day Day::findPreviousDay()
{
	int nextDay = day;
	int nextMonth = getMonth();
	int nextYear = getYear();

	if (day != 1)
	{
		nextDay = day - 1;
	}
	else
	{

		if (nextMonth != 1)
		{
			nextMonth -= 1;
		}
		else
		{
			nextMonth = 12;
			nextYear -= 1;
		}
		Month m(nextMonth, nextYear);
		nextDay = m.showNumberOfDay();
	}
	Day day(nextDay, nextMonth, nextYear);
	return day;
}

int Day::findOrdinalNumbers()
{
	int ordinalDay = 0;
	for (int i = 1; i < getMonth(); i++)
	{
		ordinalDay += Month(i, getYear()).showNumberOfDay();
	}
	return ordinalDay + getDay();
}

std::ostream& operator<< (std::ostream & os, Day const& day)
{
	os << day.getDay() << "	" << day.getMonth() << "	" << day.getYear() << "	" << std::endl;
	return os;
}
int main()
{
	Day day(1, 3, 4);
	Day pday = day.findPreviousDay();
	std::cout << pday << std::endl;
	std::cout << day.findOrdinalNumbers() << std::endl;
	return 1;
}
