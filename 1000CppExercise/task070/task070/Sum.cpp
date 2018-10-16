#include "Sum.h"
#include <iostream>


Sum::Sum()
{
}


Sum::~Sum()
{
}

float Sum::cal(int n)
{
	float value = 0;
	int sign = -1;
	int denomination = 0;
	for (int i = 1; i <= n; i++)
	{
		denomination += i;
		sign = -sign;
		value += sign* (float)1.0 / denomination;
	}
	return value;
}

int main()
{
	std::cout << Sum::cal(3) << std::endl;
	return 1;
}