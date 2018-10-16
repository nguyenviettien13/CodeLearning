#include <iostream>
#include <typeinfo>

using namespace std;

auto test()
{
	return 1000;
}

int main()
{
	auto i = long long(1000);
	
	cout << typeid(i).name() << endl;

	long long j = 1000;
	cout << typeid(j).name() << endl;


	auto k = test();
	cout << typeid(k).name() << endl;

	return 1;
}