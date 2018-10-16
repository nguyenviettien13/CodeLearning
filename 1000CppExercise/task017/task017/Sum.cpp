#include "Sum.h"
#include <limits>
#include <iostream>

Sum::Sum(int base, int end)
{
	this->setBase(base);
	this->setEnd(end);
	this->value = std::numeric_limits<float>::min();
}


Sum::~Sum()
{
}

float Sum::getValue()
{
	if (abs(value - std::numeric_limits<float>::min()) < 0.0001)
	{
		calValue();
	}
	return value;
}

float Sum::calValue()
{
	value = 0;
	int tu = 1;
	int mau = 1;
	for (int i = 1; i <= end; i++)
	{
		tu	*= base;
		mau *= i;
		value += tu / (float)mau;
	}
	return value;
}

int main()
{
	Sum sum(2, 3);
	std::cout << sum.getValue() << std::endl;
	return 1;
}