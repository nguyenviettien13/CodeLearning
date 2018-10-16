#include "IsClass.h"
#include <iostream>
#include <type_traits>


IsClass::IsClass()
{
}


IsClass::~IsClass()
{
}

struct A{};
class B{};
union C
{
	int i;
	float j;
};

enum class D
{
	D_x,
	D_y,
	D_z
};

/*
int main()
{
	std::cout << std::boolalpha;
	std::cout << "is_class: " << std::endl;
	std::cout << "A: " << std::is_class<A>::value << std::endl;
	std::cout << "B: " << std::is_class<B>::value << std::endl;
	std::cout << "C: " << std::is_class<C>::value << std::endl;
	std::cout << "D: " << std::is_class<D>::value << std::endl;
	return 1;
}
*/