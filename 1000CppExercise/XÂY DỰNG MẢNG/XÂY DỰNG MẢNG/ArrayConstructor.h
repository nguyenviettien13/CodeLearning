#pragma once
#include <vector>

class ArrayConstructor
{
public:
	ArrayConstructor();
	~ArrayConstructor();

	/***************************************
	Bai 307:
	Cho mảng một chiều các số nguyên a. Hãy tạo mảng b từ mảng a, sao
	cho mảng b chỉ chứa các giá trị lẻ.
	****************************************/
	std::vector<int>& bai307(const int const * arr, int size);


	/******************************************
	Bai 308:
	Cho mảng một chiều các số thực a. Hãy tạo mảng b từ mảng a, sao cho
	mảng b chỉ chứa các giá trị âm.
	*******************************************/
	std::vector<int>& bai308(const int const * arr, int size);

	/******************************************
	Bai 309:
	Cho mảng một chiều các số thực a. Hãy tạo mảng b từ mảng a, với b[i]
	= tổng các phần tử lân cận với a[i] trong mảng a.
	*******************************************/
	int * bai309(const int const * arr, int size);

	/******************************************
	Bai 310:
	Cho mảng một chiều các số nguyên a. Hãy tạo mảng b từ mảng a, sao
	cho mảng b chỉ chứa các số nguyên tố trong mảng a.
	*******************************************/
	std::vector<int>& bai310(const int const* arr, int size);
	bool soNguyenTo(int N);
};

