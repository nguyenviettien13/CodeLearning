#include "Show.h"
#include <iostream>


Show::Show()
{
}


Show::~Show()
{
}

void Show::show94(int n)
{
	for (int i = 1; i <= n ; i += 2)
	{
		if (i != 5 && i != 7 && i != 93)
		{
			std::cout << i << std::endl;
		}
	}
}
int main()
{
	Show::show94(100);
	return 1;
}
