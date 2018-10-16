#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
bool check(string test)
{
	return test.size() == 3;
}

//using functor
class Check
{
private:
	int size;
public:
	Check() = default;
	Check(int size) :
		size(size)
	{

	}
	bool operator()(string& test)
	{
		return test.size() == size;
	}
};

void run(function <bool(string&)> fncheck)
{
	string test = "dog";
	cout << fncheck(test) << endl;
}
int main()
{
	int size = 3;
	vector<string> vec{ "one", "two", "three" };
	auto lambda = [size](string &test) {return test.size() == size; };
	int number = count_if(vec.begin(), vec.end(),lambda);
	cout << "Number of string that size equal 3 : " << number << endl;
	cout << endl;


	int number1 = count_if(vec.begin(), vec.end(), check);
	cout << "Number of string that size equal 3 : " << number1 << endl;
	cout << endl;

	Check mycheck(3);
	int number2 = count_if(vec.begin(), vec.end(), mycheck);
	cout << "Number of string that size equal 3 : " << number2 << endl;
	cout << endl;

	cout << std::boolalpha << endl;
	run(lambda);
	run(check);
	run(mycheck);
	cout << endl;

	function<int(int, int)> add = [](int one, int two) {return one + two; };
	cout << add(1, 2) << endl;
	return 1;
}
