#include "FindN.h"
#include <iostream>


FindN::FindN()
{
}


FindN::~FindN()
{
}

int FindN::findN(int sum)
{
	int curSum = 0;
	int i = 0;
	while (curSum <= sum)
	{
		i++;
		curSum += i;
	}
	return i;
}

int main()
{
	int n = 6;
	std::cout << FindN::findN(n) << std::endl;
	return 1;
}