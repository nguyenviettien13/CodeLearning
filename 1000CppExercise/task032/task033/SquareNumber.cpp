#include "SquareNumber.h"
#include <math.h>
#include <iostream>

SquareNumber::SquareNumber()
{
}


SquareNumber::~SquareNumber()
{
}

bool SquareNumber::isSquare(int number)
{
	int squareRoot = sqrt(number);
	return (number == squareRoot* squareRoot);
}


int main()
{
	int number = -1;
	if (SquareNumber::isSquare(number))
	{
		std::cout << number << " is square number " << std::endl;
	}
	else
	{
		std::cout << number << " is not square number " << std::endl;
	}
	return 1;
}