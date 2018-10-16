#include <iostream>
#include "A.h"
#include <assert.h>

int func(A & a)
{
	A b(4);
	a = b;
	a.tuoi = 10;
	return 1;
}
int main()
{
	A a(10);
	A b = a;
	A& c = a;
	b.tuoi = 20;
	std::cout << &a << std::endl;
	std::cout << &b << std::endl;
	if (&a == &c)
	{
		std::cout << "equal" << std::endl;
	}
	else
	{
		std::cout << "not equal" << std::endl;

	}

	int foo1 = 7;
	foo1 = 9;
	const int foo2 = 9;
	A d(3);
	func(d);

	return 1;

}