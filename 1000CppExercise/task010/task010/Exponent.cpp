#include "Exponent.h"
#include <limits>
#include <iostream>

Exponent::Exponent(int base, int index)
{
	this->setBase(base);
	this->setIndex(index);
	this->value = INT_MIN;
}


Exponent::~Exponent()
{
}

int Exponent::getValue()
{
	if (value == INT_MIN)
	{
		calValue();
	}
	return value;
}

int Exponent::calValue()
{
	value = 1;
	for (int i = 1; i <= index; i++)
	{
		value *= base;
	}
	return value;
}


int main()
{
	Exponent ex(3, 3);
	std::cout << ex.calValue() << std::endl;
	return 1;
}