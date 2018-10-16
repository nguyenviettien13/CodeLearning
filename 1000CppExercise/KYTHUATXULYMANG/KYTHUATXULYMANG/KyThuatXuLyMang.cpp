#include "KyThuatXuLyMang.h"
#include <iostream>
#include <windows.h>

KyThuatXuLyMang::KyThuatXuLyMang()
{
}


KyThuatXuLyMang::~KyThuatXuLyMang()
{
}

int *& KyThuatXuLyMang::bai280(int * arr, int size)
{
	// TODO: insert return statement here
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 1)
		{
			arr[i] = arr[j];
			arr[j] = 1;
			j++;
		}
	}
	return arr;
}

int *& KyThuatXuLyMang::bai281(int *&arr, int &size)
{
	// TODO: insert return statement here
	int indexchan= 0;

	//ném hết phần tử chẵn lên phía đầu của mảng (phía trái)
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0 && arr[i] != 0)
		{
			int temp = arr[i];
			arr[i] = arr[indexchan];
			arr[indexchan] = temp;
			indexchan++;
		}
	}
	//Sau do indexchan se tro den phan tu dau tien khong phai so chan
	int index0 = size - 1;
	for (int i = indexchan; i <= index0; i++)
	{
		if (arr[i] == 0)
		{
			arr[i] = arr[index0];
			arr[index0] = 0;
			i--;
			index0--;
		}
	}

	//sau dong nay index0 sẽ chỉ đến phần tử cuối cùng khác 0
	return arr;
}

int *& KyThuatXuLyMang::bai282(int *& arr, int & size)
{
	int vitrixepphantuchiahetcho3= 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 3 == 0)
		{
			int temp = arr[i]; 
			arr[i] = arr[vitrixepphantuchiahetcho3];
			arr[vitrixepphantuchiahetcho3] = temp;
			vitrixepphantuchiahetcho3++;
		}
		else
		{
			//do nothing
		}
	}
	return arr;
}

int *& KyThuatXuLyMang::bai283(int *& arr, int & size)
{
	// TODO: insert return statement here
	for (int i = 0, j = size - 1; i <= j; i++, j--)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	return arr;
}

int *& KyThuatXuLyMang::bai284(int *& arr, int & size)
{
	int chisoChan1 = 0;
	int chisoChan2 = size-1;
	while (chisoChan1 < chisoChan2)
	{
		while (arr[chisoChan1] % 2 != 0)
		{
			chisoChan1++;
		}
		while (arr[chisoChan2] % 2 != 0)
		{
			chisoChan2--;
		}
		if (chisoChan1 < chisoChan2)
		{
			int temp = arr[chisoChan1];
			arr[chisoChan1] = arr[chisoChan2];
			arr[chisoChan2] = temp;
		}
		chisoChan1++;
		chisoChan2--;
	}
	return arr;
}

int *& KyThuatXuLyMang::bai285(int *& arrr, int & size)
{
	int chiSoSoDuong1 =0;
	int chiSoSoDuong2 = size-1;

	while (chiSoSoDuong1< chiSoSoDuong2)
	{
		while (arrr[chiSoSoDuong1] <= 0)
		{
			chiSoSoDuong1++;
		}

		while (arrr[chiSoSoDuong2] <= 0)
		{
			chiSoSoDuong2--;
		}

		if (chiSoSoDuong1 < chiSoSoDuong2)
		{
			int temp = arrr[chiSoSoDuong1];
			arrr[chiSoSoDuong1] = arrr[chiSoSoDuong2];
			arrr[chiSoSoDuong2] = temp;
		}
		chiSoSoDuong1++;
		chiSoSoDuong2--;
	}
	return arrr;
}

