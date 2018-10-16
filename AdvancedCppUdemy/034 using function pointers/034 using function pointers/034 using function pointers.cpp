#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
Function check whether length of string equal 3
*/
bool match(string str)
{
	return (str.size() == 3);
}

int matchCount(vector<string> strvect, bool(*match)(string))
{
	int tally = 0;
	for (vector<string>::iterator it = strvect.begin(); it != strvect.end(); it++)
	{
		if (match(*it))
		{
			tally++;
		}
	}
	return tally;
}
int main()
{
	vector<string> numbers;
	numbers.push_back("one");
	numbers.push_back("two");
	numbers.push_back("three");
	numbers.push_back("four");
	numbers.push_back("five");
	numbers.push_back("six");
	numbers.push_back("seven");
	cout << "Number string have length equal 3 is: " << matchCount(numbers, match) << endl;
	cout << "Number string have length equal 3 is: " << count_if(numbers.begin(), numbers.end(), match) << endl;
	return 1;
}