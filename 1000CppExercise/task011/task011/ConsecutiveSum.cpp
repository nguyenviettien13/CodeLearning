#include "ConsecutiveSum.h"
#include <iostream>

ConsecutiveSum::ConsecutiveSum(int beg, int end)
{
	this->setBegNum(beg);
	this->setEndNum(end);
	this->value = 0;
}


ConsecutiveSum::~ConsecutiveSum()
{
}

int ConsecutiveSum::getValue()
{
	if (value == 0)
	{
		calValue();
	}
	return value;
}

int ConsecutiveSum::calValue()
{
	value = 0;
	int tg = 1;
	for (int i = begNum; i <= endNum; i++)
	{
		tg = tg * i;
		value += tg;
	}
	return value;
}

int main()
{
	ConsecutiveSum s(6, 9);
	std::cout << s.getValue() << std::endl;
	return 1; 
}