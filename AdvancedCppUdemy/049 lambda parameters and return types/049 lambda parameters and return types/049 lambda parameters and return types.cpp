#include <iostream>
#include <string>

using namespace std;

void hello()
{
	cout << "Hello" << endl;
}

void hello1()
{
	cout << "Hello1" << endl;
}
void fatherHello(void(*func)())
{
	func();
}
int main()
{
	auto f = []() { cout << "hello _Lambda_Expression__" << endl; };

	fatherHello(f);
	cout << endl;


	void(*fnc)() = hello;
	fatherHello(fnc);
	cout << endl;

	void(*f1)() = hello1;
	fatherHello(f1);
	cout << endl;

	auto pDivide = [](double a, double b)->double
	{
		if (abs(b - 0) < 0.00001)
		{
			return 0;
		}
		return a / b; 
	};

	cout << pDivide(10.0, 5.0) << endl;

	return 1;
}