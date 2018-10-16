#include "Arrangement.h"
#include <iostream>
#include <vector>

Arrangement::Arrangement()
{
}


Arrangement::~Arrangement()
{
}

void Arrangement::bai255_bubble(int * arr, int size)
{

	//sap xep nổi bọt
	for (int i = size - 1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void Arrangement::bai255_mergesort(int * arr, int size)
{
	if (size > 1)
	{
		//tach lam 2 mang
		int size1 = size / 2;
		int size2 = size - size1;

		int* arr1 = new int[size1];
		int* arr2 = new int[size2];

		memcpy(arr1, arr, size1 * sizeof(int));
		memcpy(arr2, arr + size1, size2 * sizeof(int));
		bai255_mergesort(arr1, size1);
		bai255_mergesort(arr2, size2);


		//merge 2 mang
		int i = 0; //chỉ số trên mảng 1
		int j = 0; //chỉ sô trên mảng 
		int k = 0;
		while (i < size1 && j < size2)
		{
			if (arr1[i] <= arr2[j])
			{
				arr[k] = arr1[i];
				k++;
				i++;
			}
			else
			{
				arr[k] = arr2[j];
				j++;
				k++;
			}
		}
		for (; j < size2; j++)
		{
			arr[k] = arr2[j];
			k++;
		}

		for (; i < size1; i++)
		{
			arr[k] = arr1[i];
			k++;
		}
	}
	else
	{
		//do nothing
	}
}

void Arrangement::bai255_quicksort(int * arr, int l, int r)
{
	if (l < r)
	{
		int pivot = arr[r];
		int thuTuPhanTuNhoHon = l-1;
		for (int i = l; i <= r; i++)
		{
			if (arr[i] <= pivot)
			{
				thuTuPhanTuNhoHon++;
				int temp = arr[i];
				arr[i] = arr[thuTuPhanTuNhoHon];
				arr[thuTuPhanTuNhoHon] = temp;
			}
		}
		bai255_quicksort(arr, l, thuTuPhanTuNhoHon - 1);
		bai255_quicksort(arr, thuTuPhanTuNhoHon + 1, r);
	}
}

void Arrangement::bai255_quicksort_v2(int * arr, int l, int r)
{
	if (l < r)
	{
		//partion
		int indexPivot = r;
		for (int i = l; i < indexPivot; i++)
		{
			if (arr[indexPivot] < arr[i])
			{
				int giatripivot = arr[indexPivot];
				int giatriphantungaytruocpivot = arr[indexPivot - 1];
				int giaTriTaii = arr[i];
				arr[indexPivot] = giaTriTaii;
				arr[indexPivot - 1] = giatripivot;
				arr[i] = giatriphantungaytruocpivot;
				i--;
			}
		}
		// sap xep voi tung phan
		bai255_quicksort_v2(arr, l, indexPivot - 1);
		bai255_quicksort_v2(arr, indexPivot + 1, r);
	}
}

void Arrangement::bai256_bubble(int * arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j] > arr[j - 1])
			{
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}
}

void Arrangement::bai257(int * arr, int size)
{
	std::vector<int> mangchisoduong;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			mangchisoduong.push_back(i);
		}
	}
	size = mangchisoduong.size();


	//buble sort
	for (int i = size -1; i >0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[mangchisoduong[j]] > arr[mangchisoduong[j + 1]])
			{
				int temp = arr[mangchisoduong[j]];
				arr[mangchisoduong[j]] = arr[mangchisoduong[j + 1]];
				arr[mangchisoduong[j + 1]] = temp;
			}
		}
	}
}

void Arrangement::bai258(int * arr, int size)
{
	std::vector<int> mangChiSoNguyenTo;
	for (int i = 0; i < size; i++)
	{
		if (soNguyenTo(arr[i]) > 0)
		{
			mangChiSoNguyenTo.push_back(i);
		}
	}
	size = mangChiSoNguyenTo.size();


	//buble sort
	for (int i = size - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[mangChiSoNguyenTo[j]] > arr[mangChiSoNguyenTo[j + 1]])
			{
				int temp = arr[mangChiSoNguyenTo[j]];
arr[mangChiSoNguyenTo[j]] = arr[mangChiSoNguyenTo[j + 1]];
arr[mangChiSoNguyenTo[j + 1]] = temp;
			}
		}
	}
}

