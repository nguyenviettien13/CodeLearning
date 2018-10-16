#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Parent
{
public:
	Parent() {};
	Parent(const Parent& other)
	{
		cout << "Parent copy constructor!!" << endl;
		this->one = other.one;
	}
	~Parent()
	{

	}
	
	virtual void print()
	{
		cout << "Parent" << endl;
	}

	int one;
};

class Child :public Parent
{
private:	
	int two;
public:

	Child()
	{

	}
	~Child()
	{

	}
	virtual void print()
	{
		cout << "Child" << endl;
	}
};

class Child1 :public Parent
{
private:
	int two;
public:

	Child1()
	{

	}
	~Child1()
	{

	}
	virtual void print()
	{
		cout << "Child1" << endl;
	}
};

typedef Parent* PParent;
int main()
{

	Child child;
	Child* pchild = &child;
	pchild->print();
	Parent* pParent = &child;
	pParent->print();

	Parent p = Child();
	p.print();
	cout << endl;

	vector<PParent> sets;
	Child child11;
	Child child12;

	Child1 child21;
	Child1 child22;

	sets.push_back(&child11);
	sets.push_back(&child12);

	sets.push_back(&child21);
	sets.push_back(&child22);

	for (PParent p : sets)
	{
		p->print();
	}
	return 1;
}