#include "IsMemberFunctionPointer.h"
#include <iostream>
#include <type_traits>


IsMemberFunctionPointer::IsMemberFunctionPointer()
{
}


IsMemberFunctionPointer::~IsMemberFunctionPointer()
{
}


struct A {
	void fn() {};
};

/*
int main()
{
void(A::*pt)() = &A::fn;
std::cout << std::boolalpha;
std::cout << "Is_Member_Function_Pointer:" << std::endl;
std::cout << "A*: " << std::is_member_function_pointer<A*>::value << std::endl;
std::cout << "void(A::*)(): " << std::is_member_function_pointer<void(A::*)()>::value << std::endl;
std::cout << "decltype(pt): " << std::is_member_function_pointer<decltype(pt)>::value << std::endl;
return 1;
}
*/
