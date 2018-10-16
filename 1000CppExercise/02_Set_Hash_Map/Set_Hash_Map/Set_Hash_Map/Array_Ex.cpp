#include "stdafx.h"
#include "Array_Ex.h"

#include "iostream"
#include "array"

Array_Ex::Array_Ex()
{
}


Array_Ex::~Array_Ex()
{
}


int main()
{
	std::array<int, 6> myarray = { 1, 2, 3, 4, 5, 6 };
	for (auto it = myarray.begin(); it != myarray.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	for (auto it = myarray.cbegin(); it != myarray.cend(); it++)
	{
		std::cout << *it << std::endl;
		if (*it == 4)
		{
			printf("a");
		}
	}

	for (auto crv = myarray.crbegin(); crv != myarray.crend(); crv++)
	{
		std::cout << *crv << std::endl;
	}


	std::array<int, 10> myarray1;
	for (auto i = 0; i < myarray1.size(); i++)
	{
		myarray1[i] = i;
	}

	for (auto i = 0; i < myarray1.size(); i++)
	{
		std::cout << myarray1[i] << std::endl;
	}

	std::cout << myarray1.at(1) << std::endl;
	return 0;
}
