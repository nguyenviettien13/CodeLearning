#include "ChangeMoney.h"
#include <stdarg.h>
#include <iostream>

ChangeMoney::ChangeMoney(int sum,int n,  ...  )
{
	this->total = sum;
	va_list val;
	va_start(val, n);
	for (int i = 0; i < n; i++)
	{
		this->list.push_back(va_arg(val, int));
	}
	for (std::vector<int>::iterator it = list.begin(); it != list.end(); it++)
	{
		std::cout << *it << std::endl;
	}
}


ChangeMoney::~ChangeMoney()
{
}

void ChangeMoney::showSolution()
{
	for (int x = 0; x <= total / list[0]; x++)
	{
		int cursum1 = total - list[0] * x;
		for (int y = 0; y <= cursum1 / list[1]; y++)
		{
			int cursum2 = cursum1 - y * list[1];
			int z = cursum2 / list[2];
			if (cursum2 - z * list[2] == 0)
				std::cout << x << "\t" << y << "\t" << z << std::endl;
		}
	}
}


int main()
{
	ChangeMoney e(10, 3, 1, 2, 5);
	e.showSolution();
	return 1;
}