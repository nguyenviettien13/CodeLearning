#include "Person.h"
#include <map>
#include <iostream>

using namespace std;


Person::Person()
{
	cout << "create Person with no para" << endl;
}

Person::Person(string name, int age):
	name(name), age(age)
{
	cout << "create Person with para" << endl;
}

Person::Person(const Person & otherPerson)
{
	cout << "Copy constructor running!" << endl;
	name = otherPerson.name;
	age = otherPerson.age;
}

Person::~Person()
{
}

void Person::print()
{
	cout << name << " : " << age << endl;
}

int main()
{
	map<int, Person> people;
	people[2] = Person("Duong", 22);
	people[1] = Person("Thuy", 22);
	people[0] = Person("Nguyen", 22);
	people.insert(make_pair(3, Person("Viet", 23)));

	for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++)
	{
		it->second.print();
	}
	return 1;
}