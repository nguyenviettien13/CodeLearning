#include <iostream>
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
class Brother:public Parent
{
private:
	int age{ 2 };
public:
	virtual void print()
	{
		cout << "Brother" << endl;
	}

	virtual void print1()
	{
		cout << "Brother 1" << endl;
	}
};
int main()
{
	float value = 21.02;
	cout << int(value) << endl;
	cout << static_cast<int>(value) << endl;

	Brother bro;
	Parent parent;

	Parent* pparent = &bro;
	pparent->print();
	cout << endl;

	Parent* pprent = static_cast<Parent*>(&bro);
	pprent->print();
	cout << endl;

	Parent* p1 = static_cast<Parent*>(&bro);
	p1->print();
	cout << endl;
	Parent&& p = static_cast<Parent&&>(parent);
	p.print();
	cout << endl;

	Brother* pbro = dynamic_cast<Brother*>(&parent);
	if (pbro == nullptr)
	{
		cout << "cannot casting " << endl;
	}
	else
	{
		pbro->print1();
	}

	Brother* pbro = dynamic_cast<Brother*>(&bro);
	if (pbro == nullptr)
	{
		cout << "cannot casting " << endl;
	}
	else
	{
		pbro->print1();
	}
	return 1;
}