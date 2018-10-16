#include "SumFraction.h"
#include <iostream>
#include <math.h>

SumFraction::SumFraction(int beg, int end)
{
	this->begDenomination = beg;
	this->endDenomination = end;
	this->value = std::numeric_limits<float>::min();
}


SumFraction::~SumFraction()
{
}

float SumFraction::getValue()
{
	if (abs(value - std::numeric_limits<float>::min()) < 0.000001f)
	{
		Calculate();
	}
	return value;
}

float SumFraction::Calculate()
{
	value = 0;
	for (int i = begDenomination; i <= endDenomination; i++)
	{
		value += 1 / (float)i;
	}
	return value;
}


int main()
{
	SumFraction sf(1, 1000000);
	std::cout << sf.getValue() << std::endl;
	return 1;
}