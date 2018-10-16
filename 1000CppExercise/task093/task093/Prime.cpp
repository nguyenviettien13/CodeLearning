#include "Prime.h"
#include <math.h>
#include <iostream>

Prime::Prime()
{
}


Prime::~Prime()
{
}

bool Prime::isPrime(int n)
{
	int sqrtOfN = sqrt(n);
	for (int i = 2; i <= sqrtOfN; i++)
	{
		if (n % i == 0) return false;
	}
	return true;
}

int main()
{
	if (Prime::isPrime(3))
	{
		std::cout << "A prime" << std::endl;
	}
	else
	{
		std::cout << "NOT A prime" << std::endl;

	}
	return 1;
}