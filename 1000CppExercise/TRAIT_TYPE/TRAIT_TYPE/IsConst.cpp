#include "IsConst.h"
#include <iostream>
#include <type_traits>


IsConst::IsConst()
{
}


IsConst::~IsConst()
{
}
/*
int main()
{
	std::cout << std::boolalpha;
	std::cout << "is_const: " << std::endl;
	std::cout << "int : " << std::is_const<int>::value << std::endl;
	std::cout << "const int: " << std::is_const<const int>::value << std::endl;
	std::cout << "const int*: " << std::is_const<const int *>::value << std::endl;
	std::cout << "const * int: " << std::is_const<int* const>::value << std::endl;
	return 1;
}
*/