#include <iostream>
#include <string>

using namespace std;

class Test
{
private:
	string name;
	int id;
public:
	Test();
	Test(string name, int id);
	~Test();
	void print();
	//Assignment operator
	const Test& operator=(const Test& other);
	//Copy constructor
	Test(const Test& other);
	friend ostream& operator<<(ostream& out, const Test& test);
};


Test::Test()
{
}

Test::Test(string name, int id):
	name(name), id(id)
{

}

Test::~Test()
{
}
void Test::print()
{
	cout << name << " : " << endl;
}
const Test & Test::operator=(const Test & other)
{
	cout << "Assignment running!!!" << flush;
	name = other.name;
	id = other.id;
	return *this;
}
Test::Test(const Test & other)
{
	name = other.name;
	id = other.id;
}
int main()
{
	Test test1("ThuyDuong", 22);
	cout << test1 << endl;
	return 1;
}

ostream & operator<<(ostream & out, const Test & test)
{
	out << test.id << " : " << test.name;
	return out;
}
