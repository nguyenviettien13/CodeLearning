#include "IsReference.h"
#include <iostream>
#include <type_traits>


IsReference::IsReference()
{
}


IsReference::~IsReference()
{
}

/*
int main()
{
std::cout << std::boolalpha;
std::cout << "is_reference: " << std::endl;
std::cout << "int: " << std::is_reference<int>::value << std::endl;
std::cout << "int&: " << std::is_reference<int&>::value << std::endl;
std::cout << "int&&: " << std::is_reference<int&&>::value << std::endl;
return 1;
}
*/