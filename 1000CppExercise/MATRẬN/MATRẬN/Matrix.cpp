#include "Matrix.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>

Matrix::Matrix()
{
}


Matrix::~Matrix()
{
}

void Matrix::bai311(int ** arr, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << "arr" << "[" << i << "]" << "[" << j << "]" << "= "; 
			std::cin >> arr[i][j];
			std::cout << std::endl;
		}
	}
}

int main()
{
	int m = 10;
	int n = 5;
	int **arr = new int*[m];
	for (int i = 0; i < m; i++)
	{
		arr[i] = new int[n];
	}
	Matrix().bai311(arr, m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << std::setw(5)<< arr[i][j] << "  ";
		}
		std::cout << std::endl;
	}
	return 1;
}