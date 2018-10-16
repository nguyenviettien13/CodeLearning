#include "FindK.h"
#include <iostream>


FindK::FindK()
{
}


FindK::~FindK()
{
}


int FindK::findK(int n)
{
	int k = 0;
	int sum = 0;
	while (sum < n)
	{
		k++;
		sum += k;
	}
	return k - 1;
}


int main()
{
	int n = 4;
	std::cout << FindK::findK(n) << std::endl;
	return 1;
}