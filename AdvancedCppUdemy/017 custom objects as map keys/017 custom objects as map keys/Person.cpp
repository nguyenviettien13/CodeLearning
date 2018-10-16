#include "Person.h"



Person::Person()
{
}

Person::Person(string name, int age):
	name(name), age(age)
{

}

Person::Person(const Person & other)
{
	cout << "copy constructor!! " << endl;
	name = other.name;
	age = other.age;
}


Person::~Person()
{
}

void Person::print() const
{
	cout << name << " : " << age << endl;
}

bool Person::operator<(const Person & other) const
{
	if (other.name != name)
	{
		return name < other.name;
	}
	else
	{
		return age < other.age;
	}
}




int main()
{
	map<Person, int> people;
	people[Person("Thuy", 20)] = 20;
	people[Person("Duong", 21)] = 21;
	people[Person("Duong", 22)] = 22;
	people[Person("Viet", 22)] = 22;
	people[Person("Tien", 23)] = 23;

	for (map<Person, int>::iterator it = people.begin(); it != people.end(); it++)
	{
		cout << it->second << flush;
		it->first.print();
	}

	return 1;
}
