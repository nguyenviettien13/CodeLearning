#include "Sum.h"
#include <limits>
#include <iostream>

Sum::Sum(int beg, int end)
{
	this->beg = beg;
	this->end = end;
	this->value = std::numeric_limits<float>::min();
}


Sum::~Sum()
{
}

float Sum::getValue()
{
	if (abs(value - std::numeric_limits<float>::min()) < 0.0001f)
	{
		calValue();
	}
	return value;
}

float Sum::calValue()
{
	value = 0;
	
	for (int mau = 0,  i = 1; i <= end; i++)
	{
		mau += i;
		value += 1 / (float)mau;
	}
	return value;
}


int main()
{
	Sum sum(1, 2);
	std::cout << sum.getValue() << std::endl;
	return 1;
}