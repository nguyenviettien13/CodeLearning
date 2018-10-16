#include <set>
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

int main()
{
	set<int> number;
	number.insert(1);
	number.insert(10);
	number.insert(-1);
	number.insert(91);
	for (set<int>::iterator it = number.begin(); it != number.end(); it++)
	{
		cout << *it << endl;
	}

	set<string> names;
	names.insert("Nguyen");
	names.insert("Thuy");
	names.insert("Duong");
	names.insert("Nguyen");
	names.insert("Viet");
	names.insert("Tien");
	for (set<string>::iterator it = names.begin(); it != names.end(); it++)
	{
		cout << *it << endl;
	}
	cout << names.size() << endl;

	set<Person> people;
	people.insert(Person("Nguyen Viet Tien", 22));
	people.insert(Person("Nguyen Thuy Duong", 22));
	for (set<Person>::iterator it = people.begin(); it != people.end(); it++)
	{
		 it->print();
	}
	return 1;
}