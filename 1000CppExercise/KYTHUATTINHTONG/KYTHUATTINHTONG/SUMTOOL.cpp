#include "SUMTOOL.h"
#include <iostream>
#include <fcntl.h>
#include <io.h>


SUMTOOL::SUMTOOL()
{
}


SUMTOOL::~SUMTOOL()
{
}
int SUMTOOL::sum202(const int const * arr, int size)
{
	int sum = 0; 
	for (int i = 0; i < size; i++)
	{
		if (chuSoLeDauTien(arr[i]))
		{
			sum += arr[i];
		}
	}
	return sum;
}
bool SUMTOOL::chuSoLeDauTien(int N)
{
	int digit;
	while (N!= 0)
	{
		digit = N % 10;
		N /= 10;
	}
	return (digit % 2 == 1);
}
int SUMTOOL::sum203(const int const * arr, int size)
{
	int sum = 0; 
	for (int i = 0; i < size ; i++)
	{
		if (hangChucBang5(arr[i]))
		{
			sum += arr[i];
		}
	}
	return sum;
}
bool SUMTOOL::hangChucBang5(int N)
{
	N = N / 10;
	return (N%10 == 5);
}
int SUMTOOL::sum208(const int const * arr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (chinhPhuong(arr[i]))
		{
			sum += arr[i];
		}
	}
	return sum;
}
bool SUMTOOL::chinhPhuong(int N)
{
	int sqrtN = sqrt(N);
	return N == sqrtN*sqrtN;
}
int SUMTOOL::sum209(const int const * arr, int size)
{
	std::wcout << "Bat dau ham sum209" << std::endl;
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (soDoiXung(arr[i]))
		{
			sum += arr[i];
		}
	}
	std::wcout << "Ket thuc ham sum209" << std::endl;
	return sum;
}
bool SUMTOOL::soDoiXung(int N)
{
	int _N = N;
	int soSauKhiLat = 0;
	while (_N != 0)
	{
		soSauKhiLat = soSauKhiLat * 10 + _N % 10;
		_N /= 10;
	}

	return N == soSauKhiLat;
}
int main()
{
	/*
	Set phong chu tieng viet
	*/
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);


	int intarr[] = { 1, 525, 3, 49, -53, 6 };//size = 6
	float floatArr[] = { 1.2f, 3.4f, -3.4f, 5.6f, 9.6f, 1.7f };//size = 6

	int * intArrPointer = new int[6];
	intArrPointer[0] = 51;
	intArrPointer[1] = 2;
	intArrPointer[2] = 3;
	intArrPointer[3] = 49;
	intArrPointer[4] = 5;
	intArrPointer[5] = 56;

	float * floatArrPointer = new float[6];
	floatArrPointer[0] = 1.2f;
	floatArrPointer[1] = 3.4f;
	floatArrPointer[2] = -3.4f;
	floatArrPointer[3] = 5.6f;
	floatArrPointer[4] = 29.6f;
	floatArrPointer[5] = 1.7f;

	//Bai 200
	std::wcout << L"Tổng của intarr la: " << SUMTOOL().sum200(intarr, 6) << std::endl;
	std::wcout << L"Tổng của floatarr la: " << SUMTOOL().sum200(floatArr, 6) << std::endl;
	std::wcout << L"Tổng của intarrPointer la: " << SUMTOOL().sum200(intArrPointer, 6) << std::endl;
	std::wcout << L"Tổng của floatarrPointer la: " << SUMTOOL().sum200(floatArrPointer, 6) << std::endl;



	//Bai 201:
	std::wcout << L"Tổng các phần tử dương của intarr la: " << SUMTOOL().sum201(intarr, 6) << std::endl;
	std::wcout << L"Tổng các phần tử dương của floatarr la: " << SUMTOOL().sum201(floatArr, 6) << std::endl;
	std::wcout << L"Tổng các phần tử dương của intarrPointer la: " << SUMTOOL().sum201(intArrPointer, 6) << std::endl;
	std::wcout << L"Tổng các phần tử dương của floatarrPointer la: " << SUMTOOL().sum201(floatArrPointer, 6) << std::endl;
	
	
	//Bai 202
	std::wcout << L"Tổng các phần tử bắt đầu bằng chữ số lẻ của intarr la: " << SUMTOOL().sum202(intarr, 6) << std::endl;
	std::wcout << L"Tổng các phần tử bắt đầu bằng chữ số lẻ của intarr la: " << SUMTOOL().sum202(intArrPointer, 6) << std::endl;

	//Bai 203
	std::wcout << L"Tổng các phần tử có chữ số hàng chục bằng 5 của intarr la: " << SUMTOOL().sum203(intarr, 6) << std::endl;
	std::wcout << L"Tổng các phần tử có chữ số hàng chục bằng 5 của intarr la: " << SUMTOOL().sum203(intArrPointer, 6) << std::endl;


	//Bai 204
	std::wcout << L"Tổng các phần tử thỏa mãn lớn hơn phần tử kế trước là của intarr la: " << SUMTOOL().sum204(intarr, 6) << std::endl;
	std::wcout << L"Tổng các phần tử thỏa mãn lớn hơn phần tử kế trước là của intarr la: " << SUMTOOL().sum204(intArrPointer, 6) << std::endl;
	

	//Bai 205
	std::wcout << L"Tổng các phần tử thỏa mãn lớn hơn tri tuyet doi so lien sau của intarr la: " << SUMTOOL().sum205(intarr, 6) << std::endl;
	std::wcout << L"Tổng các phần tử thỏa mãn lớn hơn tri tuyet doi so lien sau của intarr la: " << SUMTOOL().sum205(intArrPointer, 6) << std::endl;

	//Bai 206:
	std::wcout << L"Tổng các phần tử là điểm cực đại của intarr la: " << SUMTOOL().sum206(intarr, 6) << std::endl;
	std::wcout << L"Tổng các phần tử là điểm cực đại của intarrPointer la: " << SUMTOOL().sum206(intArrPointer, 6) << std::endl;

	//Bai 207
	std::wcout << L"Tổng các phần tử là điểm cực trị của intarr la: " << SUMTOOL().sum207(intarr, 6) << std::endl;
	std::wcout << L"Tổng các phần tử là điểm cực trị của intarrPointer la: " << SUMTOOL().sum207(intArrPointer, 6) << std::endl;
	
	//Bai 208
	std::wcout << L"Tổng các phần tử là số chính phương của intarr la: " << SUMTOOL().sum208(intarr, 6) << std::endl;
	std::wcout << L"Tổng các phần tử là số chính phương của intarrPointer la: " << SUMTOOL().sum208(intArrPointer, 6) << std::endl;
	
	//Bai 209
	std::wcout << L"Tổng các phần tử là số đối xứng của intarr la: " << SUMTOOL().sum209(intarr, 6) << std::endl;
	std::wcout << L"Tổng các phần tử là số đối xứng của intarrPointer la: " << SUMTOOL().sum209(intArrPointer, 6) << std::endl;

	return 1;
}