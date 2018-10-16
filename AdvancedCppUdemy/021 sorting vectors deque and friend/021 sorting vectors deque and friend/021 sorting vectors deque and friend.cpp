#include <vector>
#include <iostream>
#include <algorithm>
#include "Test.h"

using namespace std;

int main()
{
	vector<Test> tests;
	tests.push_back(Test("B", 12));
	tests.push_back(Test("A", 13));
	tests.push_back(Test("C", 10));
	tests.push_back(Test("Duong", 15));
	
	sort(tests.begin(), tests.end(), comp);

	for (vector<Test>::iterator it = tests.begin(); it != tests.end(); it++)
	{
		(*it).print();
	}
	return 1;
}