int *& KyThuatXuLyMang::bai286(int *& arr, int & size, int d)
{
	//tìm ước chung lớn nhất của size và k
	int gcd = 0;
	int a = size;
	int b = d;
	while (a%b != 0)
	{
		int temp = a;
		a = b;
		b = temp % b;
	}
	gcd = b;
	
	for (int i = 0; i < gcd; i++)
	{
		int temp = arr[i];
		int j = i;
		while (1)
		{
			int k = j + d;
			if (k >= size)
			{
				k = k - size;
			}
			if (k == i)
			{
				arr[j] = temp;
				break;
			}
			arr[j] = arr[k];
			j = k;
		}
	}
	return arr;
}
int *& KyThuatXuLyMang::bai286_dich1phantu(int *& arr, int size)
{
	int temp = arr[0];
	for (int i = 0; i < size - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[size-1] = temp;
	return arr;
}
int *& KyThuatXuLyMang::bai287(int *& arr, int n, int d)
{
	//tim uoc chung lon nhat cua n va d
	int a = n;
	int b = d;
	int gcd = 0;
	while (a%b != 0)
	{
		int temp = a;
		a = b;
		b = temp % b;
	}
	gcd = b;


	for (int i = 0; i < gcd; i++)
	{
		int temp = arr[i];
		int j = i;
		while (1)
		{
			int k = j - d;
			if (k < 0)
			{
				k += n;
			}
			if (k == i)
			{
				arr[j] = temp;
				break;
			}
			else
			{
				arr[j] = arr[k];
				j = k;
			}
		}
	}
	return arr;
}
void KyThuatXuLyMang::bai288(const int const * arr, int size)
{
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
			std::cout << arr[i] << "\t";
		}
		else
		{
			SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
			std::cout << arr[i] << "\t";
		}
	}
}

void KyThuatXuLyMang::bai289(const int const * arr, int size)
{
	std::cout << "Cac phan tu chan cua mang:::::" << std::endl;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			std::cout << arr[i] << "\t";
		}
	}
	std::cout << std::endl;
	std::cout << "Cac phan tu le cua mang:::::" << std::endl;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0)
		{
			std::cout << arr[i] << "\t";
		}
	}
}

int * KyThuatXuLyMang::bai290( int*& arr, int size)
{
	int indexchan1 = 0;
	int indexchan2 = size - 1;

	while (indexchan1 < indexchan2)
	{
		while (arr[indexchan1] % 2 != 0)
		{
			indexchan1++;
		}

		while (arr[indexchan2] % 2 != 0)
		{
			indexchan2--;
		}

		if (indexchan1 <indexchan2)
		{
			int temp = arr[indexchan1];
			arr[indexchan1] = arr[indexchan2];
			arr[indexchan2] = temp;
		}
		indexchan1++;
		indexchan2--;
	}

	int indexle1 = 0;
	int indexle2 = size - 1;

	while (indexle1 < indexle2)
	{
		while (arr[indexle1] % 2 == 0)
		{
			indexle1++;
		}

		while (arr[indexle2] % 2 == 0)
		{
			indexle2--;
		}

		if (indexle1 < indexle2)
		{
			int temp = arr[indexle1];
			arr[indexle1] = arr[indexle2];
			arr[indexle2] = temp;
		}
		indexle1++;
		indexle2--;
	}
	return arr;
}

int * KyThuatXuLyMang::bai291(int *& arr, int & size)
{
	int chiSoLonNhat = 0;
	int chiSoNhoNhat = 0;
	int giaTriLonNhat = arr[0];
	int giaTriNhoNhat = arr[0];

	for (int i = 0; i< size; i++)
	{
		if (arr[i] > giaTriLonNhat)
		{
			giaTriLonNhat = arr[i];
			chiSoLonNhat = i;
		}
		if (arr[i] < giaTriNhoNhat)
		{
			giaTriNhoNhat = arr[i];
			chiSoNhoNhat = i;
		}
	}
	arr[chiSoNhoNhat] = arr[chiSoNhoNhat] + arr[chiSoLonNhat];
	arr[chiSoLonNhat] = arr[chiSoNhoNhat] - arr[chiSoLonNhat];
	arr[chiSoNhoNhat] = arr[chiSoNhoNhat] - arr[chiSoLonNhat];

	return arr;
}

