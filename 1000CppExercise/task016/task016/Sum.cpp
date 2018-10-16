#include "Sum.h"
#include <limits>
#include <iostream>

Sum::Sum(int base, int end)
{
	this->base = base;
	this->setEnd(end);
	value = std::numeric_limits<float>::min();
}


Sum::~Sum()
{
}

float Sum::getValue()
{
	if (abs(value - std::numeric_limits<float>::min()) < 0.001)
	{
		calValue();
	}
	return value;
}

float Sum::calValue()
{
	value = 0;
	int tu = 1;
	int mau = 0;
	for (int i = 1; i <= end; i++)
	{
		tu *= base;
		mau += i;
		value += tu / (float)mau;
	}
	return value;
}

int main()
{
	Sum sum(1, 5);
	std::cout << sum.getValue() << std::endl;
	return 1;
}