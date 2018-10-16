#include "SumConsecutiveDeno_NumeratorFraction.h"
#include <math.h>
#include <limits>
#include <iostream>
SumConsecutiveDeno_NumeratorFraction::SumConsecutiveDeno_NumeratorFraction(int beg, int end)
{
	this->setBegDeno(beg);
	this->setEndDeno(end);
	this->value = std::numeric_limits<float>::min();
}

SumConsecutiveDeno_NumeratorFraction::~SumConsecutiveDeno_NumeratorFraction()
{
}

float SumConsecutiveDeno_NumeratorFraction::getValue()
{
	if (abs(value - std::numeric_limits<float>::min()) < 0.0001)
	{
		calValue();
	}
	return value;
}

float SumConsecutiveDeno_NumeratorFraction::calValue()
{
	value = 0;
	for (int i = begDeno; i <= endDeno; i++)
	{
		value += (i - 1) / (float)i;
	}
	return value;
}
int main()
{
	SumConsecutiveDeno_NumeratorFraction sum(2, 4);
	std::cout << sum.getValue() << std::endl;
	return 1;
}