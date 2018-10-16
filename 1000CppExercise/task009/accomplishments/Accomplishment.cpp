#include "Accomplishment.h"
#include <iostream>
#include <math.h>
#include <limits.h>

Accomplishment::Accomplishment(int beg, int end)
{
	this->setBegFactor(beg);
	this->setEndFactor(end);
	this->accomplishment = INT_MIN;
}


Accomplishment::~Accomplishment()
{
}

int Accomplishment::getValue()
{
	if (accomplishment == INT_MIN)
	{
		calValue();
	}
	return accomplishment;
}

int Accomplishment::calValue()
{
	accomplishment = 1;
	for (int i = begFactor; i <= endFactor; i++)
	{
		accomplishment *= i;
	}

	return accomplishment;
}

int main()
{
	Accomplishment ac(1, 10);
	std::cout << ac.getValue() << std::endl;
	return 1;
}