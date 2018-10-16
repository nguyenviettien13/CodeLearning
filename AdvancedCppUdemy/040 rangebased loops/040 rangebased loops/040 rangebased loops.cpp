#include <iostream>
#include <typeinfo>
#include <string>
#include <vector>


using namespace std;

int main()
{
	vector<vector<string>> text;
	vector<string> cau1;
	cau1.push_back("Xin");
	cau1.push_back("Chao");
	cau1.push_back("Ha");
	cau1.push_back("Noi");
	text.push_back(cau1);


	vector<string> cau2;
	cau2.push_back("I");
	cau2.push_back("am ");
	cau2.push_back("a");
	cau2.push_back("genious");
	text.push_back(cau2);

	//iterator over set
	auto texts = { "one", "two", "three" };
	for (auto text : texts)
	{
		cout << text << endl;
	}

	cout << endl;
	cout << endl;

	//iterate through string
	string hello = "Hello";
	cout << typeid(hello).name() << endl;
	for (auto c : hello)
	{
		cout << c << endl;
	}

	cout << endl;
	cout << endl;
	//iterate through int array
	int arr[] = { 1, 2, 3, 4, 5 };
	for (auto i : arr)
	{
		cout << i << endl;
	}
	return 1;
}