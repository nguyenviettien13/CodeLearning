#include <iostream>
#include <stdarg.h>
#include <iostream>


void Print(int n, ...)
{
	va_list listarg;
	va_list listargcp;
	va_start(listarg, n);
	va_copy(listargcp, listarg);
	double x;
	for (auto i = 0; i < n; i++)
	{
		x = va_arg(listarg, double);
		std::cout << x << std::endl;
	}

	for (auto i = 0; i < n; i++)
	{
		x = va_arg(listargcp, double);
		std::cout << x/2 << std::endl;
	}
	va_end(listarg);
	va_end(listargcp);
}

int main()
{
	Print(4, 1.2, 3.4, 4.3, 5.7);
	return 1;
}