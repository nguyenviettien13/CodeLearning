#include "Is_Lvalue_Reference.h"
#include <iostream>
#include <type_traits>


Is_Lvalue_Reference::Is_Lvalue_Reference()
{
}


Is_Lvalue_Reference::~Is_Lvalue_Reference()
{
}

/*

int main()
{
std::cout << std::boolalpha;
std::cout << "is l_value reference: " << std::endl;
std::cout << "int	: " << std::is_lvalue_reference<int>::value << std::endl;
std::cout << "int&	: " << std::is_lvalue_reference<int&>::value << std::endl;
std::cout << "int&&	: " << std::is_lvalue_reference<int&&>::value << std::endl;
}
*/