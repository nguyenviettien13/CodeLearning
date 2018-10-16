#include "Finder.h"
#include <math.h>
#include <assert.h>
#include <iostream>
#include <vector>


#include "Segment.h"
#include <limits.h>
Finder::Finder()
{
}


Finder::~Finder()
{
}

float Finder::findFirstElementMoreThanN(const float * const arr, int size, float N  =2003.0f)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > N) return arr[i];
	}
	return 0.0;
}

float Finder::findLastNegativeElement(const float * const arr, int size)
{
	assert(arr != NULL);
	for (int i = size-1; i >= 0; i--)
	{
		if (arr[i] > -1 && arr[i] < 0) return arr[i];
	}
	return 0.0f;
}

float Finder::findElementEqualMulOf2AdjacentElement(const float const * arr, int size)
{
	assert(arr != NULL);
	float epsilon = 0.00000001;
	for (int i = 2; i < size; i++)
	{
		if (abs(arr[i - 1] - arr[i - 2] * arr[i]) < epsilon)
		{
			return arr[i - 1];
		}
	}
	return -1.0f;
}

int Finder::findSquareNumber(const int const * arr, int size)
{
	float epsilon = 0.000000001;
	assert(arr != NULL);
	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= 0) 
		{
			if (abs(arr[i] - pow(ceil(sqrt(arr[i])), 2)) < epsilon)
			{
				return arr[i];
			}
		}
	}
	return -1;
}

bool Finder::isPalidromeNumber(int N)
{
	//Cach 1: lay so nghich dao
	int sodaonguoc = 0;
	int sbd = N;
	while (N != 0)
	{
		sodaonguoc = sodaonguoc * 10 + N % 10;
		N = N / 10;
	}
	return (sodaonguoc == sbd);
}

int Finder::findFirstOddNumber(const int const * arr, int size)
{
	assert(arr != NULL);
	for (int i = 0; i < size; i++)
	{
		if (isOddFirstDigit(arr[i])) return arr[i];
	}
	return -1;
}

bool Finder::isOddFirstDigit(int N)
{
	int FirstDigit = 0;
	while (N != 0)
	{
		FirstDigit = N % 10;
		N /= 10;
	}
	return (FirstDigit % 2 == 1);
}

int Finder::findFirst2kElement(int const * arr, int size)
{
	assert(arr != NULL);
	for (int i = 0; i < size; i++)
	{
		if (is2KNumber(arr[i])) return arr[i];
	}
	return 0;	
}

bool Finder::is2KNumber(int N)
{
	while (N != 1)
	{
		if (N % 2 == 1) return false;
		N = N / 2;
	}
	return true;
}

int Finder::MaxAllOddDigit(const int const * arr, int size)
{

	assert(arr != NULL);

	//Tim maxx
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	//Check dieu kien toan so chu so le
	if (isAllOddDigit(max)) return max;
	return 0;
}

bool Finder::isAllOddDigit(int N)
{
	while(N != 0)
	{
		if (N % 2 == 0) return false;
		N = N / 10;
	}
	return true;
}

int Finder::findMaxEvenNumGreaterThanAllOddNumber(const int const * arr, int size)
{
	assert(arr != NULL);

	//Buoc 1:	Tim so le nho nhat trong mang	odMin
	//			Mang chua toan so chan			evenArray
	std::vector<int> evenArray;
	int odMin = std::numeric_limits<int>::max();
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			evenArray.push_back(arr[i]);
		}
		else
		{
			if (odMin > arr[i]) odMin = arr[i];
		}
	}
	//Xong buoc 1

	//Buoc 2:	Tim phan tu lon nhat torng mang evenArray nho hon odMin

	int EvenMax = std::numeric_limits<int>::min();
	bool tag = false;
	for (int i = 0; i < evenArray.size(); i++)
	{
		if (evenArray[i] < odMin)
		{
			tag = true;
			if (evenArray[i] > EvenMax)
			{
				EvenMax = evenArray[i];
			}
		}
	}
	if (tag) return EvenMax;
	else
	{
		return -1;
	}
}

int Finder::findGCDOfArr(const int const * arr, int size)
{
	assert(arr != NULL);
	if (size = 1) return arr[0];
	int gcd = arr[0];
	for (int i = 1; i < size; i++)
	{
		gcd = GCD(gcd, arr[i]);
		if (gcd == 1) return 1;
	}
	return gcd;
}

