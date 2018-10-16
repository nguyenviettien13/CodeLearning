#include "Month.h"
#include <iostream>


Month::Month( unsigned int month, unsigned int year)
{
	this->year = year;
	this->month = month;
}


Month::~Month()
{
}


int Month::showNumberOfDay()
{
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	case 2:
		if (isLeapYear())
		{
			return 29;
		}
		else
		{
			return 28;
		}
	default:
		std::cout << "month is invalid!!" << std::endl;
		break;
	}
}

bool Month::isLeapYear()
{
	return ((year%4 ==0 && year%100 !=0)||(year %400 ==0) );
}

//int main()
//{
//	Month m(1996,2);
//	std::cout << m.showNumberOfDay() << std::endl;
//	return 1;
//}
