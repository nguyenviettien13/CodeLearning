#include "BangCuuChuong.h"
#include <iostream>

#define COLPERLINE	5

BangCuuChuong::BangCuuChuong()
{
}


BangCuuChuong::~BangCuuChuong()
{
}

void BangCuuChuong::show()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			for (int k = i; k < (i + COLPERLINE) &&(k <= 9); k++)
			{
				std::cout << k << " * " << j << " = " << i * j << "\t";
			}
			std::cout << std::endl;
		}
		i = i + COLPERLINE - 1;
		if (i %COLPERLINE == 0)
		{
			std::cout << std::endl << std::endl << std::endl;
			std::cout << std::endl << std::endl << std::endl;
		}
	}
}

int main()
{
	BangCuuChuong::show();
	return 1;
}