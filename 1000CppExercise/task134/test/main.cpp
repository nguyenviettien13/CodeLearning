#include "A.h"
#include <iostream>
#include <vector>


using namespace std;
A foo() {
	A a; // create a local A object
	return a;
}

void bar(const A & a_r) {

}

struct X
{
	X& ref() { return *this; }
};

X getx() { return X(); }

void g(X & x) {}

void g1(const X & x) {}


int f()
{
	const X& x = getx(); // OK
	//X& x = getx(); // error
	X& x1 = getx().ref(); // OK
	//g(getx()); //error
	g1(getx()); //error
	g(getx().ref()); //OK
	return 0;
}


const vector<string> explode(const string& s, const char& c)
{
	string buff{ "" };
	string a = "";
	vector<string> v;
	int size = buff.length();
	size = a.length();
	for (auto n : s)
	{
		if (n != c) buff += n; else
			if (n == c && buff != "") { v.push_back(buff); buff = ""; }

		int size = buff.length();
	}
	if (buff != "") v.push_back(buff);

	return v;
}

int main()
{
	bar(foo());

	int a[] = { 1, 2, 3 };
	int* p = a;
	std::cout << p << std::endl;
	std::cout << a + 1 << std::endl;
	std::cout << p + 1 << std::endl;
	std::cout << sizeof(a) << std::endl;
	std::cout << a << std::endl;
	std::cout << a + 1 << std::endl;

	string b = "hi everyone, finally";
	char delimeter = ' ';
	std::vector<string > c =explode(b,delimeter);

	string s1("xin chào");
	string s2{ "xin chào" };
	if (s1.compare(s2) == 0)
	{
		std::cout << "2 string is equal " << std::endl;
	}
	else
	{
		std::cout << "2 string is not equal " << std::endl;
	}
	return 1;
}
