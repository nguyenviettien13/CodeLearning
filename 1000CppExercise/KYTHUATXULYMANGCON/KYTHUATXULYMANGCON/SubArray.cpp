#include "SubArray.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <stack>



SubArray::SubArray()
{
}


SubArray::~SubArray()
{
}

void SubArray::bai295(int * arr, int size)
{
	int soLuongDayConTang = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			if (j==i)
			{
				soLuongDayConTang++;
				std::cout << "Mang thang thu " << soLuongDayConTang << " bat dau " << i << " va ket thuc tai " << j << " : " <<arr[i];
				std::cout << std::endl;
			}
			else
			{
				if (arr[j - 1] <= arr[j])
				{
					soLuongDayConTang++;
					std::cout << "Mang thang thu " << soLuongDayConTang << " bat dau " << i << " va ket thuc tai " << j << " : ";
					for (int k = i; k <= j; k++)
					{
						std::cout << arr[k] << " ";
					}
					std::cout << std::endl;
				}
				else
				{
					break;
				}
			}
		}
	}
}

void SubArray::bai296(int * arr, int size)
{
	std::vector<int> tapChiSoPhanTuLonNhat;
	int indexOfMax = 0;
	int maxValue = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > maxValue)
		{
			tapChiSoPhanTuLonNhat.clear();
			tapChiSoPhanTuLonNhat.push_back(i);
			maxValue = arr[i];
		}
		else if (arr[i] == maxValue)
		{
			tapChiSoPhanTuLonNhat.push_back(i);
		}
	}



	int soLuongMang = 0;
	for (int i = 0; i < tapChiSoPhanTuLonNhat.size(); i++)
	{
		int chiSoPhanTuLonNhat = tapChiSoPhanTuLonNhat[i];
		int size = 0;

		for (int chiSoPhanTuDangXet = chiSoPhanTuLonNhat; chiSoPhanTuDangXet >= 0; chiSoPhanTuDangXet--)
		{
			if (size == 0)
			{
				size++;
				soLuongMang++;
				//in ra mang;
				std::cout << "Mang thu : " << soLuongMang << "(Tu " << chiSoPhanTuDangXet << " den " << chiSoPhanTuLonNhat << ")" << std::endl;
				for (int k = chiSoPhanTuDangXet; k <= chiSoPhanTuLonNhat; k++)
				{
					std::cout << arr[k] << " ";
				}
				std::cout << std::endl;
			}
			else
			{
				if (arr[chiSoPhanTuDangXet] <= arr[chiSoPhanTuDangXet + 1])
				{
					size++;
					soLuongMang++;
					//in ra mang
					std::cout << "Mang thu : " << soLuongMang << "(Tu " << chiSoPhanTuDangXet << " den " << chiSoPhanTuLonNhat << ")" << std::endl;
					for (int k = chiSoPhanTuDangXet; k <= chiSoPhanTuLonNhat; k++)
					{
						std::cout << arr[k] << " ";
					}
					std::cout << std::endl;
				}
				else
				{
					break;
				}
			}
		}
	}
}

void SubArray::bai297(int * arr, int size)
{
	int beginIndex = 0;
	int maxBeginIndex = 0;
	int endIndex = 0;
	int maxEndIndex = 0;
	int currentSum = arr[0];
	int maxSum = arr[0];

	for (int i = 1; i < size; i++)
	{
		if (arr[i] >= arr[endIndex])
		{
			//Phan tu tang
			if (arr[i] < currentSum +arr[i])
			{
				//lay them phan tu thu i
				currentSum = arr[i] + currentSum;
				endIndex = i;

				if (maxSum < currentSum)
				{
					maxSum = currentSum;
					maxBeginIndex = beginIndex;
					maxEndIndex = endIndex;
				}
			}
			else
			{
				currentSum = arr[i];
				endIndex = i;
				beginIndex = i;
				if (currentSum > maxSum)
				{
					maxSum = currentSum;
					maxBeginIndex = beginIndex;
					maxEndIndex = endIndex;
				}
			}
		}
		else
		{
			beginIndex = i;
			endIndex = i;
			currentSum = arr[i];
			if (currentSum < maxSum)
			{
				//dieu nay chac chan khong bao h xay ra
			}
		}
	}


	std::cout << "max : " << maxSum << std::endl;
	std::cout << "Bat dau tu : " << maxBeginIndex << " va ket thuc tai : " << maxEndIndex << std::endl;
}

