#include <initializer_list>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int count(vector<string> texts, bool(*checkValid)(string))
{
	int n_count = 0;
	for (string text : texts)
	{
		if (checkValid(text))
		{
			n_count++;
		}
	}
	return n_count;
}
int main()
{
	auto devide = [](int a, int b)->double
	{
		if (b == 0)
		{
			return 0;
		}
		return double(a) / b; 
	};
	cout << devide(1, 2) << endl;
	cout << devide(1, 0) << endl;
	return 1;
}
