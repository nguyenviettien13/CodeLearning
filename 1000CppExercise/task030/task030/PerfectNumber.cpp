#include "PerfectNumber.h"
#include <iostream>


PerfectNumber::PerfectNumber(int value)
{
	this->value = value;
	findAllCD();
}


PerfectNumber::~PerfectNumber()
{
}

void PerfectNumber::findAllCD()
{
	for (int i = 1; i <= value; i++)
	{
		if (value %i == 0) CDset.push_back(i);
	}
	showCD();
}
void PerfectNumber::showCD()
{
	std::cout << "All Common Divisor is: " << std::endl;
	for (std::vector<int>::iterator it = CDset.begin(); it != CDset.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

int PerfectNumber::sumOfAllCDExceptItself()
{
	int sum = 0;
	for (std::vector<int>::iterator it = CDset.begin(); it != CDset.end() - 1; it++)
	{
		sum += *it;
	}
	return sum;
}

bool PerfectNumber::isPerfectNumber()
{
	return (value == sumOfAllCDExceptItself());
}


int main()
{
	PerfectNumber p(6);
	p.showCD();
	std::cout << p.isPerfectNumber() << std::endl;
	return 1;
}