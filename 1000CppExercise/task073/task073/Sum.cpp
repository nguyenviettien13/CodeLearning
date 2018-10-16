#include "Sum.h"
#include <stdlib.h>
#include <iostream>

Sum::Sum()
{
}


Sum::~Sum()
{
}

float Sum::cal74(int n, int x)
{
	float value = 1- x;
	int sign = -1;
	long partOfnumerator = 1;
	long denomination = 1;
	/*calculate all denomination*/
	long * fac = new long[2 * n + 2];
	fac[0] = 1;
	for (int i = 1; i <= 2 * n + 1; i++)
	{
		fac[i] = i * fac[i - 1];
	}


	for (int i = 1; i <= n; i++)
	{
		sign = -sign;
		partOfnumerator *= x;
		denomination = fac[2 * i + 1];
		value += sign * partOfnumerator *partOfnumerator *x / (float)denomination;
		std::cout << std::endl;
	}

	delete fac;
	return value;
}

float Sum::cal73(int n, int x)
{
	int sign = -1;
	int numeration = 1;
	int denomination = 0;
	int *fac = new int[2 * n + 1];
	float value = -1;

	/*Calculate factorial*/
	fac[0] = 1;
	for (int i = 1; i <= 2*n; i++)
	{
		fac[i] = i * fac[i - 1];
	}

	
	for (int i = 1; i <= n; i++)
	{
		sign = -sign;
		numeration *= x;
		denomination = fac[2 * i];
		value += sign * (float)numeration *numeration / denomination;
		std::cout << std::endl;
	}
	delete fac;
	return value;
}

int main()
{
	std::cout << Sum::cal73(3, 2) << std::endl;
	std::cout << Sum::cal74(3, 2) << std::endl;
	return 1;
}