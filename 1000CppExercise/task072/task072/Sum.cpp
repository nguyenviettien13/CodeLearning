#include "Sum.h"
#include <iostream>


Sum::Sum()
{
}


Sum::~Sum()
{
}

float Sum::cal(int x, int n)
{
	float value = 0;
	int sign = 1;
	int numerator = 1;
	int denominator = 1;
	for (int i = 1; i <= n; i++)
	{
		sign = -sign;
		denominator *= i;
		numerator *= x;
		value += sign * (float)numerator / denominator;
		std::cout << std::endl;
	}
	return value;
}

int main()
{
	std::cout << Sum::cal(2, 4)<< std::endl;
	return 1;
}