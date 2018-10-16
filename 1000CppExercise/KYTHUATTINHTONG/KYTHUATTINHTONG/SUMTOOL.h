#pragma once
#include <exception>
#include <iostream>

class SUMTOOL
{
public:
	SUMTOOL();
	~SUMTOOL();
	/*Bai 200
	Tính tổng các phần tử trong mảng (tonggiatri).
	*/
	template <class A>
	A sum200(const A const * arr, int size);

	/*Bai 201
	Tính tổng các giá trị dương trong mảng một chiều các số thực
	*/
	template <class A>
	A sum201(const A const * arr, int size);
	/*Bai 202
	Tính tổng các giá trị có chữ số đầu tiên là chữ số lẻ trong mảng một
	chiều các số nguyên (tongdaule)
	*/
	int sum202(const int const * arr, int size);
	bool chuSoLeDauTien(int N);

	/*Bai 203
	Tính tổng các giá trị có chữ số hàng chục là chữ số 5 có trong mảng các
	số nguyên (tongchuc).
	*/
	int sum203(const int const * arr, int size);
	bool hangChucBang5(int N);

	/*
	Tính tổng các giá trị lớn hơn giá trị đứng liền trước nó trong mảng một
	chiều các số thực.	
	*/
	template <class A>
	A sum204(const A const * arr, int size);
	template <class A>
	bool lonHonSoLienTruoc(const A const * arr, int id);

	/*
	Bai 205
	Tính tổng các giá trị lớn hơn trị tuyệt đối của giá trị đứng liền sau nó
	trong mảng một chiều các số thực
	*/
	template <class A>
	A sum205(const A const * arr, int size);
	template < class A>
	bool lonHonTriTuyetDoiLienSau(const A const * arr, int id);


	/*
	Tính tổng các giá trị lớn hơn các giá trị xung quanh trong mảng một
	chiều các số thực (tongcucdai).
	Lưu ý: Một giá trị trong mảng có tối đa hai giá trị xung quanh.
	*/
	template <class A>
	int sum206(const A const * arr, int size);
	template <class A>
	bool cucDai(const A const * arr, int id);

	/* Bai 207
	Tính tổng các phần tử “cực trị” trong mảng (tongcuctri). Một phần tử
	được gọi là cực trị khi nó lớn hơn hoặc nhỏ hơn các phần tử xung
	quanh nó.
	*/
	template <class A>
	int sum207(const A const * arr, int size);
	template <class A>
	bool cucTieu(const A const * arr, int id);
	template <class A>
	bool cucTri(const A const * arr, int id);

	/*Bai 208
	Tính tổng các giá trị chính phương trong mảng một chiều các số
	nguyên (tongchinhphuong).
	*/
	int sum208(const int const * arr, int size);
	bool chinhPhuong(int N);

	/*Bai 209
	Tính tổng các giá trị đối xứng trong mảng các số nguyên
	*/
	int sum209(const int const * arr, int size);
	bool soDoiXung(int N);

	/*Bai 210
	Tính tổng các giá trị có chữ số đầu tiên là chữ số chẵn có trong mảng
	các số nguyên (tongdauchan)
	*/


	/*Bai 211
	Tính trung bình cộng các số nguyên tố trong mảng một chiều các số
	nguyên (tbnguyento).
	*/

	/*Bai 212
	Tính trung bình cộng các số dương trong mảng một chiều các số thực
	(trungbinhcong).
	*/

	/*Bai 213
	Tính trung bình cộng các giá trị lớn hơn giá trị x trong mảng một chiều
	các số thực (tbclonhon).
	*/

	/*Bai 214
	Tính trung bình nhân các giá trị dương có trong mảng một chiều các số
	thực (trungbinhnhan)
	*/
};

template<class A>
inline A SUMTOOL::sum200(const A const * arr, int size)
{
	A sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template<class A>
inline A SUMTOOL::sum201(const A const * arr, int size)
{
	A sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			sum += arr[i];
		}
	}
	return sum;
}

template<class A>
inline A SUMTOOL::sum204(const A const * arr, int size)
{
	A sum = 0;
	for (int i = 1; i < size; i++)
	{
		if (lonHonSoLienTruoc(arr, i))
		{
			sum += arr[i];
		}
	}
	return sum;
}

template<class A>
inline bool SUMTOOL::lonHonSoLienTruoc(const A const * arr, int id)
{
	try
	{
		int pindex = id - 1;
		if (arr[id] > arr[pindex])
		{
			return true;
		}
	}
	catch (typename std::out_of_range)
	{

	}
	return false;
}

template<class A>
inline A SUMTOOL::sum205(const A const * arr, int size)
{
	A sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (lonHonTriTuyetDoiLienSau(arr, i))
		{
			sum += arr[i];
		}
	}
	return sum;
}

template<class A>
inline bool SUMTOOL::lonHonTriTuyetDoiLienSau(const A const * arr, int id)
{
	try
	{
		if (arr[id] > abs(arr[id + 1]))
		{
			return true;
		}
	}
	catch (typename std::out_of_range)
	{
		
	}
	return false;
}

template<class A>
inline int SUMTOOL::sum206(const A const * arr, int size)
{
	std::wcout << L"Bat dau ham sum206 " << std::endl;
	A sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (cucDai(arr, i))
		{
			std::wcout << L"diem cuc dai : " << i << std::endl;
			sum += arr[i];
		}
	}
	std::wcout << L"Bat dau ham sum206 " << std::endl;
	return sum;
}

template<class A>
inline bool SUMTOOL::cucDai(const A const * arr, int id)
{
	try
	{
		if (arr[id] < arr[id - 1])
		{
			return false;
		}
	}
	catch(typename std::out_of_range)
	{

	}

	try
	{
		if (arr[id] < arr[id + 1])
		{
			return false;
		}
	}
	catch (typename std::out_of_range e)
	{

	}
	return true;
}

template<class A>
inline int SUMTOOL::sum207(const A const * arr, int size)
{
	A sum = 0;
	std::wcout << L"Bat dau ham sum207" << std::endl;
	for (int i = 0; i < size; i++)
	{
		if (cucTri(arr, i))
		{
			std::wcout << L"Phan tu thu " << i << " la cuc tri" << std::endl;
			sum += arr[i];
		}
	}
	std::wcout << L"Ket thuc ham sum207" << std::endl;
	return sum;
}

template<class A>
inline bool SUMTOOL::cucTieu(const A const * arr, int id)
{
	try
	{
		if (arr[id] > arr[id - 1])
		{
			return false;
		}
	}
	catch (typename std::out_of_range)
	{

	}

	try
	{
		if (arr[id] > arr[id + 1])
		{
			return false;
		}
	}
	catch (typename std::out_of_range e)
	{

	}
	return true;
}

template<class A>
inline bool SUMTOOL::cucTri(const A const * arr, int id)
{

	return (cucDai(arr, id) || cucTieu(arr, id));
}
