#include "ExponentSum.h"
#include <limits>
#include <math.h>
#include <iostream>

ExponentSum::ExponentSum(int base, int beg, int end)
{
	this->setBase(base);
	this->setBegIndex(beg);
	this->setEndIndex(end);
	this->value = INT_MIN;
}


ExponentSum::~ExponentSum()
{
}

int ExponentSum::getValue()
{
	if (value == INT_MIN)
	{
		calValue();
	}
	return value;
}

int ExponentSum::calValue()
{
	int tg = pow(base, begIndex);
	value = tg;
	for (int i = begIndex+1; i <= endIndex; i++)
	{
		tg *= base;
		value += tg;
	}
	return value;
}


int main()
{
	ExponentSum sum(2, 0, 2);
	std::cout << sum.getValue() << std::endl;
	return 1;
}