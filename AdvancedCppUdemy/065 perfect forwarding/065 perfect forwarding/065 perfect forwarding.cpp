#include <iostream>
#include <string>

using namespace std;

class Test
{
public:
	int id;
public:
	Test()
	{

	}
	Test(int id) :
		id(id)
	{

	}
};

void check(Test&& arg)
{
	cout << "r value" << endl;
}

void check(Test& arg)
{
	cout << "l value" << endl;
}

template <typename T>
void call(T&& arg)
{
	check(forward<T>(arg));
}

int main()
{
	Test test(0);
	Test test1(1);
	auto &&t = test; //become a lvalue reference
	check(t);			//t sẽ có kiểu là Test& 

	call(test);
	call(Test());

	return 1;
}