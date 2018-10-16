#include "LeastCommonMultiple.h"
#include <iostream>


LeastCommonMultiple::LeastCommonMultiple()
{
}


LeastCommonMultiple::~LeastCommonMultiple()
{
}

int LeastCommonMultiple::findLeastCommonMultiple(int a, int b)
{
	return (a*b) / findGCD(a, b);
}

int LeastCommonMultiple::findGCD(int a, int b)
{
	int tg = 0;
	while (a %b != 0)
	{
		tg = a % b;
		a = b; 
		b = tg;
	}
	return b;
}

int main()
{
	std::cout << LeastCommonMultiple::findLeastCommonMultiple(10, 15);
	return 1;
}