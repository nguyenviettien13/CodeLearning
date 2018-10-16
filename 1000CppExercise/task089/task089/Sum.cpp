#include "Sum.h"
#include <iostream>


Sum::Sum()
{
}


Sum::~Sum()
{
}

long Sum::cal89(int N)
{
	long sum = 0;
	for (int i = 1; i < N; i += 2)
	{
		sum += i;
	}
	return sum;
}

int main()
{
	std::cout << Sum::cal89(1000) << std::endl;
	return 1;
}
