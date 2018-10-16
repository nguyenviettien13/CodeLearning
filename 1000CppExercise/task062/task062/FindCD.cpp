#include "FindCD.h"
#include <iostream>


FindCD::FindCD()
{
}


FindCD::~FindCD()
{
}

int FindCD::findGCD(int a, int b)
{
	while (a %b != 0)
	{
		int tg = a % b;
		a = b;
		b = tg;
	}
	return b;
}

int main()
{
	std::cout << FindCD::findGCD(12, 40) << std::endl;
	return 1;
}