#include "Prime.h"
#include <math.h>
#include "Dog.h"

Prime::Prime()
{
}


Prime::~Prime()
{
}

std::vector<int> Prime::showAllPrimeLess(int N)
{
	std::vector<int> primeList;
	bool* boolList = new bool[N + 1];
	for (int i = 2; i <= N; i++)
	{
		boolList[i] = true;
	}
	int cb2N = sqrt(N);
	for (int i = 2; i <= cb2N; i++)
	{
		for (int j = 2; j <= N / i; j++)
		{
			boolList[i*j] = false;
		}
	}
	for (int i = 2; i <= N; i++)
	{
		if (boolList[i]) primeList.push_back(i);
	}
	return primeList;
}

std::vector<Dog> myGetList()
{
	std::cout << "xin chao" << std::endl;
	std::vector<Dog> list;
	list.push_back(Dog());
	list.push_back(Dog());
	list.push_back(Dog());
	return list;
}
int main()
{
	Prime p;
	std::vector<int> primeList;
	primeList = p.showAllPrimeLess(100);
	for (std::vector<int>::iterator it = primeList.begin(); it != primeList.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	std::vector<Dog> list = myGetList();
	

	return 1;
}