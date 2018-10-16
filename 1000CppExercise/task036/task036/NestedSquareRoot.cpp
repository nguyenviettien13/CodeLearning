#include "NestedSquareRoot.h"
#include <iostream>
#include <math.h>

NestedSquareRoot::NestedSquareRoot()
{
}


NestedSquareRoot::~NestedSquareRoot()
{
}

float NestedSquareRoot::cal(int n)
{
	int factorial = 1;
	float value = 0.0f;
	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
		value = sqrt(factorial + value);
	}
	return value;
}

int main()
{
	int n = 2;
	std::cout << NestedSquareRoot::cal(n) << std::endl;
	return 1;
}