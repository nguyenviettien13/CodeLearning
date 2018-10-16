#include "SumOddDenoFraction.h"
#include <iostream>
#include <limits>
#include <math.h>

SumOddDenoFraction::SumOddDenoFraction(int beg, int end)
{
	this->BegDenomination(beg);
	this->EndDenomination(end);
	this->value = std::numeric_limits<float>::min();
}


SumOddDenoFraction::~SumOddDenoFraction()
{
}

float SumOddDenoFraction::getValue()
{
	if (abs(value - std::numeric_limits<float>::min()) < 0.0001f)
	{
		calValue();
	}
	return value;
}

float SumOddDenoFraction::calValue()
{
	value = 0;
	for (int i = begDenomination; i <= endDenomination; i++)
	{
		value += 1 / (float)(2 * i + 1);
	}
	return value;
}

int main()
{
	SumOddDenoFraction sumODF(1, 0);
	std::cout << sumODF.getValue() << std::endl;
	return 1;
}
