#include "Sum.h"
#include <iostream>


Sum::Sum()
{
}


Sum::~Sum()
{
}

int Sum::calValue(int n)
{
	int value = 0;
	for (int i = 1; i <= n; i++)
	{
		value += i;
	}
	return value;
}

int Sum::calValue(float x, int n)
{
	float value = 0;
	float term = 1;
	for (int i = 1; i <= n; i++)
	{
		term *= x;
		value += term;
	}
	return value;
}

int main()
{
	Sum s;
	std::cout << s.calValue(1000) << std::endl;
	std::cout << s.calValue(5, 5) << std::endl;
	return 1;
}