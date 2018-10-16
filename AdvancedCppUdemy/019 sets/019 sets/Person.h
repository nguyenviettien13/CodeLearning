#pragma once
#include <string>
using namespace std;

class Person
{
private:
	string name;
	int age;
public:
	Person();
	Person(string name, int age);
	~Person();
	void print() const;
	bool operator<(const Person& other) const;
};

