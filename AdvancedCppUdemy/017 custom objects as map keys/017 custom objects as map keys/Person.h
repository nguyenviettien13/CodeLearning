#pragma once
#include <string>
#include <iostream>
#include <map>

using namespace std;
class Person
{
private:
	string name;
	int age;
public:
	Person();
	Person(string name, int age);
	Person(const Person& other);
	~Person();
	void print() const;
	bool operator < (const Person& other) const;
};

