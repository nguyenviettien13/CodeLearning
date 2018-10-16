#include "Fraction.h"
#include <iostream>


Fraction::Fraction()
{
}


Fraction::~Fraction()
{
}

float Fraction::cal(int n)
{
	float value = 1;
	for (int i = 1; i <= n; i++)
	{
		value = 1.0 / (1 + value);
	}
	return value;
}

int main()
{
	std::cout << Fraction::cal(3) << std::endl;
	return 1;
}