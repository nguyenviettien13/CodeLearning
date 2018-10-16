#include "Remover.h"
#include <limits>
#include <iostream>
#include <exception>
Remover::Remover()
{
}


Remover::~Remover()
{
}

int * Remover::bai271(int*& arr, int &size, int K)
{
	for (int i = K; i < size; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[size - 1] = std::numeric_limits<int>::min();
	size = size - 1;
	/*for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << "  ";
	}
	std::cout << std::endl;*/
	return arr;
}

int * Remover::bai272(int*& arr, int & size)
{
	//tim chi so cua phan tu lon nhat
	int index = 0;
	int giatrimax = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > giatrimax)
		{
			index = i;
			giatrimax = arr[i];
		}
	}
	//goi ham bai 271 de xoa phan tu tai chi so lon nhat 
	Remover().bai271(arr, size, index);
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << "  ";
	}
	return arr;
}

int * Remover::bai273(int * arr, int size)
{
	//Ý tưởng của mình là đẩy tất cả các phần tử âm ra cuối mảng
	//Chỉ số i dùng để chỉ phần tử đang xét
	//Chỉ số j dùng để chi phần tử cuối  cùng chưa biết có phải âm hay không
	int j = size - 1;
	for (int i = 0; i <= j; i++)
	{
		if (arr[i] < 0)
		{
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i--;
			j--;
			size--;
		}
	}
	std::cout << "Mang sau khi xóa các phần tử âm là: " << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << "  ";
	}
	return arr;
}

int *& Remover::bai274(int *& arr, int& size)
{
	// Ý tưởng: Đẩy tất cả các phần tử chẵn xuống dưới cùng mảng.
	int j = size - 1;//la phần tử cuối cùng chưa được xét
	
	for (int i = 0; i <= j; i++)
	{
		if (arr[i] % 2 == 0)
		{
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			j--;
			i--;
			size--;
		}
	}

	return arr;
}

int *& Remover::bai274_v2(int *& arr, int & size)
{
	int j = 0;//vi tri co the xep phan tu le vao
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0)
		{
			arr[j] = arr[i];
			j++;
		}
		else
		{
			//do nothing
		}
	}
	size = j;
	return arr;
}

int *& Remover::bai275(int *& arr, int & size)
{
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		if (soChinhPhuong(arr[i]))
		{
			//do nothing
		}
		else
		{
			arr[j] = arr[i];
			j++;
		}
	}
	size = j;
	return arr;
}

bool Remover::soChinhPhuong(int N)
{
	int sqrtN = sqrt(N);
	return N == sqrtN*sqrtN;
}

int *& Remover::bai278(int *& arr, int & size, int X)
{
	int j = 0; 
	for (int i = 0; i < size; i++)
	{
		if (trungX(arr[i], X))
		{
			//do nothing
		}
		else
		{
			arr[j] = arr[i];
			j++;
		}
	}
	size = j;
	return arr;
}

bool Remover::trungX(int a, int X)
{
	return a == X;
}

int *& Remover::bai279(int *& arr, int & size)
{
	//Lam the nao de biet duoc phan tu xuat hien duy nhat mot lan
	quickSort(arr, 0, size - 1);
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		if (!xuatHienNhieuLan(arr, i))
		{
			arr[j] = arr[i];
			j++;
		}
		else
		{
			while (arr[i]== arr[i+1])
			{
				i++;
			}
		}
	}
	size = j;
	return arr;
}

void Remover::swap(int * a, int * b)
{
	int t = *a;
	*a = *b;
	*b = t;
}


int Remover::partition(int arr[], int low, int high)
{
	int pivot = arr[high];    // pivot
	int i = (low - 1);  // Index of smaller element

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than or
		// equal to pivot
		if (arr[j] <= pivot)
		{
			i++;    // increment index of smaller element
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void Remover::quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
		at right place */
		int pi = partition(arr, low, high);

		// Separately sort elements before
		// partition and after partition
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

bool Remover::xuatHienNhieuLan(int * arr, int index)
{
	try
	{
		return arr[index] == arr[index + 1];
	}
	catch (std::exception e)
	{
		
	}
	return false;
}





int main()
{
	
	/**************************************************
	int sizeofarr = 10;
	int* arr = new int [10];

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	arr[5] = 6;
	arr[6] = 7;
	arr[7] = 8;
	arr[8] = 9;
	arr[9] = 10;
	Remover().bai271(arr, sizeofarr,5);
	**************************************************/


	/************************************************
	int sizeofarr = 10;
	int* arr = new int[10];

	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 10;
	arr[4] = 4;
	arr[5] = 5;
	arr[6] = 6;
	arr[7] = 7;
	arr[8] = 8;
	arr[9] = 9;
	Remover().bai272(arr, sizeofarr);
	*************************************************/


	/***********************************************
	//Bai 273: 
	int sizeofarr = 10;
	int* arr = new int[10];

	arr[0] = -1;
	arr[1] = 1;
	arr[2] = -2;
	arr[3] = -10;
	arr[4] = -4;
	arr[5] = -5;
	arr[6] = 6;
	arr[7] = -7;
	arr[8] = -8;
	arr[9] = -9;
	Remover().bai273(arr, sizeofarr);
	***********************************************/
	


	/*********************************************
	Bai 274:
	int sizeofarr = 10;
	int* arr = new int[10];

	arr[0] = -1;
	arr[1] = 1;
	arr[2] = -2;
	arr[3] = -10;
	arr[4] = -4;
	arr[5] = -5;
	arr[6] = 6;
	arr[7] = -7;
	arr[8] = -8;
	arr[9] = -9;
	Remover().bai274(arr, sizeofarr);
	for (int i = 0; i < sizeofarr; i++)
	{
	std::cout << arr[i] << " ";
	}
	**********************************************/
	
	/*************************************
	int sizeofarr = 10;
	int* arr = new int[10];

	arr[0] = -1;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 10;
	arr[4] = 4;
	arr[5] = 5;
	arr[6] = 6;
	arr[7] = -7;
	arr[8] = 8;
	arr[9] = 9;
	Remover().bai275(arr, sizeofarr);
	for (int i = 0; i < sizeofarr; i++)
	{
	std::cout << arr[i] << " ";
	}
	**************************************/

	/************************************
	int sizeofarr = 10;
	int* arr = new int[10];
	arr[0] = -1;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 10;
	arr[4] = 4;
	arr[5] = 5;
	arr[6] = 6;
	arr[7] = 10;
	arr[8] = 8;
	arr[9] = 9;
	Remover().bai278(arr, sizeofarr, 10);
	for (int i = 0; i < sizeofarr; i++)
	{
	std::cout << arr[i] << " ";
	}
	************************************/
/***************************************
int sizeofarr = 10;
int* arr = new int[10];
arr[0] = -1;
arr[1] = 1;
arr[2] = 2;
arr[3] = 10;
arr[4] = 4;
arr[5] = 5;
arr[6] = 6;
arr[7] = 10;
arr[8] = 8;
arr[9] = 9;
Remover().bai279(arr, sizeofarr);
for (int i = 0; i < sizeofarr; i++)
{
std::cout << arr[i] << " ";
}
****************************************/
	return 1;
}