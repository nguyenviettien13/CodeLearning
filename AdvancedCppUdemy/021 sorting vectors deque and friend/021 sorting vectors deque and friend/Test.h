#pragma once
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
	friend bool comp(const Test& a, const Test& b);
};

bool comp(const Test& a, const Test& b);
