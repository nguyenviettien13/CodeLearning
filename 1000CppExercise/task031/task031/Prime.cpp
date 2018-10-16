#include "Prime.h"
#include <iostream>


Prime::Prime()
{
}


Prime::~Prime()
{
}

bool Prime::isPrime(unsigned int number)
{
	if (number == 2) return true;
	if (number == 1) return false;
	if (number > 2) 
	{
		for (int i = 2; i < number; i++)
		{
			if (number % i == 0) return false;
		}
		return true;
	}
	if (number <= 0)
	{
		std::cout << "error, number is negative number!!!" << std::endl;
	}
}


int main()
{
	int number = -1;
	if (Prime::isPrime(number))
	{
		std::cout << number << " is prime number" << std::endl;
	}
	else
	{
		std::cout << number << " is not prime number" << std::endl;
	}
	return 1;
}