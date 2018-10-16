#include "Flag.h"
#include <iostream>


Flag::Flag()
{
}


Flag::~Flag()
{
}

int Flag::l240(const int const * arr, int size, int N)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == N) return 1;
	}
	return 0;
}

bool Flag::l241(const int const * arr, int size)
{
	int * arrcpy = new int[size];
	memcpy(arrcpy, arr, size * sizeof(int));
	quickSort(arrcpy, 0, size - 1);
	bool flag = false;
	for (int i = 0; i < size - 1; i++)
	{
		if (abs(arr[i] - arr[i - 1]) == 1)
		{
			flag = true;
			break;
		}
	}
	return flag;
}

int Flag::partition(int arr[], int low, int high)

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

void Flag::quickSort(int arr[], int low, int high)
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

void Flag::swap(int * a, int * b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

bool Flag::l242(const int const * arr, int size)
{
	bool flag = false;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			flag = true;
			break;
		}
	}
	return flag;
}

bool Flag::l243(const int const * arr, int size)
{
	bool flag = false;
	for (int i = 0; i < size; i++)
	{
		if (laSoNguyenTo(arr[i]))
		{
			flag = true;
			break;
		}
	}
	if(flag) return 1;
	return 0;
}

bool Flag::laSoNguyenTo(int N)
{
	if (N <= 1) return false;
	for (int i = 2; i <= sqrt(N); i++)
	{
		if (N%i == 0) return false;
	}
	return true;
}

bool Flag::l244(const int const * arr, int size)
{
	bool flag = false;
	for (int i = 0; i < size; i++)
	{
		if (soHoanThien(arr[i]) && arr[i] > 256)
		{
			flag = true;
			break;
		}
	}
	return flag;
}

bool Flag::soHoanThien(int N)
{
	int tongcacuoc = 0;
	for (int i = 1; i < N; i++)
	{
		if (N%i == 0) tongcacuoc += i;
	}
	return tongcacuoc==N;
}

bool Flag::l255(const int const * arr, int size)
{
	bool chuasoleflag = false;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 1)
		{
			chuasoleflag = true;
			break;
		}
	}
	if (chuasoleflag) return false;
	else
	{
		return true;
	}
}

bool Flag::bai247(const int const * arr, int size)
{
	bool flag = true;
	bool tinhChanCuaPhanTuDangTruoc = (arr[0] % 2 == 0);
	bool tinhChanCuaPhanTuHienTai;
	for (int i = 1; i < size; i++)
	{
		tinhChanCuaPhanTuHienTai = (arr[i] % 2 == 0);
		if (tinhChanCuaPhanTuHienTai == tinhChanCuaPhanTuDangTruoc)
		{
			flag = false;
			break;
		}
		tinhChanCuaPhanTuDangTruoc = tinhChanCuaPhanTuHienTai;
	}
	return flag;
}

bool Flag::bai248(const int const * arr, int size)
{
	bool flag = true;
	int phanTudangTruoc = std::numeric_limits<int>::min();
	for (int i = 0; i < size; i++)
	{
		if (phanTudangTruoc > arr[i])
		{
			flag = false;
			break;
		}
		phanTudangTruoc = arr[i];
	}
	return flag;
}

bool Flag::bai249(const int const * arr, int size)
{
	bool flag = true;
	int phantudangtruoc = std::numeric_limits<int>::max();
	for (int i = 0; i < size; i++)
	{
		if (phantudangtruoc < arr[i])
		{
			flag = false;
			break;
		}
		phantudangtruoc = arr[i];
	}
	return flag;
}

bool Flag::bai250(const int const * arr, int size)
{
	
	bool flag = true;
	int d = arr[1] - arr[0];
	int khoangCachPhanTuHienTaiVoiPhanTuKeTruoc;
	for (int i = 1; i < size; i++)
	{
		khoangCachPhanTuHienTaiVoiPhanTuKeTruoc = arr[i] - arr[i - 1];
		if (d != khoangCachPhanTuHienTaiVoiPhanTuKeTruoc)
		{
			flag = false;
			break;
		}
	}
	return flag;
}

bool Flag::bai251(const int const * arr, int size)
{

	int *arrd = new int[size];
	std::memcpy(arrd, arr, size * sizeof(int));
	quickSort(arrd, 0, size - 1);
	for (int i = 1; i < size; i++)
	{
		if (arr[i] == arr[i - 1])
		{
			delete arrd;
			return false;
		}
			
	}
	delete arrd;
	return true;
}

bool Flag::bai252(const int const * arr, int size)
{
	bool flag = true;
	bool tinhTang = arr[0] < arr[1];
	bool tinhTang2;

	for (int i = 1; i < size-1; i++)
	{
		tinhTang2 = arr[i] < arr[i + 1];
		if (tinhTang == tinhTang2)
		{
			flag = false;
			break;
		}
		tinhTang = tinhTang2;
	}
	return flag;
}

void Flag::bai253(const int const * arr, int size)
{
	std::cout << "Bat dau l253: " << std::endl;
	int lonNhatThoiDiemHienTai = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > lonNhatThoiDiemHienTai)
		{
			std::cout << arr[i] << std::endl;
			lonNhatThoiDiemHienTai = arr[i];
		}
	}
	std::cout << "Ket thuc l253!!!" << std::endl;
}

int main()
{
	int arr[] = { 3, 1, 5, 1, 9, 1 };
	std::cout << Flag().l240(arr, 5, 45) << std::endl;
	std::cout << Flag().l241(arr, 5) << std::endl;
	std::cout << "Kiem tra xem mang chua phan tu chan hay khong?" << Flag().l242(arr, 5) << std::endl;
	std::cout << "Kiem tra mang co chua so nguyen to hay khong?" << Flag().l243(arr, 5) << std::endl;
	std::cout << "Kiem tra mang co chua so hoan thien hay khong?" << Flag().l244(arr, 5) << std::endl;
	std::cout << "Kiem tra mang co chua toan so chan hay khong?" << Flag().l255(arr,5) << std::endl;
	std::cout << "Kiem tra tinh xen ke chan le cua mang : " << Flag().bai247(arr,5) << std::endl;
	std::cout << "Kiem tra tinh tang cua mang : " << Flag().bai248(arr,5) << std::endl;
	std::cout << "Kiem tra tinh giam cua mang : " << Flag().bai249(arr,5) << std::endl;
	std::cout << "Kiem tra mang co tao thanh mot cap so cong hay khogn : " << Flag().bai250(arr, 5) << std::endl;
	std::cout << "Kiem tra mang co 2 phan tu nao giong nhau hay khong? : " << Flag().bai251(arr, 5) << std::endl;
	std::cout << "Kiem tra tinh song : " << Flag().bai252(arr, 5) << std::endl;
	std::cout << "Liet ke tat ca cac phan tu lon hon tat ca cac phan tu truoc no" << std::endl;
	Flag().bai253(arr, 5);

	return 1;
}