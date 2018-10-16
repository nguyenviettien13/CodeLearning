#include "CanGoWrong.h"
#include <iostream>
#include <limits>


CanGoWrong::CanGoWrong()
{
	char* pMemory = new char[std::numeric_limits<int>::max()];
	delete[] pMemory;
}


CanGoWrong::~CanGoWrong()
{
}

int main()
{
	try
	{
		CanGoWrong wrong;
	}
	catch (std::bad_alloc e)
	{
		std::cout << "Catch exception: " << e.what() << std::endl;
	}
	return 0;
}