bool Arrangement::soNguyenTo(int N)
{
	if (N < 2) return false;
	for (int i = 2; i < sqrt(N); i++)
	{
		if (N%i == 0) return false;
	}
	return true;
}

void Arrangement::bai259(int * arr, int size)
{
	std::vector<int> mangChiSoCacSoHoanHao;
	for (int i = 0; i < size; i++)
	{
		if (soHoanHao(arr[i]))
		{
			mangChiSoCacSoHoanHao.push_back(i);
		}
	}
	size = mangChiSoCacSoHoanHao.size();


	//buble sort
	for (int i = size - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[mangChiSoCacSoHoanHao[j]] < arr[mangChiSoCacSoHoanHao[j + 1]])
			{
				int temp = arr[mangChiSoCacSoHoanHao[j]];
				arr[mangChiSoCacSoHoanHao[j]] = arr[mangChiSoCacSoHoanHao[j + 1]];
				arr[mangChiSoCacSoHoanHao[j + 1]] = temp;
			}
		}
	}
}

bool Arrangement::soHoanHao(int N)
{
	if (N <= 0) return false;
	int tongCacUoc = 0;
	int i = 1;
	do
	{
		if (N % i == 0)
		{
			tongCacUoc += i;
		}
		i++;
	} while (i <= N / 2);
	return tongCacUoc == N;
}

void Arrangement::bai262(int * arr, int size)
{
	//Tư tưởng của bài này là sắp xếp theo không đổi vị trí đối với các phần tử chẵn
	//Tư tưởng của bài này là sắp xếp theo không đổi vị trí đối với các phần tử lẻ
}

void Arrangement::bai265(int * arr1, int size1, int * arr2, int size2)
{
	std::cout << "bat dau bai256: " << std::endl;
	int * arr = new int[size1 + size2];
	int i = size1 - 1;
	int j = size2 - 1;
	int k = 0;
	while (i >= 0 && j >= 0)
	{
		if (arr1[i] >= arr2[j])
		{
			arr[k] = arr1[i];
			k++;
			i--;
		}
		else
		{
			arr[k] = arr2[j];
			k++;
			j--;
		}
	}
	for (; i >= 0; i--)
	{
		arr[k] = arr1[i];
		k++;
	}

	for (; j >= 0; j--)
	{
		arr[k] = arr[j];
		k++;
	}
	for (int i = 0; i < size1 + size2; i++)
	{
		std::cout << arr[i] << std::endl;
	}

	std::cout << "Ket thuc bai256: " << std::endl;
}


int main()
{
	int arr[] = { 1, 3, 2, 5, 2, 9, 3, 2 };
	Arrangement().bai255_bubble(arr, 8);

	int arr1[] = { 1, 3, 2, 5, 2, 9, 3, 2 };
	Arrangement().bai255_mergesort(arr1, 8);

	int arr2[] = { 1, 3, 2, 5, 2, 9, 3, 2 };
	Arrangement().bai255_quicksort(arr2, 0, 7);

	int arr3[] = { 1, 3, 2, 5, 2, 9, 3, 2 };
	Arrangement().bai255_quicksort_v2(arr3, 0, 7);
	int arr4[] = { 1, 3, 2, 5, 2, 9, 3, 2 };
	Arrangement().bai256_bubble(arr4, 8);

	int arr5[] = { -1, 3, -2, 5, 2, -9, 3, -2 };
	Arrangement().bai257(arr5, 8);

	int arr6[] = { -1, 3, 7, 5, 2, 9, 11, -2 };
	Arrangement().bai258(arr6, 8);

	int arr7[] = { 8128, 28, 7, 5, 2, 6, 496, -2 };
	Arrangement().bai259(arr7, 8);


	int arr8[] = { 1, 2, 3, 4, 9 };
	int arr9[] = { 3, 4, 7, 9, 19, 21};
	Arrangement().bai265(arr8, 5, arr9, 6);

	return 1;
}