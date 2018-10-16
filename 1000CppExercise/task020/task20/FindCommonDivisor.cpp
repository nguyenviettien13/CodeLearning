#include "FindCommonDivisor.h"
#include <stdlib.h>
#include <math.h>
#include <iostream>


FindCommonDivisor::FindCommonDivisor(unsigned int number)
{
	this->setNumber(number);
	commonDivisorSet = new std::vector<int>();
}


FindCommonDivisor::~FindCommonDivisor()
{

}

void FindCommonDivisor::findCommonDivisor()
{
	for (int i = 1; i <= number; i++)
	{
		if (number%i == 0)
		{
			commonDivisorSet->push_back(i);
		}
	}
}

void FindCommonDivisor::showCommonDivisor()
{
	for (std::vector<int>::iterator it = commonDivisorSet->begin(); it != commonDivisorSet->end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';
}

int FindCommonDivisor::sumCommonDivisor()
{
	int sum = 0;
	for (std::vector<int>::iterator it = commonDivisorSet->begin(); it != commonDivisorSet->end(); it++)
	{
		sum += *it;
	}
	std::cout << "Sum of all common divisor: " << sum << std::endl;
	return sum;
}

int FindCommonDivisor::findProductionOfallCommonDivisor()
{
	int production = 1;
	for (std::vector<int>::iterator it = commonDivisorSet->begin(); it != commonDivisorSet->end(); it++)
	{
		production *= *it;
	}
	std::cout << "Production of All common divisor is : " << production << std::endl;
	return production;
}

int FindCommonDivisor::countCommonDivisor()
{
	std::cout << "Number of common Divisor is: " << commonDivisorSet->size() << std::endl;
	return commonDivisorSet->size();
}

int FindCommonDivisor::countEvenCommonDivisor()
{
	int count = 0;
	for (std::vector<int>::iterator it = commonDivisorSet->begin(); it != commonDivisorSet->end(); it++)
	{
		if (*it % 2 == 0)
		{
			count++;
		}
	}
	std::cout << "Number of event CommonDivisor is: " << count << std::endl;
	return count;
}

int FindCommonDivisor::findSumAllCDExceptIt()
{
	int sum = 0;
	for (std::vector<int>::iterator it = commonDivisorSet->begin(); it != commonDivisorSet->end()-1; it++)
	{
		sum += *it;
	}
	std::cout << "Sum of all CD except itself: " << sum << std::endl;
	return sum;
}

int FindCommonDivisor::findOddGCD()
{
	for (std::vector<int>::iterator it = commonDivisorSet->end()-1; it != commonDivisorSet->begin(); it--)
	{
		if (*it % 2 == 1)
		{
			std::cout << "The odd GCD is : " << *it << std::endl;
		}
	}
	return 1;
}

int FindCommonDivisor::countOddCommonDivisor()
{
	int count = 0;
	for (std::vector<int>::iterator it = commonDivisorSet->begin(); it != commonDivisorSet->end(); it++)
	{
		if (*it % 2 == 1)
		{
			count++;
		}
	}
	std::cout << "Number of odd CommonDivisor is: " << count << std::endl;
	return count;
}

int FindCommonDivisor::findProductionOfAllOddCommonDivisor()
{
	int p = 1;
	for (std::vector<int>::iterator it = commonDivisorSet->begin(); it != commonDivisorSet->end(); it++)
	{
		if (*it % 2 == 1) p *= *it;
	}
	std::cout << "Production of all common Divisor is : " << p << std::endl;
	return p;
}

int main()
{
	FindCommonDivisor number(20);
	number.findCommonDivisor();
	number.showCommonDivisor();
	number.sumCommonDivisor();
	number.findProductionOfallCommonDivisor();
	number.countCommonDivisor();
	number.countEvenCommonDivisor();
	number.countOddCommonDivisor();
	number.findProductionOfAllOddCommonDivisor();
	number.findSumAllCDExceptIt();
	number.findOddGCD();
	return 1;
}