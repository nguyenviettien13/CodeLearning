#include "Person.h"
#include <string>
#include <iostream>

Person::Person()
{
}

Person::Person(string name, int age):
	name(name), age(age)
{
}


Person::~Person()
{
}

void Person::print() const
{
	cout << name << " : " << age << endl;
}

bool Person::operator<(const Person& other)const
{
	if (name == other.name)
	{
		return age < other.age;
	}
	else
	{
		return name < other.name;
	}
}
