#include "Is_Array.h"
#include <iostream>
#include <type_traits>


Is_Array::Is_Array()
{
}


Is_Array::~Is_Array()
{
}
/*
int main()
{
	std::cout << std::boolalpha << std::endl;
	std::cout << "is array: " << std::is_array<int>::value << std::endl;
	std::cout << "int[3]: " << std::is_array<int[3]>::value << std::endl;
	std::cout << "array<int, 3>: " << std::is_array < std::array<int, 3>>::value << std::endl;
	std::cout << "string: " << std::is_array<std::string>::value << std::endl;
	std::cout << "string[3]: " << std::is_array<std::string[3]>::value << std::endl;
	return 1;
}
*/