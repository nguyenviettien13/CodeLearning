//main.cpp
#include "A.h"
#include "B.h"

int main(int argc, char* argv[])
{
	A a(10);
	B b(3.14);
	a.Print();
	a.SetB(&b);
	b.Print();
	b.SetA(&a);
	return 0;
}