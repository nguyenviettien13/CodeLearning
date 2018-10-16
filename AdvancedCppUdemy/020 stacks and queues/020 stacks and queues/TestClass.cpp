#include "TestClass.h"
#include <iostream>

using namespace std;

TestClass::TestClass()
{
	cout << "Create object with no para" << endl;
}

TestClass::TestClass(string name):
	name(name)
{
	//cout << "Create object with para" << endl;
}


TestClass::~TestClass()
{
	//cout << "Destroy instance!!!" << name << endl;
}

void TestClass::print() const
{
	cout << name << endl;
}

bool TestClass::operator<(const TestClass & other) const
{
	return name < other.name;
}
