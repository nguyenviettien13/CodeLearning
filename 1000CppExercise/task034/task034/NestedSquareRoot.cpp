#include "NestedSquareRoot.h"
#include <math.h>
#include <iostream>

NestedSquareRoot::NestedSquareRoot()
{
}


NestedSquareRoot::~NestedSquareRoot()
{
}

float NestedSquareRoot::cal(int n)
{
	float value = 0;
	for (int i = 1; i <= n; i++)
	{
		value = sqrt(i + value);
	}
	return value;
}

int main()
{
	int number = 2;
	std::cout << "Value correspond with " << number << " is " << NestedSquareRoot::cal(number) << std::endl;
	return 1;
}