int Finder::GCD(int M, int N)
{
	int tg = 0;
	while (M % N != 0)
	{
		tg = M;
		M = N;
		N = tg % N;
	}
	return N;
}

int Finder::findLCMOfAllArray(const int const * arr, int size)
{
	assert(arr != NULL);
	int lcm = arr[0];
	for (int i = 0; i < size; i++)
	{
		lcm = LCM(lcm, arr[i]);
	}
	return lcm;
}

int Finder::LCM(int M, int N)
{
	int gcd = GCD(M, N);
	return M * N / gcd;
}

void Finder::lietKeCacPhanTu(const int const * arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] <= arr[j])
			{
				std::cout << arr[i] << "   " << arr[j] << std::endl;
			}
			else
			{
				std::cout << arr[j] << "   " << arr[i] << std::endl;
			}
		}
	}
}

void Finder::timCapPhanTuGanNhauNhat(int * arr, int size)
{
	assert(arr != NULL);
	//sap xep mang su dung bubble sort 
	quicksortV_2(arr, 0, size - 1);
	if (size > 2)
	{
		// duyet qua mang de tim 2 phan tu co khoang cach nho nhat
		int k = 0;//luu vi tri cua phan tu thu nhat trong cap
		int khoangCachMin = arr[1] - arr[0];
		int khoangCach = arr[1] - arr[0];
		for (int i = 2; i < size; i++)
		{
			khoangCach = abs(arr[i] - arr[i - 1]);
			if (khoangCach < khoangCachMin)
			{
				khoangCachMin = khoangCach;
				k = i - 1;
			}
		}
		std::cout << "2 phan tu gan nhau nhat la: " << arr[k] << "& " << arr[k + 1] << std::endl;
		std::cout << "Khoang cach cua 2 phan tu la :" << khoangCachMin << std::endl;
	}
	else 
	{
		std::cout << "Mang co moi 1 phan tu khong tim duoc" << std::endl;
	}
	

}

void Finder::quicksort(int * arr, int left, int right)
{
	//
	if (left < right)
	{

		int pindex = right;
		
		for (int i = left;i< pindex; i++)
		{
			int pivot = arr[pindex];
			if (arr[i] <= pivot)
			{
				//donothing
			}
			else
			{

				if (arr[pindex] < arr[pindex - 1])
				{
					int temp = arr[pindex];
					arr[pindex] = arr[pindex - 1];
					arr[pindex - 1] = temp;
					pindex--;
					i--;
				}
				else
				{
					//doi 2 phan tu cuoi cung 
					int temp;
					temp = arr[pindex];
					arr[pindex] = arr[pindex - 1];
					arr[pindex - 1] = temp;

					//doi vi tri gan cuoi phan tu thu i voi phan tu ngay truoc pivot
					temp = arr[pindex];
					arr[pindex] = arr[i];
					arr[i] = temp;
					pindex--;
					i--;
				}
			}
		}
		//sap xep xong

		quicksort(arr, left, pindex - 1);
		quicksort(arr, pindex + 1, right);

	}
}

void Finder::quicksortV_2(int * arr, int l, int r)
{
	if (l < r)
	{
		//idea; chuyen tât ca nhung phan tu nho hon ve phia truoc
		int i = l - 1;//chi so cua phan tu nho hon pivot
		int pivot = arr[r];
		for (int j = l; j < r; j++)
		{
			if (arr[j] < pivot)
			{
				i++;
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}

		//dua phan tu pivot ve dung vi tri cua no

		int temp = arr[i + 1];
		arr[i + 1] = pivot;
		arr[r] = temp;
		quicksortV_2(arr, l, i);
		quicksortV_2(arr, i + 2, r);
	}
}

void Finder::lietKeCacPhanTuAm(const int const * arr, int size)
{
	std::cout << "Liet ke cac phan tu am cua mang: " << std::endl;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0) std::cout << arr[i] << std::endl;
	}
	std::cout << "Ket thuc viec liet ke" << std::endl;
}


