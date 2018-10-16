#include <iostream>
#include <string>

using namespace std;

class Test
{
private:
	int id =3;
	string text ="Hello";
public:
	Test() = default;
	Test(int id) :
		id(id)
	{
		//do nothing
	}
	
	//copy constructor
	Test(const Test & other) = default;
	Test& operator = (const Test &other) = delete;
	void print()
	{
		cout << id << " : " << text << endl;
	}

};

int main()
{
	Test test;
	test.print();
	cout << endl; 

	Test test1(6);
	test1.print();
	cout << endl;

	Test testcopy(test1);		//would fail if Test(const Test & other) = delete;
	testcopy.print();
	cout << endl;

	Test testassign = test1;	//wordl fail if Test& operator = (const Test &other) = delete;
	testassign.print();
	cout << endl;

	return 1;
}