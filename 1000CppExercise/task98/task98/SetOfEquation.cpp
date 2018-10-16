#include "SetOfEquation.h"
#include <iostream>


SetOfEquation::SetOfEquation(float a1, float b1, float c1, float a2, float b2, float c2)
{
	this->a1 = a1;
	this->a2 = a2;
	this->b1 = b1;
	this->b2 = b2;
	this->c1 = c1;
	this->c2 = c2;
}


SetOfEquation::~SetOfEquation()
{
}

void SetOfEquation::solve()
{
	float d  = a1 * b2 - a2 * b1;
	float dx = c1 * b2 - c2 * b1;
	float dy = a1 * c2 - a2 * c1;
	if (d != 0)
	{
		std::cout << "The equation has root is: " << std::endl;
		std::cout << "x = " << (float)dx / d;
		std::cout << "y = " << (float)dy / d;
	}
	else
	{
		if (dx != 0 | dy != 0)
		{
			std::cout << "Phuong trinh vo nghiem" << std::endl;
		}
		else
		{
			std::cout << "The equation has unlimited root";
		}
	}
}

int main()
{

	return 1;
}