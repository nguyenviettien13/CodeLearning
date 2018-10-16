#include "Sum.h"
#include <iostream>
#include <limits>


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
	if (abs(value - std::numeric_limits<float>::min()) < 0.001)
	{
		calValue();
	}
	return value;
}

float Sum::calValue()
{
	/*Calculate factorial*/
	long* factorialArr = new long(2 * (end + 1));
	factorialArr[0] = 1;
	for (int i = 1; i <= 2 * end + 1; i++)
	{
		factorialArr[i] = factorialArr[i - 1] * i;
	}

	value = (float)1 + base;
	int tu = base;
	int mau = 1;

	for (int i = 1; i <= end; i++)
	{
		tu *= (base * base);
		mau = factorialArr[2 * i + 1];
		value += tu / (float)mau;
	}
	return value;
}


int main()
{
	Sum sum(2, 2);
	std::cout << sum.getValue() << std::endl;
	return 1;
}