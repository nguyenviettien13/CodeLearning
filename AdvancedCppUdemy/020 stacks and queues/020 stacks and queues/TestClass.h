#pragma once
#include <string>

using namespace std;

class TestClass
{
private:
	string name;
public:
	TestClass();
	TestClass(string name);
	~TestClass();
	void print() const;
	bool operator <(const TestClass& other) const;
};

