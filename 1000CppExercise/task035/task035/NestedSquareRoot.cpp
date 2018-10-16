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
	float value = 0.0f;
	for (int i = n; i >= 1; i--)
	{
		value = sqrt(i + value);
	}
	return value;
}

int main()
{
	int n = 3;
	std::cout << NestedSquareRoot::cal(n) << std::endl;
	return 1;
}
