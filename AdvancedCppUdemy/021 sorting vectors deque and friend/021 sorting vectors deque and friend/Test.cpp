#include "Test.h"
#include <iostream>
#include <string>


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
	cout << "id: " << id << " name: " << name << endl;
}

bool comp(const Test & a, const Test & b)
{
	return a.name < b.name;
}
