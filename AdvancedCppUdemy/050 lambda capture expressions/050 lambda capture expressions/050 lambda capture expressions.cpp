#include <iostream>
#include <string>

using namespace std;

void test(void(*func)())
{
	func();
}
int main()
{
	int one = 1;
	int two = 2;
	int three = 3;

	auto myFuction = [one]() {cout << "hello" << " : " << one << endl; };
	myFuction();

	//capture all variable by reference
	auto myFuction1 = [&]() 
	{
		one = 11;
		cout << "hello" << " : " << one << endl; 
	};
	myFuction1();

	cout << "One in local: " << one << endl;

	//capture all local variable by value
	auto myFuction2 = [=]()
	{
		cout << "hello" << " one: " << one << ", two:"<< two << ",three: " << three <<endl;
	};
	myFuction2();
	return 1;
}