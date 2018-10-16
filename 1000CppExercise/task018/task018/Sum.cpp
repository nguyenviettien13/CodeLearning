#include "Sum.h"
#include <limits>
#include <stdlib.h>
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
	/*Calculate factorial*/
	long * factorial = (long*)malloc((2 * end + 1) * sizeof(long));
	factorial[0] = 1;
	for (int i = 1; i <= 2 * end; i++)
	{
		factorial[i] = factorial[i - 1] * i;
	}

	value = 0;
	
	int squareOfNumeration = 1;
	int denomination = factorial[0];
	for (int i = 0; i <= end; i++)
	{
		value += (squareOfNumeration* squareOfNumeration) / (float)denomination;
		denomination = factorial[2 * (i+1)];
		squareOfNumeration *= base;
	}
	return value;
}


int main()
{
	Sum sum(1 , 2);
	std::cout << sum.getValue() << std::endl;
	return 1;
}