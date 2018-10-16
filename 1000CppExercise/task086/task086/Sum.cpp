#include "Sum.h"
#include <iostream>
#include <math.h>


Sum::Sum()
{
}


Sum::~Sum()
{
}

long Sum::cal86(int n)
{
	long val = 0;
	for (int i = 1; i <= n; i++)
	{
		val += pow(i, 3);
	}
	return val;
}


int main()
{
	std::cout << Sum::cal86(3) << std::endl;
	return 1;
}