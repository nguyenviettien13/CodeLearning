#include "Checker.h"
#include <iostream>


Checker::Checker()
{
}


Checker::~Checker()
{
}

bool Checker::isExpOf2(int n)
{
	while (n != 1)
	{
		if (n % 2 != 0) return false;
		else
		{
			n /= 2;
		}
	}
	return true;
}

bool Checker::isExpOf3(int n)
{
	while (n != 1)
	{
		if (n % 3 != 0) return false;
		else
		{
			n /= 3;
		}
	}
	return true;
}

int main()
{
	int n = 7;
	if (Checker::isExpOf2(n))
	{
		std::cout << n << " is exponent of 2" << std::endl;
	}
	else
	{
		std::cout << n << " is not exponent of 2" << std::endl;
	}

	n = 27;
	if (Checker::isExpOf3(n))
	{
		std::cout << n << " is exponent of 3" << std::endl;
	}
	else
	{
		std::cout << n << " is not exponent of 3" << std::endl;
	}
	return 1;
}