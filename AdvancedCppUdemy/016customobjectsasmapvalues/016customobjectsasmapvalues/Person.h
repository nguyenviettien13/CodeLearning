#pragma once
#include <string>
#include <iostream>
using namespace std;
class Person
{
private:
	string name;
	int age;
public:
	Person();
	Person(string name, int age);
	Person(const Person& otherPerson);
	~Person();
	void print();
	
};

