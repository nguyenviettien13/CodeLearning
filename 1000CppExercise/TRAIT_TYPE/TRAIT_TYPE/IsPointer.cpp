#include "IsPointer.h"
#include <iostream>
#include <type_traits>


IsPointer::IsPointer()
{
}


IsPointer::~IsPointer()
{
}

/*
int main()
{
	std::cout << std::boolalpha;
	std::cout << "is_pointer: " << std::endl;
	std::cout << "int:			" << std::is_pointer<int>::value << std::endl;
	std::cout << "int*:			" << std::is_pointer<int*>::value << std::endl;
	std::cout << "int**:		" << std::is_pointer<int**>::value << std::endl;
	std::cout << "int(*) ():	" << std::is_pointer<int(*)()>::value << std::endl;

	return 1;
}
*/