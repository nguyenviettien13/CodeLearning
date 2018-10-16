#include "Sum.h"
#include <iostream>


Sum::Sum()
{
}


Sum::~Sum()
{
}

long Sum::cal(int base, int n)
{
	int sign = -1;
	int polynominal = 1;
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		polynominal *= base;
		sign = -sign;
		sum += polynominal * sign;
	}
	return sum;
}

long Sum::cal68(int base, int n)
{
	int value = 0;
	int sign = 1;
	int p = 1;
	for (int i = 1; i <= n; i++)
	{
		p *= base;
		sign = -sign;
		value += sign * p * p;
	}
	return value;
	return 0;
}

long Sum::cal69(int base, int n)
{
	int sign = -1;
	int p = base;
	int value = 0;
	for (int i = 0; i <= n; i++)
	{
		sign = -sign;
		p *= base;
		value += sign * p * p * base;
	}
	return value;
}

int main()
{
	std::cout << Sum::cal(2, 4) << std::endl;
	std::cout << Sum::cal68(4, 2) << std::endl;
	std::cout << Sum::cal69(4, 2) << std::endl;
	return 1;
}
