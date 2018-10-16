#include "PerfectNumber.h"
#include <iostream>


PerfectNumber::PerfectNumber()
{
}


PerfectNumber::~PerfectNumber()
{
}

void PerfectNumber::showSquareNumber(int N)
{
	int i = 0;
	while (i*i < N)
	{
		std::cout << i*i << std::endl;
		i++;
	}
}

int main()
{
	PerfectNumber p;
	p.showSquareNumber(1999);
	return 1;
}