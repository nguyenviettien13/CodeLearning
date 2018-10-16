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
	for (int i = 2; i <= n; i++)
	{
		value = pow((/*base*/i + value), (/*index*/1.0 /i));
	}
	return value;
}

int main()
{
	int n = 3;
	std::cout << NestedSquareRoot::cal(n) << std::endl;
	return 1;
}