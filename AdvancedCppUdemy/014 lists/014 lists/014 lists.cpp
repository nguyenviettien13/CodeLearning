#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;

int main()
{
	list<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	cout << "size: " << numbers.size() << endl;

	list<int>::iterator bi = numbers.begin();
	numbers.insert(bi, 100);

	for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		cout << *it << endl;
	}
	numbers.erase(numbers.begin());
	for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		cout << *it << endl;
	}
	return 1;
}