#include "IsEmpty.h"
#include <iostream>
#include <type_traits>


IsEmpty::IsEmpty()
{
}


IsEmpty::~IsEmpty()
{
}

struct A { };
struct B { void fn() {} };
struct C { int x; };
/*
int main() {
	std::cout << std::boolalpha;
	std::cout << "is_empty:" << std::endl;
	std::cout << "int: " << std::is_empty<int>::value << std::endl;
	std::cout << "A: " << std::is_empty<A>::value << std::endl;
	std::cout << "B: " << std::is_empty<B>::value << std::endl;
	std::cout << "C: " << std::is_empty<C>::value << std::endl;
	return 0;
}
*/