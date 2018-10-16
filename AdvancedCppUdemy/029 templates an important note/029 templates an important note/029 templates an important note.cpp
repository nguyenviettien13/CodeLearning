#include<iostream>
#include <string>
using namespace std;
//Template class
template<class T, class K>
class Test 
{
private:
	T obj;
public:
	Test(T obj)
	{
		this->obj = obj;
	}
	void print()
	{
		cout <<"Template for class: " << obj << endl;
	}
};

//Template function
template <class T>
void print(T obj)
{
	cout << "Template function: " << obj << endl;
}

void print(int number)
{
	cout << "Non-template: " << number << endl;
}
int main()
{
	Test<string, int> test1("Hello");
	test1.print();
	print<string>("Hello World");
	print("Hello world without <string>");
	print<int>(5);
	print<>(5);
	print(5);
	return 1;
}