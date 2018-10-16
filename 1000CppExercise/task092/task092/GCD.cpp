#include "GCD.h"
#include <iostream>
#include <math.h>

GCD::GCD()
{
}


GCD::~GCD()
{
}

int GCD::findGCD(int a, int b)
{
	a = abs(a);
	b = abs(b);
	int tg = 0;
	while (a%b != 0)
	{
		tg = a % b;
		a = b;
		b = tg;
	}
	return b;
}

int main()
{
	std::cout << GCD::findGCD(-15, -25) << std::endl;
	return 1;
}