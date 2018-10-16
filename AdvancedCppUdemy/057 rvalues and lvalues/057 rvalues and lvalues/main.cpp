#include<iostream>

using namespace std;

class Test
{
private:
		int age;
public:
	Test(int age):
		age(age)
	{
		//cout << age << "constructor " << endl;
	}
	Test(const Test & other)
	{
		age = other.age;
		//cout << age << "Copy constructor " << endl;
	}
	Test()
	{
		//cout << "Constructor" << endl;
	}
	~Test()
	{
		cout << "Destructor" << endl;
	}
	int getAge() const 
	{
		return age;
	}
	
};
Test getTest()
{
	return Test();
}
void check(const Test & value)
{
	cout << "l value function" << endl;
}
void check(const Test && value)
{
	cout << "r value function" << endl;
}
int main()
{
	Test test;
	check(test);
	check(getTest());
	check(Test());
	return 1;
}