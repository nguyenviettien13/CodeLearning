#include "Printer.h"
#include <iostream>


Printer::Printer()
{
}


Printer::~Printer()
{
}

void Printer::showSolidTriangle(int h)
{
	for (int i = 1; i <= h; i++)
	{
		for (int j = h; j >= 1; j--)
		{
			if (j <= i)
			{
				std::cout << " * " ;
			}
			else
			{
				std::cout << "   ";
			}
		}
		for (int j = 2; j <= h; j++)
		{
			if (j <= i)
			{
				std::cout << " * ";
			}
			else
			{
				std::cout << "   ";
			}
		}
		std::cout << std::endl;
	}
}

void Printer::showEmptyTriangle(int h)
{
	for (int i = 1; i <= h; i++)
	{
		if (i == 3)
		{
			std::cout << "";
		}
		for (int j = h; j >= 1; j--)
		{
			if (i == j || i == h)
			{
				std::cout << " * ";
			}
			else
			{
				std::cout << "   ";
			}
		}
		for (int j = 2; j <= h; j++)
		{
			if (i == j || i == h)
			{
				std::cout << " * ";
			}
			else
			{
				std::cout << "   ";
			}
		}
		std::cout << std::endl;
	}
}

void Printer::showRightSolidTriangle(int h)
{
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= h; j++)
		{
			if (j<=i)
			{
				std::cout << " * ";
			}
			else
			{
				std::cout << "   ";
			}
		}
		std::cout << std::endl;
	}
}

void Printer::showRightEmptyTriangle(int h)
{
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= h; j++)
		{
			if (i == j || j == 1 || i == h)
			{
				std::cout << " * ";
			}
			else
			{
				std::cout << "   ";
			}
		}
		std::cout << std::endl;
	}
}

void Printer::showRectangle(int longside, int shortside)
{
	for (int i = 1; i <= shortside; i++)
	{
		for (int j = 1; j <= longside; j++)
		{
			std::cout << " * ";
		}
		std::cout << std::endl;
	}
}

void Printer::showEmptyRectangle(int longside, int shortside)
{
	for (int i = 1; i <= shortside; i++)
	{
		for (int j = 1; j <= longside; j++)
		{
			if (i == 1 || j == 1 || i == shortside || j == longside)
			{
				std::cout << " * ";
			}
			else
			{
				std::cout << "   ";
			}
		}
		std::cout << std::endl;
	}
}

int main()
{
	Printer p;
	
	p.showSolidTriangle(10);
	std::cout << std::endl;
	std::cout << std::endl;
	p.showEmptyTriangle(10);
	std::cout << std::endl;
	std::cout << std::endl;
	p.showRightSolidTriangle(10);
	std::cout << std::endl;
	std::cout << std::endl;
	p.showRightEmptyTriangle(10);
	std::cout << std::endl;
	std::cout << std::endl;
	p.showRectangle(10, 6);
	std::cout << std::endl;
	std::cout << std::endl;
	p.showEmptyRectangle(10, 6);
	return 1;
}