#include "Square.h"
#include <cmath>
#include <iostream>

Square::Square()
{
}


Square::~Square()
{
}

float Square::cal(int n, int base)
{
	float value = sqrt(base);
	int polynominal = base;
	for(int i = 2; i <= n; i++)
	{
		polynominal *= base; //tinh x^i
		value = sqrt(polynominal + value);
	}
	return value;
}


int main()
{
	int n = 1;
	std::cout << Square::cal(n, 4) << std::endl;
	return 1;
}