#include <iostream>
#include <string>
using namespace std;

struct Test
{
	virtual bool operator()(string &text) = 0;
	virtual ~Test() {};
};


struct MatchTest: public Test
{
	virtual bool operator()(string &text)
	{
		return text == "lion";
	}
};


void check(string text, Test& test)
{
	if (test(text))
	{
		cout << "Text match \"lion\"";
	}
	else
	{
		cout << "Text do not match \"lion\"";
	}
}


void truyenthamso(const string& text)
{
	cout << text << endl;
}

//int main()
//{
//	MatchTest m;
//	check("lion", m);
//	string text("xin chao moi nguoi!!!");
//	truyenthamso(text);
//	truyenthamso("hello");
//	return 1;
//}