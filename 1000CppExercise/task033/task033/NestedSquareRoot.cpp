#include "NestedSquareRoot.h"
#include <math.h>
#include <iostream>

NestedSquareRoot::NestedSquareRoot()
{
}


NestedSquareRoot::~NestedSquareRoot()
{
}

float NestedSquareRoot::calNestSqrtRoot(int n)
{
	float value = 0.0f;
	for (int i = 1; i <= n; i++)
	{
		value = sqrt(2 + value);
	}
	return value;
}

int main()
{
	int number = 2;
	std::cout << "value of expression corresponding with " << number <<" is " << NestedSquareRoot::calNestSqrtRoot(number) << std::endl;
	return 1;
}