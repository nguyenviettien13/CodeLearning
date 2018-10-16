#pragma once
class Month
{
private:
	int year;
	int month;
public:
	Month(unsigned int month, unsigned int year);
	~Month();
	int showNumberOfDay();
protected:
	bool isLeapYear();
};