int SubArray::bai298(const int const * arr, int size)
{
	int soLuongMangTM = 0;
	int beginIndex = 0;
	int endIndex = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] >= arr[endIndex])
		{
			endIndex++;
			soLuongMangTM += (endIndex - 1 - beginIndex + 1);
		}
		else
		{
			beginIndex = i;
			endIndex = i;
		}
	}
	return soLuongMangTM;
}

int SubArray::bai298B(const int const * arr, int size)
{
	int soLuongMang = 0;
	int beginIndex = 0;
	int endIndex = 0;
	int currentSize = 1;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] >= arr[endIndex])
		{
			endIndex = i;
			currentSize++;
			if (currentSize > 2)
			{
				soLuongMang++;
				//in mang
				std::cout << "Mang thu : " << soLuongMang << " : ";
				for (int k = beginIndex; k <= endIndex; k++)
				{
					std::cout << arr[k] << "  ";
				}
				std::cout << std::endl;
			}
		}
		else
		{
			beginIndex = i;
			endIndex = i;
			currentSize = 1;
		}
	}
	return soLuongMang;
}

int SubArray::bai299(const int const * arr, int size, const int MINSIZE)
{
	int soLuongPhanTu = 0;
	int currSize = 0;
	int beginIndex = -1;
	for (int i = 0; i < size; i++)
	{
		if (currSize ==0 & arr[i] > 0)
		{
			beginIndex = i;
			currSize = 1;
		}
		else if(currSize > 0 & arr[i] >0)
		{
			currSize++;
			if (currSize >= MINSIZE)
			{
				for (int k = beginIndex; k <= i - MINSIZE + 1; k++)
				{
					soLuongPhanTu++;
					std::cout << "Mang thu " << soLuongPhanTu << " : ";
					for (int j = k; j <= i; j++)
					{
						std::cout << arr[j] << "  ";
					}
					std::cout << std::endl;
				}
			}
		}
		else
		{
			currSize = 0;
		}
	}
	return soLuongPhanTu;
}

int SubArray::bai300(const int const * arr, int size, int MINSIZE)
{
	int soThuTuMang = 0;
	int beginIndex = 0;
	int currentSize = 1;

	for (int i = 1; i < size; i++)
	{
		if (arr[i - 1] > arr[i])
		{
			currentSize++;
			if (currentSize >= MINSIZE)
			{
				for (int k = beginIndex; k <= i - MINSIZE + 1; k++)
				{
					soThuTuMang++;
					std::cout << "Mang thu " << soThuTuMang << ": ";
					for (int h = k; h <= i; h++)
					{
						std::cout << arr[h] << "  ";
					}
					std::cout << std::endl;
				}
			}
		}
		else
		{
			currentSize = 1;
			beginIndex = i;
		}
	}

	return soThuTuMang;
}

bool SubArray::bai301_v1(int * arra, int sizea, int * arrb, int sizeb)
{
	for (int i = 0; i < sizeb; i++)
	{
		bool timThayTrongAArray = false;
		for (int j = 0; j < sizea; j++)
		{
			if (arra[i] == arrb[j])
			{
				timThayTrongAArray = true;
				break;
			}
		}
		if (timThayTrongAArray)
		{
			continue;
		}
		else
		{
			return false;
		}
		std::cout << "";
	}
	return true;
}

void SubArray::quickSort(int * arr, int si, int ei)
{
	int pi;    /* Partitioning index */
	if (si < ei)
	{
		pi = partition(arr, si, ei);
		quickSort(arr, si, pi - 1);
		quickSort(arr, pi + 1, ei);
	}
}

