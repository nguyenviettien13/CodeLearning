#include "Max.h"
#include <iostream>


Max::Max()
{
}


Max::~Max()
{
}

int Max::findMax(int a, int b, int c)
{
	return ((a > b ? a : b) > c? (a > b ? a : b) : c);
}

bool Max::isSameSign(int a, int b)
{
	return a * b >= 0;
}

int main()
{
	std::cout << "max is : " << Max::findMax(1, 3, 5) << std::endl;
	if (Max::isSameSign(1, 9))
	{
		std::cout << "Same sign" << std::endl;
	}
	else
	{
		std::cout << "Opposited sign" << std::endl;
	}
	return 1;
}