#include <iostream>
#include <string>

using namespace std;

void test()
{
	cout << "Hello world" << endl;
}

int main()
{
	void(*ptest)();
	ptest = &test;
	(*ptest)();

	void(*ptest1)();
	ptest1 = test;
	ptest1();
	void(*ptest2)();
	ptest2 = test;

	return 1;
}