int SubArray::partition(int A[], int si, int ei)
{
	int x = A[ei];
	int i = (si - 1);
	int j;

	for (j = si; j <= ei - 1; j++)
	{
		if (A[j] <= x)
		{
			i++;
			exchange(&A[i], &A[j]);
		}
	}
	exchange(&A[i + 1], &A[ei]);
	return (i + 1);
}

void SubArray::exchange(int * a, int * b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int SubArray::binarySearch(int arr[], int low, int high, int x)
{
	if (low <= high)
	{
		int mid = (low + high) / 2;
		if (arr[mid] == x)
		{
			return mid;
		}
		else if (arr[mid] > x)
		{
			return binarySearch(arr, low, mid - 1, x);
		}
		else
		{
			return binarySearch(arr, mid + 1, high, x);
		}
	}
	return -1;
}

bool SubArray::bai301_v2(int arr1[], int arr2[], int m, int n)
{
	quickSort(arr1, 0, m - 1);
	for (int i = 0; i < n; i++)
	{
		if(binarySearch(arr1, 0, m - 1, arr2[i]) == -1)
		{
			return false;
		}
	}
	return true;
}

bool SubArray::bai301_v3(int arr1[], int arr2[], int m, int n)
{
	quickSort(arr1, 0, m - 1);
	quickSort(arr2, 0, n - 1);

	int j = 0; //-m chi so chay tren mang 1
	int i = 0; //-n chi so chay tren mang 2
	while (j < m && i < n)
	{
		if (arr1[j] < arr2[i])
		{
			j++;
		}
		else if(arr1[j] == arr2[i])
		{
			i++;
			j++;
		}
		else if (arr1[j] > arr2[i])
		{
			return false;
		}
	}
	i--;//tro ve phan tu cuoi cung co ca trong arr1 va arr2
	if (i < n-1)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool SubArray::bai301_v4(int arr1[], int arr2[], int m, int n)
{
	std::unordered_set<int> arr1hash;
	for (int i = 0; i < m; i++)
	{
		arr1hash.insert(arr1[i]);
	}
	for (int j = 0; j < n; j++)
	{
		if (arr1hash.find(arr2[j]) == arr1hash.end())
		{
			return false;
		}
	}
	return true;
}

void SubArray::bai303(const int const * arr, int size)
{
	int bimax = -1;
	int eimax = -1;
	int maxSizeArr = 0;

	int bi = -1;
	int ei = -1;
	int curSizeArr = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0 && curSizeArr == 0)
		{
			bi = i;
			ei = i;
			curSizeArr = 1;
		}
		else if(arr[i] > 0 && curSizeArr > 0)
		{
			ei = i;
			curSizeArr++;
		}
		else
		{
			curSizeArr = 0;
			bi = -1;
			ei = -1;
		}

		if (maxSizeArr < curSizeArr)
		{
			bimax = bi;
			eimax = ei;
			maxSizeArr = curSizeArr;
		}
	}

	std::cout << "Mang duong co chieu dai lon nhat la : "<< maxSizeArr << std::endl;
	std::cout << "Begin index : " << bimax << "End Index: " << eimax << std::endl;
}





void SubArray::bai304(int * arr, int fromIndex, int endIndex, int TARGET_SUM)
{
	if (sumInStack == TARGET_SUM) 
	{
		printstack(stackk);
	}

	for (int currentIndex = fromIndex; currentIndex < endIndex; currentIndex++) {

		if (sumInStack + arr[currentIndex] <= TARGET_SUM) 
		{
			stackk.push(arr[currentIndex]);
			sumInStack += arr[currentIndex];

			/*
			* Make the currentIndex +1, and then use recursion to proceed
			* further.
			*/
			bai304(arr, currentIndex + 1, endIndex, TARGET_SUM);
			stackk.pop();
			sumInStack -= int(stackk.top());
		}
	}

}

void SubArray::printstack(std::stack<int> stackk)
{

}