float * KyThuatXuLyMang::bai292(float *& arr, float & size)
{
	for (int i = 0; i< size; i++)
	{
		arr[i] = round(arr[i]);
	}
	return arr;
}

int main()
{
	/************************************
	|Bai 280:
	int size = 10;
	int* arr = new int[size];
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 3;
	arr[4] = 1;
	arr[5] = 5;
	arr[6] = 6;
	arr[7] = 1;
	arr[8] = 8;
	arr[9] = 1;
	KyThuatXuLyMang().bai280(arr, size);
	for (int i = 0; i < size; i++)
	{
	std::cout << arr[i] << std::endl;
	}
	*************************************/

	/************************************
	Bai 281:
	int size = 10;
	int* arr = new int[size];
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 3;
	arr[4] = 1;
	arr[5] = 5;
	arr[6] = 6;
	arr[7] = 1;
	arr[8] = 8;
	arr[9] = 1;
	KyThuatXuLyMang().bai281(arr, size);
	for (int i = 0; i < size; i++)
	{
	std::cout << arr[i] << "  ";
	}
	*************************************/

	/************************************
	Bai 282:
	int size = 10;
	int* arr = new int[size];
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 3;
	arr[4] = 1;
	arr[5] = 5;
	arr[6] = 6;
	arr[7] = 1;
	arr[8] = 8;
	arr[9] = 1;
	KyThuatXuLyMang().bai282(arr, size);
	for (int i = 0; i < size; i++)
	{
	std::cout << arr[i] << "  ";
	}
	*************************************/
	

	/***********************************
	Bai 283:
	int size = 9;
	int* arr = new int[size];
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 3;
	arr[4] = 1;
	arr[5] = 5;
	arr[6] = 6;
	arr[7] = 1;
	arr[8] = 8;

	KyThuatXuLyMang().bai283(arr, size);
	for (int i = 0; i < size; i++)
	{
	std::cout << arr[i] << "  ";
	}
	***********************************/

	/************************************
	bai 284
	int size = 9;
	int* arr = new int[size];
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 24;
	arr[4] = 1;
	arr[5] = 56;
	arr[6] = 6;
	arr[7] = 1;
	arr[8] = 8;
	for (int i = 0; i < size; i++)
	{
	std::cout << arr[i] << "  ";
	}
	std::cout << std::endl;
	KyThuatXuLyMang().bai284(arr, size);
	for (int i = 0; i < size; i++)
	{
	std::cout << arr[i] << "  ";
	}
	*************************************/
	

	/*****************************************
	Bai 285:

	********************************************/
/**************************************
Bai 286:
int size = 9;
int* arr = new int[size];
arr[0] = 0;
arr[1] = -1;
arr[2] = 2;
arr[3] = 24;
arr[4] = -1;
arr[5] = 56;
arr[6] = 6;
arr[7] = -1;
arr[8] = 8;
for (int i = 0; i < size; i++)
{
std::cout << arr[i] << "  ";
}
std::cout << std::endl;
KyThuatXuLyMang().bai285(arr, size);
for (int i = 0; i < size; i++)
{
std::cout << arr[i] << "  ";
}
****************************************/
/**************************************
Bai 286 basic
int size = 9;
int* arr = new int[size];
arr[0] = 0;
arr[1] = -1;
arr[2] = 2;
arr[3] = 24;
arr[4] = -1;
arr[5] = 56;
arr[6] = 6;
arr[7] = -1;
arr[8] = 8;
for (int i = 0; i < size; i++)
{
std::cout << arr[i] << "  ";
}
std::cout << std::endl;
KyThuatXuLyMang().bai286_dich1phantu(arr, size);
for (int i = 0; i < size; i++)
{
std::cout << arr[i] << "  ";
}
***************************************/

/**************************************
Bai 286:
int size = 9;
int* arr = new int[size];
arr[0] = 0;
arr[1] = -1;
arr[2] = 2;
arr[3] = 24;
arr[4] = -1;
arr[5] = 56;
arr[6] = 6;
arr[7] = -1;
arr[8] = 8;
for (int i = 0; i < size; i++)
{
std::cout << arr[i] << "  ";
}
std::cout << std::endl;
KyThuatXuLyMang().bai286(arr, size, 4);
for (int i = 0; i < size; i++)
{
std::cout << arr[i] << "  ";
}
**************************************/

/**************************************
Bai 287:
int size = 9;
int* arr = new int[size];
arr[0] = 0;
arr[1] = -1;
arr[2] = 2;
arr[3] = 24;
arr[4] = -1;
arr[5] = 56;
arr[6] = 6;
arr[7] = -1;
arr[8] = 8;
for (int i = 0; i < size; i++)
{
std::cout << arr[i] << "  ";
}
std::cout << std::endl;
KyThuatXuLyMang().bai287(arr, size, 4);
for (int i = 0; i < size; i++)
{
std::cout << arr[i] << "  ";
}
***************************************/
						

/***************************************
Bai 288:
int size = 9;
int* arr = new int[size];
arr[0] = 0;
arr[1] = -1;
arr[2] = 2;
arr[3] = 24;
arr[4] = -1;
arr[5] = 56;
arr[6] = 6;
arr[7] = -1;
arr[8] = 8;

KyThuatXuLyMang().bai288(arr, size);
****************************************/


/****************************************
Bai 289:
int size = 9;
int* arr = new int[size];
arr[0] = 0;
arr[1] = -1;
arr[2] = 2;
arr[3] = 24;
arr[4] = -1;
arr[5] = 56;
arr[6] = 6;
arr[7] = -1;
arr[8] = 8;

KyThuatXuLyMang().bai289(arr, size);
****************************************/

/***************************************
Bai 290:
int size = 9;
int* arr = new int[size];
arr[0] = 0;
arr[1] = -3;
arr[2] = 2;
arr[3] = 24;
arr[4] = -1;
arr[5] = 56;
arr[6] = 6;
arr[7] = -1;
arr[8] = 8;
for (int i = 0; i < size; i++)
{
std::cout << arr[i] << "  ";
}
std::cout << std::endl;
KyThuatXuLyMang().bai290(arr, size);
for (int i = 0; i < size; i++)
{
std::cout << arr[i] << "  ";
}
****************************************/


/******************************************
Bai 291:
int size = 9;
int* arr = new int[size];
arr[0] = 0;
arr[1] = -3;
arr[2] = 2;
arr[3] = 24;
arr[4] = -1;
arr[5] = 56;
arr[6] = 6;
arr[7] = -1;
arr[8] = 8;
for (int i = 0; i < size; i++)
{
std::cout << arr[i] << "  ";
}
std::cout << std::endl;
KyThuatXuLyMang().bai291(arr, size);
for (int i = 0; i < size; i++)
{
std::cout << arr[i] << "  ";
}
*******************************************/


/******************************************
Bai 292:

*******************************************/
float size = 9;
float* arr = new float[size];
arr[0] = 0.1f;
arr[1] = -3.5f;
arr[2] = 2.5f;
arr[3] = 24.8f;
arr[4] = -1.23f;
arr[5] = 56.50f;
arr[6] = 6.73f;
arr[7] = -1.14f;
arr[8] = 8.2f;
for (int i = 0; i < size; i++)
{
	std::cout << arr[i] << "  ";
}
std::cout << std::endl;
KyThuatXuLyMang().bai292(arr, size);
for (int i = 0; i < size; i++)
{
	std::cout << arr[i] << "  ";
}
return 1;
}





 