#include <iostream>
#include <string>

using namespace std;

class Parent
{
private:
	int dogs{ 5 };
	string text{ "Hello" };

public:
	Parent(): Parent("HelloP")
	{
		cout << "No para in parent constructor" << endl;
	};
	Parent(string text)
	{
		this->text = text;
		cout << "string para constructor" << endl;
	}
	~Parent()
	{

	};
};

class Child :public Parent
{
public:
	Child() :
		Parent("HelloC")
	{

	};
};


int main()
{
	Parent parent;
	Child child;
	return 1;
}