int main()
{
	/******************************************************************************
	Bai_295:
	int size = 12;
	int* arr = new int[size];
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = -2;
	arr[3] = 3;
	arr[4] = 4;
	arr[5] = -5;
	arr[6] = 6;
	arr[7] = 7;
	arr[8] = 8;
	arr[9] = 9;
	arr[10] = 10;
	arr[11] = 11;

	SubArray().bai295(arr, 12);
	*******************************************************************************/
	
	/*****************************************************************
	Bai 296: 
	int size = 12;
	int* arr = new int[size];
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 11;
	arr[3] = 3;
	arr[4] = 4;
	arr[5] = -5;
	arr[6] = 6;
	arr[7] = 11;
	arr[8] = 8;
	arr[9] = 9;
	arr[10] = 10;
	arr[11] = 11;

	SubArray().bai296(arr, 12);

	********************************************************************/



	/*******************************************************************
	Bai 297:
	int size = 12;
	int* arr = new int[size];
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 11;
	arr[3] = 3;
	arr[4] = 4;
	arr[5] = -5;
	arr[6] = 6;
	arr[7] = 11;
	arr[8] = 8;
	arr[9] = 9;
	arr[10] = 10;
	arr[11] = 11;

	SubArray().bai297(arr, 12);

	***************************************/
	/*************************************
	Bai 298: 
	int size = 12;
	int* arr = new int[size];
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 11;
	arr[3] = 3;
	arr[4] = 4;
	arr[5] = -5;
	arr[6] = 6;
	arr[7] = 11;
	arr[8] = 8;
	arr[9] = 9;
	arr[10] = 10;
	arr[11] = 11;

	std::cout << "So luong mang tang co so luong phan tu lon hon 1 la: " << SubArray().bai298(arr, 12) << std::endl;
	SubArray().bai295(arr, 12);
	********************************************************************/

	/****************************************
	Bai 298B
	int size = 12;
	int* arr = new int[size];
	arr[0] = 0;
	arr[1] = 111;
	arr[2] = 11;
	arr[3] = 3;
	arr[4] = 4;
	arr[5] = -5;
	arr[6] = 6;
	arr[7] = 11;
	arr[8] = 8;
	arr[9] = 9;
	arr[10] = 10;
	arr[11] = 11;

	std::cout << "So luong mang tang co so luong phan tu lon hon 2 la: " << SubArray().bai298B(arr, 12) << std::endl;
	*****************************************/
	

	/****************************************
	Bai 299:
	Liệt kê các dãy con toàn dương có độ dài lớn hơn 1 trong mảng một
	chiều số thực (lietkeconduong).

	int size = 12;
	int* arr = new int[size];
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 11;
	arr[3] = 3;
	arr[4] = 4;
	arr[5] = -5;
	arr[6] = 6;
	arr[7] = 11;
	arr[8] = 8;
	arr[9] = 9;
	arr[10] = 10;
	arr[11] = 11;
	std::cout << "Liet ke cac mang con duong cua mang da cho co so luong phan tu lon hon 3 la: " << std::endl;
	SubArray().bai299(arr, 12, 3);

	*****************************************/
	/***************************************
	Bai 300:
	int size = 12;
	int* arr = new int[size];
	arr[0] = 0;
	arr[1] = 111;
	arr[2] = 11;
	arr[3] = 3;
	arr[4] = -4;
	arr[5] = -5;
	arr[6] = -6;
	arr[7] = -11;
	arr[8] = -8;
	arr[9] = 19;
	arr[10] = 10;
	arr[11] = -11;
	std::cout << "Liet ke cac mang con duong cua mang da cho co so luong phan tu lon hon 3 la: " << std::endl;
	SubArray().bai300(arr, 12, 3);
	****************************************/
	

/***********************************************
Bai 300v1:
int size = 12;
int* arr = new int[size];
arr[0] = 0;
arr[1] = 111;
arr[2] = 11;
arr[3] = 3;
arr[4] = -4;
arr[5] = -5;
arr[6] = -6;
arr[7] = -11;
arr[8] = -8;
arr[9] = 19;
arr[10] = 10;
arr[11] = -11;

int size1 = 4;
int* arr1 = new int[size1];
arr1[0] = 0;
arr1[1] = 121;
arr1[2] = 11;
arr1[3] = 3;


if (SubArray().bai301_v1(arr, 12, arr1, 4))
{
std::cout << "Arr1 là tap con cua arr" << std::endl;
}
else
{
std::cout << "Arr1 khong phai la subset cua arr" << std::endl;
}
************************************************/


/***********************************************
Bai 301_v2

int size = 12;
int* arr = new int[size];
arr[0] = 0;
arr[1] = 111;
arr[2] = 11;
arr[3] = 3;
arr[4] = -4;
arr[5] = -5;
arr[6] = -6;
arr[7] = -11;
arr[8] = -8;
arr[9] = 19;
arr[10] = 10;
arr[11] = -11;

int size1 = 4;
int* arr1 = new int[size1];
arr1[0] = 0;
arr1[1] = 11;
arr1[2] = 111;
arr1[3] = 3;


if (SubArray().bai301_v2(arr, arr1, 12, 4))
{
std::cout << "Arr1 là tap con cua arr" << std::endl;
}
else
{
std::cout << "Arr1 khong phai la subset cua arr" << std::endl;
}
***********************************************/


/*********************************************
Bai301_v3:
Method 3 (Use Sorting and Merging )
int size = 12;
int* arr = new int[size];
arr[0] = 0;
arr[1] = 111;
arr[2] = 11;
arr[3] = 3;
arr[4] = -4;
arr[5] = -5;
arr[6] = -6;
arr[7] = -11;
arr[8] = -8;
arr[9] = 19;
arr[10] = 10;
arr[11] = -11;

int size1 = 4;
int* arr1 = new int[size1];
arr1[0] = 0;
arr1[1] = 11;
arr1[2] = 111;
arr1[3] = 3;


if (SubArray().bai301_v3(arr, arr1, 12, 4))
{
std::cout << "Arr1 là tap con cua arr" << std::endl;
}
else
{
std::cout << "Arr1 khong phai la subset cua arr" << std::endl;
}

**********************************************/

/*********************************************
Bai 301_v4

int size = 12;
int* arr = new int[size];
arr[0] = 0;
arr[1] = 111;
arr[2] = 11;
arr[3] = 3;
arr[4] = -4;
arr[5] = -5;
arr[6] = -6;
arr[7] = -11;
arr[8] = -8;
arr[9] = 19;
arr[10] = 10;
arr[11] = -11;

int size1 = 4;
int* arr1 = new int[size1];
arr1[0] = 0;
arr1[1] = 11;
arr1[2] = 1121;
arr1[3] = 3;


if (SubArray().bai301_v4(arr, arr1, 12, 4))
{
std::cout << "Arr1 là tap con cua arr" << std::endl;
}
else
{
std::cout << "Arr1 khong phai la subset cua arr" << std::endl;
}

**********************************************/


/*********************************************
Bai 302: 
int size = 12;
int* arr = new int[size];
arr[0] = 0;
arr[1] = -111;
arr[2] = 11;
arr[3] = 3;
arr[4] = -4;
arr[5] = 5;
arr[6] = 6;
arr[7] = 11;
arr[8] = 8;
arr[9] = -19;
arr[10] = 10;
arr[11] = -11;



SubArray().bai303(arr, 12);
**********************************************/


/*********************************************
Bai 304:

**********************************************/
int size = 12;
int* arr = new int[size];
arr[0] = 0;
arr[1] = 1;
arr[2] = 2;
arr[3] = 3;
arr[4] = 4;
arr[5] = 5;
arr[6] = 6;
arr[7] = 7;
arr[8] = 8;
arr[9] = 9;
arr[10] = 10;
arr[11] = 11;

SubArray().bai304(arr, 0, 11, 15);

return 1;
}