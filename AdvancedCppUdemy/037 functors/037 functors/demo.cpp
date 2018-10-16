#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//Functor
struct add_x
{
	int x;
	add_x(int y) :x(y) {}
	int operator()(int y)
	{
		return x + y;
	}
};
//Function
int (func)(int x)
{
	return ++x;
}

int main()
{
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(6);
	//fill vec with 1 2 3 4 5
	int(*f)(int) = func;//Function pointer
	transform(vec.begin(), vec.end(), vec.begin(), f);
	transform(vec.begin(), vec.end(), vec.begin(), add_x(5));
	return 1;
}