#include<iostream>
#include<map>
#include<string>

using  namespace std;

int main()
{
	multimap<string, int> people;
	people.insert(make_pair("Thuy", 22));
	people.insert(make_pair("Duong", 13));
	people.insert(make_pair("Duong", 23));
	people.insert(make_pair("Viet", 23));
	people.insert(make_pair("Viet", 23));
	people.insert(make_pair("Tien", 23));


	for (multimap<string, int>::iterator it = people.begin(); it != people.end(); it++)
	{
		cout << it->first << " : " << it->second << endl;
	}

	cout << endl;

	for (multimap<string, int>::iterator it = people.find("Duong"); it != people.end(); it++)
	{
		cout << it->first << " : " << it->second << endl;
	}
	cout << endl;

	pair<multimap<string, int>::iterator, multimap<string, int>::iterator> its = people.equal_range("Viet");
	for (multimap<string, int>::iterator it = its.first; it != its.second; it++)
	{
		cout << it->first << " : " << it->second << endl;
	}

	return 1;
}