#include "Sin.h"
#include <iostream>


Sin::Sin()
{
}


Sin::~Sin()
{
}

float Sin::cal(float x, float epsilon)
{
	float value = 0.0f;
	int sign = 1;
	int numerator = 1;
	int denomination = 1;
	float disturbance = x;
	int i = 1;
	do 
	{
		value += disturbance;
		numerator *= x;
		denomination *= (2 * i) * (2 * i + 1);
		sign = -sign;
		disturbance = sign * numerator *numerator * x /denomination;
		i++;
	} while (abs(disturbance) > epsilon);
	return value;
}

int main()
{
	Sin s;
	std::cout << s.cal(1, 0.00001) << std::endl;
	return 1;
}
