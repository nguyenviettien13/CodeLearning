#include "Sum.h"
#include <limits>
#include <iostream>

Sum::Sum(int base, int end)
{
	this->setBase(base);
	this->setEnd(end);
	this->value = INT_MIN;
}


Sum::~Sum()
{
}

int Sum::getValue()
{
	if (value == INT_MIN)
	{
		calValue();
	}
	return value;
}

int Sum::calValue()
{
	int tg = base;
	value = 0;

	for (int i = 1; i <= end; i++)
	{
		value += tg * tg;
		tg *= base;
	}
	return value;
}

int main()
{
	Sum sum(2, 4);
	std::cout << sum.getValue() << std::endl;
	return 1;
}