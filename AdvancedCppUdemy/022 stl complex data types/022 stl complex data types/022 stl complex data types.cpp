#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main()
{
	map<string, vector<int>> points;
	points["Duong"].push_back(10);
	points["Duong"].push_back(9);
	points["Duong"].push_back(9); 
	points["Tien"].push_back(10);
	points["Tien"].push_back(9);
	for (map<string, vector<int>>::iterator it = points.begin(); it != points.end(); it++)
	{
		cout << it->first;
		cout << " : ";
		for (int i = 0; i < it->second.size(); i++)
		{
			cout << it->second[i] << " ";
		}
		cout << endl;
	}
	return 1;
}