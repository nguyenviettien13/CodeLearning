#include "IsStandardLayout.h"
#include <iostream>
#include <type_traits>


IsStandardLayout::IsStandardLayout()
{
}


IsStandardLayout::~IsStandardLayout()
{
}
struct A 
{ 
	int i;
	int j;
};

struct B : A { int j; };

/*
int main() {
	std::cout << std::boolalpha;
	std::cout << "is_standard_layout:" << std::endl;
	std::cout << "int: " << std::is_standard_layout<int>::value << std::endl;
	std::cout << "A: " << std::is_standard_layout<A>::value << std::endl;
	std::cout << "B: " << std::is_standard_layout<B>::value << std::endl;
	return 0;
}

*/