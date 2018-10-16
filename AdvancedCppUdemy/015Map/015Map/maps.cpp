#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	map<string, int> ages;
	ages["ThuyDuong"] = 22;
	ages["V.Tien"] = 22;
	ages["HongChau"] = -5;


	//add pair to the map
	pair<string, int> age("Nguyen", 50);
	ages.insert(age);

	ages.insert(pair<string, int>("Tran", 32));

	ages.insert(make_pair("NguyenThuyDuong", 22));
	//iterate over a map
	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++)
	{
		cout << "Name: " << it->first << " & age: " << it->second << endl;
	}

	//2nd method to iterate over map
	for (map < string, int>::iterator it = ages.begin(); it != ages.end(); it++)
	{
		pair<string, int> age = *it;
		cout << "Name: " << age.first << " & age: " << age.second << endl;
	}

	if (ages.find("Sue") == ages.end())
	{
		cout << "khong tim thay key \"Sue\"" << endl;
	}
	return 1;
}