#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Test
{
public:
	Test()
	{
		cout << "constructor" << endl;
	}
	Test(int i)
	{
		cout << "constructor with para" << endl;
	}

	Test(const Test& other)
	{
		cout << "copy constructor" << endl;
	}

	Test& operator= (const Test& other )
	{
		cout << "assignment" << endl;
		return *this;
	}

	~Test() 
	{
		cout << "destructor" << endl;
	}

	friend ostream& operator << (ostream &out, Test & test)
	{
		cout << "assignment" << endl;
		return out;
	}
};


Test getTest()
{
	return Test();
}
int main()
{
	Test test = getTest();
	vector<Test> testvec(10);
	testvec[0] = Test();
	testvec.push_back(Test());

	return 1;
}