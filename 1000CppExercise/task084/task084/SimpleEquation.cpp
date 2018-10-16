#include "SimpleEquation.h"
#include <iostream>


SimpleEquation::SimpleEquation(float a, float b)
{
	this->a = a;
	this->b = b;
}


SimpleEquation::~SimpleEquation()
{
}

void SimpleEquation::solve84()
{
	if (a == 0 )
	{
		if (b != 0)
		{
			std::cout << "The equation has no root" << std::endl;
		}
		else
		{
			std::cout << "The any number is also root of equation" << std::endl;
		}
	}
	else
	{
		std::cout << "The equation has 1 root is : " << -(float)b / a << std::endl;
	}
}

//int main()
//{
//	SimpleEquation eq(0, 4);
//	eq.solve84();
//	return 1;
//}