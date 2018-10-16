#include "Is_Member_Object_Function.h"
#include <iostream>
#include <type_traits>


Is_Member_Object_Function::Is_Member_Object_Function()
{
}


Is_Member_Object_Function::~Is_Member_Object_Function()
{
}

struct A {
	int x;
};

/*
int main()
{
int A::* pt = &A::x;
std::cout << std::boolalpha;
std::cout << "is_member_object_member: " << std::endl;
std::cout << "A*: " << std::is_member_function_pointer<A*>::value << std::endl;
std::cout << "int A::* : " << std::is_member_function_pointer<int A::*>::value << std::endl;
std::cout << "decltype(pt): " << std::is_member_function_pointer<decltype(pt)>::value << std::endl;

return 1;
}
*/