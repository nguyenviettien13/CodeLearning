#include<iostream>
#include <string>

using namespace std;

class Test
{
public:
	Test(string name, int id) :
		name(name), id(id)
	{

	}
	Test():
		name(""), id(0)
	{

	}
	void print()
	{
		cout << name << " : " << id << endl;
	}

	//Define assignment operator
	const Test operator = (const Test & other)
	{
		cout << "Assignment running" << endl;
		id = other.id + 1000;
		name = other.name + "'s Duong";
		return *this;
	}

	//Define copy constructor
	Test(const Test& other)
	{
		cout << "Copy constructor " << endl;
		name = other.name;
		id = other.id;
	}

private:
	string name;
	int id;
};


int main()
{
	Test test1("NguyenThuyDuong", 22);
	Test test2;
	test2 = test1;
	test2.print();

	Test test3 = test1;
	test3.print();

	Test test4(test1);
	test4.print();
	return 1;
}