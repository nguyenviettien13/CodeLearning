#include "Function.h"
#include <iostream>


Function::Function()
{
}


Function::~Function()
{
}

float Function::func1(float input)
{
	if (input >= 5)
	{
		return 2 * input*input + 5 * input + 9;
	}
	return -2 * input *input + 4 * input - 9;
}

int main()
{
	std::cout << Function::func1(5) << std::endl;
	return 1;
}