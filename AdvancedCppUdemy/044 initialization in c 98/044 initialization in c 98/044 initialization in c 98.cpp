#include <iostream>
#include <string>


using namespace std;

int main()
{
	int value[] = { 1, 2, 3, 4 };
	//cout << &value << endl;
	//cout << &value[0] << endl;
	cout << value[0] << endl;
	cout << endl;
	class class1 {
	public:
		string text;
		int id;
	};

	class1 s = { "Hello", 7 };
	cout << s.text << endl;
	cout << endl;

	struct struct1 {
		string text;
		int id;
	};
	struct1 s1 = { "Hello s1", 7 };
	cout << s1.text << endl;
	cout << endl;

	struct struct2 {
		string text;
		int id;
	} s2;
	s2 = { "Hello s1", 7 };
	cout << s2.text << endl;
	cout << endl;


	//045 initialization in c 11
	
	int myvalue{ 5 };
	cout << myvalue << endl;
	cout << endl;

	string text{ "Hello" };
	cout << text << endl;
	cout << endl;

	int* pInts = new int[3]{ 1, 2, 3 };
	cout << pInts[0] << endl;
	cout << endl;

	int * pSomething{}; //equivalent to int * pSomething = nullptr;
	cout << pSomething << endl;
	pSomething = NULL;
	int k = 0;
	struct {
		string text;
		int id;
	}s21{"hello21", 22};

	cout << s21.text << endl;

	return 1;
}