#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

class Test
{
private:
	static const int SIZE = 100;
	int* bBuffer;
public:
	Test()
	{
		cout << "constructor " << endl;
		bBuffer = new int[SIZE];
	}
	~Test()
	{
		if (bBuffer != nullptr)
		{
			delete[] bBuffer;

		}
	}

	//copy constructor
	Test(const Test & other)
	{
		cout << "copy constructor" << endl;
	}

	
	//assignment operator
	Test& operator = (const Test & other)
	{
		cout << "Assignment Operator" << endl;
		this->bBuffer = new int[SIZE];
		memcpy(this->bBuffer, other.bBuffer, SIZE * sizeof(int));
		return *this;
	}

	//move constructor
	Test(Test && other)
	{
		cout << "move constructor" << endl;
		bBuffer = other.bBuffer;
		other.bBuffer = nullptr;
	}

	//assignment operator
	Test& operator = (Test && other)
	{
		cout << "move assignment operator" << endl;
		delete this->bBuffer;
		bBuffer = other.bBuffer;
		other.bBuffer = nullptr;
		return *this;
	}
	
};
Test getTest()
{
	return Test();
}
int main()
{
	//constructor
	Test test; 
	//copy constructor
	Test test2 = test;
	Test test3(test);
	//move constructor
	vector<Test> vec;
	vec.push_back(Test());
	cout << endl;
	Test test4(std::move(getTest()));
	//move assignment operator
	Test test5;
	test5 = getTest();

	return 1;
}