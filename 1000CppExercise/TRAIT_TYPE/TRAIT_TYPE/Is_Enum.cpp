#include "Is_Enum.h"
#include <iostream>
#include <type_traits>


Is_Enum::Is_Enum()
{
}


Is_Enum::~Is_Enum()
{
}

enum A{first, second, gamma};
class B{};
enum class C{alpha, beta, gamma};

/*
int main()
{
	std::cout << std::boolalpha << std::endl;
	std::cout << "is_enum:" << std::endl;
	std::cout << "A : " << std::is_enum<A>::value << std::endl;
	std::cout << "B : " << std::is_enum<B>::value << std::endl;
	std::cout << "C : " << std::is_enum<C>::value <<std::endl;
	std::cout << "decltype(C::alpha): " << std::is_enum<decltype(C::alpha)>::value << std::endl;
	return 1;
}
*/