#include <iostream>
#include <functional>

using namespace std;
using namespace std::placeholders;

int add(int a, int b, int c)
{
	cout << a << ", " << b << ", " << c << endl;
	return a + b + c;
}

class Test
{
public:
	int add(int a, int b, int c)
	{
		cout << a << ", " << b << ", " << c << endl;
		return a + b + c;
	}
};

int run(function<int(int, int)> fnc, int a, int b)
{
	return fnc(a, b);
}
int main()
{
	cout << add(3, 4, 5) << endl;
	cout << endl;

	auto calculator = bind(add, 3, 4, 5);
	cout << calculator() << endl;
	cout << endl;

	auto calculatorwithplaceholder = bind(add, 20,_2, _1);
	cout << calculatorwithplaceholder(10, 20) << endl;
	cout << endl;

	auto calculatorwith2placeholder = bind(add, 3, 2, _1);
	cout << calculatorwith2placeholder(10, 20) << endl;
	cout << endl;

	Test test;
	auto calculatorwithmethodofclass = bind(&Test::add, test, _2, 3, _1);
	cout << calculatorwithmethodofclass(10, 20) << endl;
	cout << endl;

	auto calculatorpassedascallback = bind(&Test::add, test, _2, 13, _1);
	cout << run(calculatorpassedascallback, 10, 12) << endl;
	return 1;
}