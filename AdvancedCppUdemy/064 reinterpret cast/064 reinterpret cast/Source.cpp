#include <iostream>s
#include <string>

using namespace std;

class Parent
{
public:
	virtual void print()
	{
		cout << "Parent" << endl;
	}
};

class Brother: public Parent
{
public:
	virtual void print()
	{
		cout << "Brother" << endl;
	}
};

class Sister: public Parent
{
public:
	virtual void print()
	{
		cout << "Sister" << endl;
	}
};
int main()
{
	Parent parent;
	Brother brother;
	Sister sister;

	Sister* psister = reinterpret_cast<Sister*>(&brother);
	cout << psister << endl;


	cout << sizeof(double) << endl;	//8
	cout << sizeof(float) << endl;	//4
	cout << sizeof(int) << endl;	//4

	return 1;
}