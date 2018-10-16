#include "QuadraticEquation.h"
#include "SimpleEquation.h"
#include <iostream>
#include <math.h>
QuadraticEquation::QuadraticEquation(float a, float b, float c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}


QuadraticEquation::~QuadraticEquation()
{
}

void QuadraticEquation::solve()
{
	if (abs(a - 0) > 0.0001)
	{
		float delta = b * b - 4 * a *c;
		if (delta >=0)
		{
			std::cout << "The equation has 2 root: " << std::endl;
			std::cout << (-b + sqrt(delta)) / (2 * a) << std::endl;
			std::cout << (-b - sqrt(delta) )/ (2 * a) << std::endl;
		}
		else
		{
			std::cout << "The equation has no root" << std::endl;
		}
		
	}
	else
	{
		SimpleEquation e(b, c);
		e.solve84();
	}
}

int main()
{
	QuadraticEquation eq(1, 2, -3);
	eq.solve();
	return 1;
}
