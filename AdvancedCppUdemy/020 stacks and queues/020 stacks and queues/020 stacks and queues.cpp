#include <iostream>
#include <set>
#include <stack>
#include <queue>
#include <string>
#include "TestClass.h"

using namespace std;

int main()
{
	stack<TestClass> testStack;
	testStack.push(TestClass("Nguyen"));
	testStack.push(TestClass("Thuy"));
	testStack.push(TestClass("Duong"));
	cout << endl;

	/*
	Wrong code
	TestClass &test1 = testStack.top();
	testStack.pop();
	test1.print();//this is invalid code. The object was destroyed
	*/

	while (testStack.size() > 0)
	{
		testStack.top().print();
		testStack.pop();
	}



	queue<int> testQueue;
	testQueue.push(1);
	testQueue.push(2);
	testQueue.push(6);
	testQueue.push(3);
	testQueue.push(3);
	while (testQueue.size() > 0)
	{
		cout << testQueue.front() << endl;
		testQueue.pop();
	}
	return 1;
}