#include "Adder.h"
#include <iostream>
#include <exception>
#include <limits>
#include <stdio.h>

Adder::Adder()
{
}


Adder::~Adder()
{
}

int * Adder::bai266(int * arr, int size,int N, int k)
{
	int* arr1 = new int[size + 1];
	for (int i = 0; i < size+1; i++)
	{
		if (i < k)
		{
			arr1[i] = arr[i];
		}
		else if (i==k)
		{
			arr1[i] = N;
		}
		else
		{
			arr1[i] = arr[i - 1];
		}
	}
	for (int i = 0; i < size + 1; i++)
	{
		std::cout << arr1[i] << std::endl;
	}
	return arr1;
		
}

void Adder::bai267(int * arr)
{
	int size = 100;
	int realsize = 0;
	char number[100];
	bool continueflag = true;

	while (continueflag)
	{
		try
		{
			std::cout << "Moi ban nhap vao phan tu tiep theo: " << std::endl;
			fflush(stdin);
			scanf_s("%s", number,100);
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			//std::cout << number << std::endl;
			continueflag = !(strcmp(number, "yes")==0);
			if (continueflag)
			{
				int numberint = atoi(number);
				if (realsize < size)
				{
					int i = realsize - 1;
					while (arr[i] > numberint & i > -1)
					{
						arr[i + 1] = arr[i];
						i--;
					}
					arr[i + 1] = numberint;
					realsize++;
				}
				else
				{
					int * temparr = new int[realsize * 2];
					for (int i = 0; i < realsize; i++)
					{
						temparr[i] = arr[i];
					}
					delete arr;
					arr = temparr;


					int i = realsize - 1;
					while (arr[i] > numberint & i > -1)
					{
						arr[i + 1] = arr[i];
						i--;
					}
					arr[i + 1] = numberint;
					realsize++;
				}
			}
			std::cout << "Mang sau khi sap xep la: " << std::endl;
			for (int i = 0; i < realsize; i++)
			{
				std::cout << arr[i] << " ";
			}
			std::cout << std::endl;
		}
		catch (std::out_of_range e)
		{
			continueflag = false;
		}
	}

}

int* Adder::bai268(const int const * arr, int size)
{
	int * arr1 = new int[size];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr1[i] = 0;
		}
		else
		{
			arr1[i] = 1;
		}
	}
	return arr1;
}

int *& Adder::bai269(int *&arr, int size)
{
	int * temparr = new int[size + 1];
	//minh se thêm phần tử lớn nhất vào sau phần tử cuối cùng
	for (int i = 0; i < size; i++)
	{
		temparr[i] = arr[i];
	}
	temparr[size] = temparr[size-1] + 1;
	delete arr;
	arr = temparr;
	return arr;
}

int * Adder::bai270()
{
	int size = 100;
	int realsize = 0;
	int index = -1;
	char number[100];
	bool continueflag = true;

	int *arr = new int[size];

	std::cout << " Ban hay nhap lan luot cac phan tu cua mang, khi ban muon ket thuc hay nhan \"ketthuc\"" << std::endl;
	do 
	{
		if (realsize == size)
		{
			//tang kich thuoc mang chua va copy vao mang moi
			int * temparr = new int[size * 2];
			size *= 2;
			for (int i = 0; i < realsize; i++)
			{
				temparr[i] = arr[i];
			}
			delete[] arr;
			arr = temparr;
		}

		std::cout << "Nhap: ";
		std::fflush(stdin);
		scanf_s("%s", number, 100);
		
		std::string numberstring(number);
		continueflag = !(numberstring.compare("ketthuc") == 0);
		if (continueflag)
		{
			int numberint = atoi(number);
			index++;
			arr[index] = numberint;
			realsize++;
		}
	} while (continueflag);
	quickSort(arr, 0, realsize - 1);
	for (int i = 0; i < realsize; i++)
	{
		std::cout << arr[i] << std::endl;
	}
	return arr;
}

void Adder::swap(int * a, int * b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int Adder::partition(int arr[], int low, int high)
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

void Adder::quickSort(int arr[], int low, int high)
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



int main()
{
	/*******************************************
	int arr[] = { 1, 4, 2, 4, 18, 23};
	Adder().bai266(arr, 6, 1000, 2);
	********************************************/

	
	/*****************************************
	//Bai 267
	int * arr1 = new int[100];
	Adder().bai267(arr1);

	*****************************************/


	/****************************************
	//Bai 268
	int arr[] = { 1, 2, 7, 3, 2, 10, 3 };
	int * mangchanle = Adder().bai268(arr, 7);
	for (int i = 0; i < 7; i++)
	{
	std::cout << mangchanle[i] << std::endl;
	}
	****************************************/
	
	 /******************************************
	 Bai 269:
	 int * arr = new int[4];
	 arr[0] = 0;
	 arr[1] = 2;
	 arr[2] = 4;
	 arr[3] = 22;
	 Adder().bai269(arr, 4);
	 for (int i = 0; i < 4; i++)
	 {
	 std::cout << arr[i] << std::endl;
	 }
	 ******************************************/

	//Bai 270
	Adder().bai270();
	return 1;
}