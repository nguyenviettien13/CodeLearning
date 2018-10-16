#include "Triangle.h"
#include <string>
#include <iostream>

Triangle::Triangle(float a, float b, float c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}


Triangle::~Triangle()
{
}

void Triangle::idfCharacter()
{
	std::string Characteristic;
	float e1 = (a > b ? a : b) > c ? (a > b ? a : b) : c;//max
	float e2 = (a < b ? a : b) < c ? (a < b ? a : b) : c;//min
	float e3 = a + b + c - e1 - e2;						//middle

	if ((e1 - e2 < 0.00001) && (e2 - e3) < 0.00001)
	{
		Characteristic = "Tam giac deu\n";
	}
	else
	{
		if ((e1 - e2) < 0.0001 || (e2 - e3) < 0.0001)
		{
			Characteristic = "Tam giac can\n";
		}
	}
	if (e1*e1 - (e3 * e3 + e2 * e2) < 0.0001)
	{
		Characteristic += "Tam giac Vuong\n";
	}
	std::cout << Characteristic << std::endl;
}

int main()
{
	Triangle tg(8, 8, 11.313708499);
	tg.idfCharacter();
	return 1;
}