std::vector<int> Finder::ChuSoXuatHienNhieuNhat(const int const * arr, int size)
{
	int  statistic[10] = { 0, 0, 0, 0 , 0, 0, 0, 0, 0 , 0 };
	for (int i = 0; i < size; i++)
	{
		//thuc hien thong ke cac chu so cua tung phan tu trong mang
		int temp = arr[i];
		while (temp != 0)
		{
			statistic[temp % 10] += 1;
			temp /= 10;
		}
	}

	//tu mang thong ke statistic de tim ra chu so xuat hien nhieu nhat
	//co the xay ra truong hop nhieu chu so giong nhau
	int soLanXuatHienLonNhat = 0;
	std::vector<int> mangCacChuCaiDangXuatHienNhieuNhat;
	for (int i = 0; i < 10; i++)
	{
		int soLanXuatHien = statistic[i];
		if (soLanXuatHien > soLanXuatHienLonNhat)
		{
			//xoa danh sach mang mangCacChuCaiDangXuatHienNhieuNhat
			mangCacChuCaiDangXuatHienNhieuNhat.clear();
			mangCacChuCaiDangXuatHienNhieuNhat.push_back(i);
			soLanXuatHienLonNhat = soLanXuatHien;
		}else if (soLanXuatHien == soLanXuatHienLonNhat)
		{
			mangCacChuCaiDangXuatHienNhieuNhat.push_back(i);
		}
	}
	return mangCacChuCaiDangXuatHienNhieuNhat;
}




int main()
{
	int arr11[] = { 15, -35, -30, 1515 };
	std::cout << Finder().findFurthestElement(arr11, 4, 3) << std::endl;
	std::cout << Finder().findNearestElement(arr11, 4, 3) << std::endl;

	float arr12[] = { -0.1f, 2.1f, 3.4f, 5.6f , 5.6f*7.9f, 7.9f};
	std::cout << Finder().findFurthestElement(arr12, 4, 2.9f) << std::endl;
	std::cout << Finder().findNearestElement(arr12, 4, 3.0f) << std::endl;

	Segment<int> a = Finder().findSegment(arr11, 4);
	Segment<float> b = Finder().findSegment(arr12, 4);

	std::cout << "Phan tu dau tien lon hon 2003 la :	" << Finder().findFirstElementMoreThanN(arr12, 4) << std::endl; 
	std::cout << "gia tri am cuoi cung lon hon -1 la :	" << Finder().findLastNegativeElement(arr12, 4) << std::endl;
	

	std::cout << "Phan tu dau tien trong doan la : " << Finder().findFirstElementInSeg(arr11, 4, 2, 5) << std::endl;
	std::cout << "Phan tu dau tien trong doan la : " << Finder().findFirstElementInSeg(arr12, 4, -2.0f, 5.0f) << std::endl;

	std::cout << "Phan tu bang tich cua 2 phan tu ke cua no la : " << Finder().findElementEqualMulOf2AdjacentElement(arr12, 6);

	std::cout << "Phan tu la so chinh phuong dau tien trong mang la : " << Finder().findSquareNumber(arr11, 4) << std::endl;

	std::cout << "So sau co phai so ganh khong? " << ((Finder().isPalidromeNumber(12321) == true) ? "Dung" : "Sai") ;
	
	std::cout << "Co phai la so le khong nhi??  " << ((Finder().isOddFirstDigit(8) == true) ? "Dung" : "Sai") << std::endl;

	std::cout << "Phan tu dau tien trong mang bat dau bang so le la: " << Finder().findFirstOddNumber(arr11, 4) << std::endl;

	std::cout << "Phan tu lon nhat ma thoa man gom toan chu so le la: " << Finder().MaxAllOddDigit(arr11, 4) <<std::endl;

	std::cout << "Phan tu so chan lon nhat nho hon moi phan tu trong mang la: " << Finder().findMaxEvenNumGreaterThanAllOddNumber(arr11, 4);

	std::cout << "Uoc chung lon nhat cua cả mang la : " << Finder().findGCDOfArr(arr11, 4) << std::endl;

	std::cout << "Boi chung lon nhat cua tat ca cac mang: " << Finder().findLCMOfAllArray(arr11, 4) << std::endl;


	std::cout << "Chu so xuat hien nhieu nhat trong mang la: ";
	std::vector<int> t = Finder().ChuSoXuatHienNhieuNhat(arr11, 4);

	Finder().lietKeCacPhanTu(arr11, 4);
	Finder().quicksort(arr11, 0, 3);
	
	int input[] =  {6, 1, 7, 9, 3, 8, 2, 5, 4, 0};
	Finder().quicksort(input, 0, 9);

	int input1[] = { 6, 1, 7, 9, 3, 8, 2, 5, 4, 0 };
	Finder().quicksortV_2(input1, 0, 9);

	Finder().timCapPhanTuGanNhauNhat(arr11, 3);

	Finder().lietKeCacPhanTuAm(arr11, 3);
	return 1;


}	