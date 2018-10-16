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
	for (int i = 2; i <= n + 1; i++)
	{
		value = pow((/*base*/(i - 1) + value), (/*index*/1.0 / i));
	}
	return value;
}

int main()
{
	int n = 2;
	std::cout << NestedSquareRoot::cal(n) << std::endl;
	return 1;
}