#include <iostream>
#include <string>

using namespace std;

void test(void(*func)())
{
	func();
}

int main()
{
	auto func = []() 
	{
		cout << "Hello" << endl;
	};
	func();

	test(func);
	test([]() {cout << "Hello again" << endl; });
	return 1;
}