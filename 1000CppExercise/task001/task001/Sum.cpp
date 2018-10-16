#include "Sum.h"
#include <iostream>


Sum::Sum(int beg, int end)
{
	this->setBeg(beg);
	this->end = end;
}


Sum::~Sum()
{
}

int Sum::Calculate()
{
	int sum = 0;
	for (int i = 1; i <= end; i++)
	{
		sum += i;
	}
	value = sum;
	return sum;
}

int Sum::getValue()
{
	if (value == INT_MIN)
	{
		Calculate();
	}
	return value;
}

int main()
{
	Sum sum(1, 100);
	std::cout << "INT_MIN" << INT_MIN << std::endl;
	printf("Value of sum is: %d",sum.getValue());
	return 0;
}