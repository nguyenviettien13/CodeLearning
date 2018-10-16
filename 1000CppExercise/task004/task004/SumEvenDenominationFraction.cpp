#include "SumEvenDenominationFraction.h"
#include <math.h>
#include <iostream>

SumEvenDenominationFraction::SumEvenDenominationFraction(int beg, int end)
{
	this->begDeno = beg;
	this->endDeno = end;
	this->value = std::numeric_limits<float>::min();
}


SumEvenDenominationFraction::~SumEvenDenominationFraction()
{
}

float SumEvenDenominationFraction::getValue()
{
	if (abs(value - std::numeric_limits<float>::min()) < 0.0001)
	{
		calValue();
	}
	return value;
}

float SumEvenDenominationFraction::calValue()
{
	value = 0;
	for (int i = begDeno; i <= endDeno; i++)
	{
		value += 1 / (2 * (float)i);
	}
	return value;
}


int main()
{
	SumEvenDenominationFraction sumEDF(1, 100);
	std::cout << sumEDF.getValue() << std::endl;
	return 1;
}