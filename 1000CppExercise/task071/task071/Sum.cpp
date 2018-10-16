#include "Sum.h"
#include <iostream>


Sum::Sum()
{
}


Sum::~Sum()
{
}

float Sum::cal(int x,  int n)
{
	float val = 0.0f;
	int denomination = 0;
	int numerator = 1;
	int sign = 1;
	for (int i = 1; i <= n; i++)
	{
		sign = -sign;
		numerator *= x;
		denomination += i;
		val += sign * (float)numerator / denomination;
	}
	return val;
}


int main()
{
	std::cout << Sum::cal(2, 3) << std::endl;
	return 1;
}