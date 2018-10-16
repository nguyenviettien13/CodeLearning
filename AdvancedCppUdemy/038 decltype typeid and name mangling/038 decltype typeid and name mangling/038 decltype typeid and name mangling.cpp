#include <iostream>
#include <typeinfo>
#include <string>
#include <vector>

using namespace std;


class A {
public:
	A()
	{
		cout << "Create A object" << endl;
	}
	vector<int> a;
};

int main()
{
	int i = 1;
	cout << typeid(i).raw_name() << endl;
	return 1;
}