#pragma once
#include <iostream>
class Day
{
private:
	int day;
	int month;
	int year;
public:
	Day(unsigned int day, unsigned int month, unsigned int year);
	~Day();
	Day findNextDay();		
	/*day*/
	int getDay() const { return day; }
	void setDay(int val) { day = val; }
	/*month*/
	int getMonth() const { return month; }
	void setMonth(int val) { month = val; }
	/*year*/
	int getYear() const { return year; }
	void setYear(int val) { year = val; }
};

