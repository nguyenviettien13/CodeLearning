#include "Arrange3Number.h"
#include <iostream>


Arrange3Number::Arrange3Number()
{
}


Arrange3Number::~Arrange3Number()
{
}

void Arrange3Number::dock(int a, int b, int c)
{
	int min = (a < b ? a : b) < c ? (a < b ? a : b) : c;
	int max = ((a > b) ? a : b) > c?((a > b) ? a : b) : c;
	std::cout << min << "	"<<(a + b + c - min - max)<<"	" << max << std::endl;
}

int main()
{
	Arrange3Number::dock(2, 6, 3);
	return 1;
}
