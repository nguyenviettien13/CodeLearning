#include <iostream>

using namespace std;

int main()
{
	int numberOfcats = 7;

	[numberOfcats]() mutable{
		numberOfcats = 2;
		cout << numberOfcats << endl; //2
	}();
	cout << endl;
	cout << numberOfcats << endl; //7
	return 1;
}