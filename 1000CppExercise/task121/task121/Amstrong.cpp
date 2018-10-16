#include "Amstrong.h"
#include <vector>
#include <iostream>
#include <math.h>


Amstrong::Amstrong()
{
}


Amstrong::~Amstrong()
{
}

void Amstrong::showArmstrongNumber(int N)
{
	for (int i = 1; i <= N; i++)
	{
		if (isArmNum(i))
		{
			std::cout << i << std::endl;
		}
	}
}

bool Amstrong::isArmNum(int n)
{
	std::vector<int> digitList;
	int n1 = n;
	while (n1 != 0)
	{
		digitList.push_back(n1 % 10);
		n1 /= 10;
	}
	int k = digitList.size();
	int a;
	for (std::vector<int>::iterator it = digitList.begin(); it != digitList.end(); it++)
	{
		a = *it;
		n -= pow(a, k);
	}
	return (n == 0);
}

int main()
{
	Amstrong p;
	p.showArmstrongNumber(1000);
	return 1;
}