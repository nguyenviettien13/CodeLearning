#include "Sum.h"
#include <math.h>
#include <iostream>

Sum::Sum(int beg, int end)
{
	this->setBegDeno(beg);
	this->setEndDeno(end);
	this->value		= 0.0f;
}


Sum::~Sum()
{
}

float Sum::getValue()
{
	if (abs(value- 0)< 0.0001)
	{
		calValue();
	}
	return value;
}

float Sum::calValue()
{
	value = 0;
	for (int i = begDeno; i <= endDeno; i++)
	{
		value += (2 * i + 1) / (float)(2 * i + 2);
	}
	return value;
}


int main()
{
	Sum sum(0, 0);
	std::cout << sum.getValue() << std::endl;
	return 1;
}