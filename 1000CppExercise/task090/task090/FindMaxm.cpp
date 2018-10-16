#include "FindMaxm.h"
#include <iostream>


FindMaxm::FindMaxm()
{
}


FindMaxm::~FindMaxm()
{
}

int FindMaxm::findM(int sum)
{
	int curSum = 0;
	int curNumber = 0;
	while (curSum <= sum)
	{
		curNumber++;
		curSum += curNumber;
	}
	return (curNumber-1);
}

int main()
{
	std::cout << FindMaxm::findM(1000) << std::endl;
	return 1;
}