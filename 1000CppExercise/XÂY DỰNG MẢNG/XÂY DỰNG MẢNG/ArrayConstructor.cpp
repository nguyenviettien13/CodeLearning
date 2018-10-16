#include "ArrayConstructor.h"
#include<iostream>


ArrayConstructor::ArrayConstructor()
{
}


ArrayConstructor::~ArrayConstructor()
{
}

std::vector<int>& ArrayConstructor::bai307(const int const * arr, int size)
{
	std::vector<int>* oddArr = new std::vector<int>();
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0)
		{
			oddArr->push_back(arr[i]);
		}
	}
	return *oddArr;
}

std::vector<int>& ArrayConstructor::bai308(const int const * arr, int size)
{
	std::vector<int>* negativeArr = new std::vector<int>();
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			negativeArr->push_back(arr[i]);
		}
	}

	return *negativeArr;
}

int * ArrayConstructor::bai309(const int const * arr, int size)
{
	int * arrr = new int[size];
	for (int i = 0; i < size; i++)
	{
		if (i == 0)
		{
			arrr[i] = arr[i] + arr[i + 1];
		}
		else if(i == size-1)
		{
			arrr[i] = arr[i] + arr[i - 1];
		}
		else
		{
			arrr[i] = arr[i - 1] + arr[i] + arr[i + 1];
		}
		
	}
	return arrr;
}

std::vector<int>& ArrayConstructor::bai310(const int const * arr, int size)
{
	std::vector<int>* MangSoNguyenTo= new std::vector<int>();
	for (int i = 0; i < size; i++)
	{
		if (soNguyenTo(arr[i]))
		{
			MangSoNguyenTo->push_back(arr[i]);
		}
	}
	return *MangSoNguyenTo;
}

bool ArrayConstructor::soNguyenTo(int N)
{
	if (N < 2) return false;
	for (int i = 2; i <= sqrt(N); i++)
	{
		if (N%i == 0) return false;
	}
	return true;
}


int main()
{
	/*******************************************************
	Bai 307:
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	std::vector<int> oddArr = ArrayConstructor().bai307(arr, 12);
	for (int i = 0; i < oddArr.size(); i++)
	{
	std::cout << oddArr[i] << std::endl;
	}
	********************************************************/


	/*******************************************************
	Bai 308:
	int arr[] = { 1, 2, -3, 4, -5, 6, 7, -8, -9, -10, 11 };
	std::vector<int> mangAm = ArrayConstructor().bai308(arr, 11);
	for (int i = 0; i < mangAm.size(); i++)
	{
	std::cout << mangAm[i] << std::endl;
	}
	********************************************************/
	
	/*******************************************************
	Bai 309:
	int arr[] = { 1, 2, -3, 4, -5, 6, 7, -8, -9, -10, 11 };
	int* arr1 = ArrayConstructor().bai309(arr, 11);
	for (int i = 0; i < 11; i++)
	{
	std::cout << arr1[i] << std::endl;
	}
	********************************************************/
	
	/*******************************************************
	Bai 310
	int arr[] = { 1, 2, -3, 41, 53, 6, 71, -8, 97, -10, 11 };
	std::vector<int> mangsoNguyenTo = ArrayConstructor().bai310(arr, 11);
	for (int i = 0; i < mangsoNguyenTo.size(); i++)
	{
	std::cout << mangsoNguyenTo[i] << std::endl;
	};
	********************************************************/
	
	
	return 1;
} 