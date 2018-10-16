#include "FindAllOddLessThan.h"
#include <iostream>


FindAllOddLessThan::FindAllOddLessThan()
{
}


FindAllOddLessThan::~FindAllOddLessThan()
{
}

void FindAllOddLessThan::showAllOddLessThan(int n)
{
	for (int i = 1; i <= n; i += 2)
	{
		std::cout << i << std::endl;
	}
}
int main()
{
	FindAllOddLessThan::showAllOddLessThan(1000);
	return 1;
}
