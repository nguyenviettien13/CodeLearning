#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>
using namespace std;

class Test
{
public:
	Test(initializer_list<string> texts)
	{
		for (auto text : texts)
		{
			cout << text << endl;
		}
	};
	void print(initializer_list<string> strings)
	{
		for (string s : strings)
		{
			cout << s << endl;
		}
		cout << endl;
	}
	~Test() {};
};

int main()
{
	vector<int> numbers{ 1,2,3,4 };

	Test texts{ "Nguyen", "Thuy", "Duong" };
	texts.print({ "Xin", "chào", "co", "chu" });
	return 1;
}