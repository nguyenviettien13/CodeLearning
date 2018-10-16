#include <iostream>
#include <memory>

using namespace std;

class Test
{
public:
	Test()
	{
		cout << "Constructor" << endl;
	};
	~Test()
	{
		cout << "Destructor" << endl;
	};
	void greet()
	{
		cout << "Hello" << endl;
	}
private:

};

class Temp
{
	unique_ptr<Test[]> uqpointer;
public:
	Temp():
		uqpointer((new Test[2]))
	{

	}

};


int main()
{
	{
		unique_ptr<Test> up(new Test);
	}
	cout << "Finished" << endl;
	cout << endl;

	{
		unique_ptr<Test[]> uqpointer(new Test[2]);
	}
	cout << "Finished" << endl;
	cout << endl;
	Temp temp;
	cout << "Finished" << endl;
	return 1;
}
