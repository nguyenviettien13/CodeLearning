#include "findIndex.h"
#include <limits>
#include <iostream>
#include <assert.h>


findIndex::findIndex()
{
}


findIndex::~findIndex()
{
}

int findIndex::findIndexMinNumber(const float * const arr, int size)
{
	float min = std::numeric_limits<float>::max();
	int index = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			index = i;
		}
	}
	return index;
}

bool findIndex::isExist(const float * const arr, int size, float N)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < N) return true;
	}
	return false;
}

int findIndex::countEleLesThan(const float * const arr, int size, float N)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < N) count++;
	}
	return count;
}

float findIndex::sumNegNumber(const float * const arr, int size)
{
	float sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0) sum += arr[i];
	}
	return sum;
}

float* const& findIndex::bubbleSort(float* const & arr, int size)
{
	for (int i = 0; i <= size-1; i++)
	{
		for (int j = i + 1; j <= size - 1; j++)
		{
			if (arr[i] > arr[j])
			{
				arr[i] = arr[i] + arr[j]; //5 + 10
				arr[j] = arr[i] - arr[j]; //5 + 10 - 10
				arr[i] = arr[i] - arr[j]; //5 + 10 - 5
			}
		}
	}
	return arr;
}

unsigned int * const & findIndex::bucketSort(unsigned int * const & arr, int size)
{
	float max = std::numeric_limits<unsigned int>::min();
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	unsigned int * tempArr = new unsigned int[max+1];
	for (int i = 0; i <= max; i++)
	{
		tempArr[i] = 0;
	}
	for (int i = 0; i < size; i++)
	{
		tempArr[arr[i]]++;
	}
	for (int i = 0, j = 0; i < size; i++)
	{
		while (tempArr[j] == 0) j++;
		for (int k = 1; k <= tempArr[j]; k++)
		{
			arr[i] = j+1000;
			i++;
		}
		i--;
		j++;
	}
	return arr;
}
float * const & findIndex::selectionSort(float * const & bubleArr, int size)
{
	for (int i = 0; i < size-1; i++)
	{
		int indexOfMin = i;
		for (int j = i+1; j < size; j++)
		{
			if (bubleArr[indexOfMin] > bubleArr[j]) indexOfMin = j;
		}
		//swap
		bubleArr[i] = bubleArr[i] + bubleArr[indexOfMin];
		bubleArr[indexOfMin] = bubleArr[i] - bubleArr[indexOfMin];
		bubleArr[i] = bubleArr[i] - bubleArr[indexOfMin];
	}
	return bubleArr;
}

float * const & findIndex::insertSort(float * const & arr, int size)
{
	for (int i = 1; i < size; i++)
	{
		float lastElement = arr[i];
		//Dịch chuyển mảng
		int j = i;
		while (j>0 && arr[j-1] > lastElement)
		{
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = lastElement;
	}
	return arr;
}

float * const & findIndex::mergeSort(float * const & arr, int size)
{
	if (size ==1)
	{
		return arr;
	}
	else
	{
		//tach lam 2 mang, sau do sap xep 2 mang do
		int sizeLeft = size / 2;
		int sizeRight = size - sizeLeft;
		float * L = new float[sizeLeft];
		float * R = new float[sizeRight];
		for (int i = 0; i < sizeLeft; i++)
		{
			L[i] = arr[i];
		}
		for (int i = 0; i < sizeRight; i++)
		{
			R[i] = arr[sizeLeft+i];
		}
		mergeSort(L, sizeLeft);
		mergeSort(R, sizeRight);
		merge(arr,size, L,sizeLeft, R, sizeRight);
		delete L;
		delete R;
	}
}



void findIndex::merge(float * const & arr, int sizeOfArr,
	float * const & L, int sizeOfL, 
	float * const & R, int sizeOfR)
{
	int i = 0;
	int l = 0;
	int r = 0;
	while (l < sizeOfL && r < sizeOfR)
	{
		if (L[l] <= R[r])
		{
			arr[i] = L[l];
			l++;
		}
		else if (L[l] > R[r])
		{
			arr[i] = R[r];
			r++;
		}
		i++;
	}
	if (r == sizeOfR)
	{
		for (; i < sizeOfArr; i++)
		{
			arr[i] = L[l];
			l++;
		}
	}
	if (l == sizeOfL)
	{
		for (; i < sizeOfArr; i++)
		{
			arr[i] = R[r];
			r++;
		}
	}
}






float * const & findIndex::quickSort(float * const & arr, int l, int r)
{
	if (l < r)
	{
		//choice pivot
		int index = partition(arr, l, r);
		quickSort(arr, l, index - 1);
		quickSort(arr, index + 1, r);
	}
	return arr;
}
int findIndex::partition(float * const & arr, int l, int r)
{
	float pivot = arr[r];
	int i = l -1;
	for (int j = l; j < r; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			//swap 2 element
			float temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
	}
	arr[r] = arr[i+1];
	arr[i+1] = pivot;
	return i + 1;
}


int main()
{
	float arr[] = { -1.1, 2.1, -3.4 , 4.3};
	findIndex f;
	int size = sizeof(arr) / sizeof(arr[0]);
	std::cout << f.findIndexMinNumber(arr,size) << std::endl;

	float * ar = new float[100];
	for (int i = 0; i < 100; i++)
	{
		ar[i] = -i;
	}
	size = 100;
	std::cout << f.findIndexMinNumber(ar, size) << std::endl;

	if (f.isExist(arr, 4, 1.5))
	{
		std::cout << "Exist" << std::endl;
	}
	else
	{
		std::cout << "Non-Exist" << std::endl;
	}

	std::cout << f.countEleLesThan(arr, 4, 3) << std::endl;

	std::cout << f.sumNegNumber(arr, 4) << std::endl;

	f.bubbleSort(ar, 4);
	float* b = f.bubbleSort(arr, 4);

	unsigned int arrBucketSort[] = { 1, 1, 6, 6, 3 };
	f.bucketSort(arrBucketSort, 5);

	float selArr[] = { 1.2f, 3.4f, 7.6f, -21.2f, 3.5f };
	f.selectionSort(selArr, 5);


	float insertArr[] = { 1.2f, 7.4f, 7.6f, -21.2f, 3.5f };
	f.insertSort(insertArr, 5);

	float mergeArr[] = { 1.2f, 7.4f, 7.6f, -21.2f, 3.5f };
	f.mergeSort(mergeArr,5);
	
	float sortArr[] = { 1.2f, 7.4f, 7.6f, -21.2f, 3.5f };
	f.quickSort(sortArr, 0, 4);

	return 1;
}