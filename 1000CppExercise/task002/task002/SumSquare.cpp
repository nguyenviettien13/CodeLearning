#include "SumSquare.h"
#include <limits.h>
#include <iostream>

SumSquare::SumSquare(int beg, int end)
{
	this->beg = beg;
	this->end = end;
	this->value = INT_MIN;
}


SumSquare::~SumSquare()
{
}

int SumSquare::getValue()
{
	if (value == INT_MIN)
	{
		calculateValue();
	}
	return value;
}

int SumSquare::calculateValue()
{
	value = 0;
	for (int i = beg; i <= end; i++)
	{
		value += i * i;
	}
	return value;
}


int main()
{
	SumSquare sumsquare(1, 50);
	std::cout << "Sum of square from "<< sumsquare.getBeg() << " to " <<sumsquare.getEnd() << " is " <<sumsquare.getValue() << std::endl;
	return 1;
}