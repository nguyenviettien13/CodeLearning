#include "IsFundamental.h"
#include <iostream>
#include <type_traits>


IsFundamental::IsFundamental()
{
}


IsFundamental::~IsFundamental()
{
}

/*
int main() {
std::cout << std::boolalpha;
std::cout << "is_fundamental:" << std::endl;
std::cout << "unsigned: " << std::is_fundamental<unsigned>::value << std::endl;
std::cout << "float: " << std::is_fundamental<float>::value << std::endl;
std::cout << "float*: " << std::is_fundamental<float*>::value << std::endl;
std::cout << "decltype(nullptr): " << std::is_fundamental<decltype(nullptr)>::value << std::endl;
return 0;
}
*/