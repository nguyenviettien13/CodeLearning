#include "NestedSquareRoot.h"
#include <cmath>
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
	int factorial = 1;
	for (int i = 2; i <= n + 1; i++)
	{
		factorial *= (i-1);//tinh (i-1)!
		value = pow((/*base*/factorial +value), (/*index*/1.0 / i));
	}
	return value;
}

int main()
{
	int n = 2;
	std::cout << NestedSquareRoot::cal(n) << std::endl;
	return 1;
}