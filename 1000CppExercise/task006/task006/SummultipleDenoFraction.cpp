#include "SummultipleDenoFraction.h"
#include <math.h>
#include <limits>
#include <iostream>

SummultipleDenoFraction::SummultipleDenoFraction(int beg, int end)
{
	this->begDeno	= beg;
	this->endDeno	= end;
	this->value		= std::numeric_limits<float>::min();
}


SummultipleDenoFraction::~SummultipleDenoFraction()
{
}

float SummultipleDenoFraction::getValue()
{
	if ((value - std::numeric_limits<float>::min())< 0.0001)
	{
		calValue();
	}
	return value;
}

float SummultipleDenoFraction::calValue()
{
	value = 0;
	for (int i = begDeno; i <= endDeno; i++)
	{
		value += 1 / (float)(i*(i + 1));
	}
	return value;
}

int main()
{
	SummultipleDenoFraction sum(1,6);
	std::cout << sum.getValue() << std::endl;
	return 1;
}