#include "IsFunction.h"
#include <type_traits>
#include <iostream>

IsFunction::IsFunction()
{
}


IsFunction::~IsFunction()
{
}

int f1(int a)				//function
{
	return a;
}

int(*f2)(int) = f1;

struct C
{
	int operator() (int i)
	{
		return i;
	}
} c;


/*
int main()
{
std::cout << std::boolalpha;
std::cout << "is_function	: " << std::endl;
std::cout << "decltype(f1)	: " << std::is_function<decltype(f1)>::value << std::endl;
std::cout << "decltype(f2)	: " << std::is_function<decltype(f2)>::value << std::endl;
std::cout << "decltype(c)	: " << std::is_function<decltype(c)>::value << std::endl;
std::cout << "decltype(C)	: " << std::is_function<C>::value << std::endl;
std::cout << "int(int)		: " << std::is_function<int(int)>::value << std::endl;
std::cout << "int*(int)		: " << std::is_function<int(*)(int)>::value << std::endl;
return 1;
}
*/