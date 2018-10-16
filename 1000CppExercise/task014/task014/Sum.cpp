#include "Sum.h"
#include <limits>
#include <iostream>

Sum::Sum(int base, int beg, int end)
{
	this->setBase(base);
	this->setBeg(beg);
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
	int tg = pow(base, 2 * beg +1);
	value = tg;
	for (int i = beg + 1; i <= end; i++)
	{
		tg *= base * base;
		value += tg;
	}
	return value;
}

int main()
{
	Sum s(2,0,3);
	std::cout << s.getValue() << std::endl;
	return 1;
}