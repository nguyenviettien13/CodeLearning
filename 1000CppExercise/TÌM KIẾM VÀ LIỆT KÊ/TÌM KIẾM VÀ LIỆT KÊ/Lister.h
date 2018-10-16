#pragma once
#include <iostream>
#include <vector>
class Lister
{
public:
	Lister();
	~Lister();
	/*
	Hãy liệt kê các số giá trị trong mảng một chiều các sô thực thuộc đoạn
	[x,y] cho trước
	*/
	template <class A>
	void lietKeCacPhanTuTrongDoan(const A const * arr, int size, A min, A max);

	/*Hãy liệt kê các số có giá trị chẵn trong mảng một chiều các số nguyên
	thuộc đoạn [x,y] cho trước (x, y là các số nguyên).
	*/
	void lietKeCacPhanTuChanTrongDoan(const int const * arr, int size, int min, int max);

	/*Bai179
	Hãy liệt kê các giá trị trong mảng mà thỏa điều kiện lớn hơn trị tuyệt
	đối của giá trị đứng liền sau nó
	*/
	template <class A>
	void lietke179(const A const * arr, int size);

	/*Bai 180
	Hãy liệt kê các giá trị trong mảng mà thỏa điều kiện nhỏ hơn trị tuyệt
	đối của giá trị đứng liền sau nó và lớn hơn giá trị đứng liền trước nó.
	*/
	template <class A>
	void lietke180(const A const * arr, int size);

	/*Bai 181
	Cho mảng một chiều các số nguyên. Hãy viết hàm liệt kê các giá trị
	chẵn có ít nhất một lân cận cũng là giá trị chẵn.
	*/
	void lietKe181(const int const * arr, int size);
	bool kiemTraLanCanChan(const int const * arr, int lanCanTraiId, int lanCanPhaiId);
	/*Bai 182
	Cho mảng một chiều các số thực. Hãy viết hàm liệt kê tất cả các giá trị
	trong mảng có ít nhất một lân cận trái dấu với nó
	*/
	template <class A>
	void lietKe182(const A const * arr, int size);
	template <class A>
	bool kiemTraLanCanTraiDau(const A const * arr, int Id);
	/*Bai 183
	Hãy liệt kê các vị trí mà giá trị tại đó là giá trị lớn nhất trong mảng một
	chiều các số thực (lietkevitrilonnhat).
	*/
	template <class A>
	int lietKeViTriLonNhat(const A const *arr, int size);

	/*Bai 184
	Hãy liệt kê các vị trí mà giá trị tại đó là số nguyên tố trong mảng một
	chiều các số nguyên (lkvitringuyento).
	*/
	void lietKe184(const int const * arr, int size);
	bool isPrimeNumber(int N);

	/*Bai 185
	Hãy liệt kê các vị trí mà giá trị tại vị trí đó là số chính phương trong
	mảng một chiều các số nguyên
	*/
	void lietKet185(const int const * arr, int size);
	bool isSquare(int N);

	/*Bai 186
	Hãy liệt kê các vị trí trong mảng một chiều các số thực mà giá trị tại vị
	trí đó bằng giá trị âm đầu tiên trong mảng.
	*/
	void lietKe186(const int const * arr, int size);

	/*Bai 187
	Hãy liệt kê các vị trí mà giá trị tại các vị trí đó bằng giá trị dương nhỏ
	nhất trong mảng một chiều các số thực
	*/
	template <class A>
	void lietKe187(const A const * arr, int size);

	/*Bai 188
	Hãy liệt kê các vị trí chẵn lớn nhất trong mảng một chiều các số
	nguyên
	*/
	void lietKe188(const int const * arr, int size);
	/*Bai 189
	Hãy liệt kê các giá trị trong mảng một chiều các số nguyên tố có chữ số
	đầu tiên là chữ số lẻ (lietketdaule).
	*/
	void lietKe189(const int const * arr, int size);
	bool batDauBangChuSoLe(int N);
	/*Bai 190
	Hãy liệt kê các giá trị có toàn chữ số lẻ trong mảng một chiều các số
	nguyên.
	*/
	void lietKe190(const int const * arr, int size);
	bool toanChuSoLe(int N);

	/*Bai 191
	Hãy liệt kê các giá trị cực đại trong mảng một chiều các số thực. một
	phần tử được gọi là cực đại khi lớn hơn các phần tử lân cận
	*/
	void lietKe191(const int const * arr, int size);
	bool isCucDai(const int const * arr, int Id);

	/*Bai 192
	Hãy liệt kê các giá trị trong mảng một chiều các số nguyên có chữ số
	đầu tiền là chữ số chẵn (liekedauchan)
	*/
	void lietKe192(const int const * arr, int size);
	bool isBatDauBangChuSoChan(int N);

	/*Bai 193
	Cho mảng một chiều các số nguyên. Hãy viết hàm liệt kê các giá trị
	trong mảng có dạng 3k thì hàm sẽ trả về giá trị 0.
	*/
	void lietKe193(const int const * arr, int size);
	bool coDang3k(int N);

	/*Bai 194
	Cho mảng số nguyên có nhiều hơn hai giá trị. Hãy liệt kê tất cả các cặp
	giá trị gần nhau nhất trong mảng (gannhaunhat).
	*/
	void lietKe194(int * arr, int size);
	void quicksort(int *arr, int l, int r);

	/*Bai 195
	Cho mảng số thực có nhiều hơn ba giá trị và các giá trị trong mảng
	khác nhau từng đôi một. Hãy liệt kê tất cả các bộ ba giá trị (a,b,c) thỏa
	điều kiện a = b + c với a, b, c là ba giá trị khác nhau trong mảng. Ví dụ:
	(6, 2, 4).
	*/
	void lietKe195(int * arr, int size);

	/*Bai 196
	Hãy liệt kê các số âm trong mảng một chiều các số thực (lietkeam)
	*/
	void lietKe196(const float const * arr, int size);

	/*Bai 197
	Hãy liệt kê các giá trị trong mảng các số nguyên có chữ số đầu tiên là
	chữ số lẻ (lietkele)
	*/
	void lietKe197(const int const * arr, int size);
};

template<class A>
inline void Lister::lietKeCacPhanTuTrongDoan(const A const * arr, int size, A min, A max)
{
	std::cout << "Bat dau phan liet ke" << std::endl;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > min && arr[i] < max)
		{
			std::cout << arr[i] << std::endl;
		}
	}
	std::cout << "Ket thuc phan liet ke" << std::endl;
}

template<class A>
inline void Lister::lietke179(const A const * arr, int size)
{
	std::cout << "bat dau lietke179" << std::endl;
	int giatrituyetdoicuasoliensau = 0;
	for (int i = size - 2; i >= 0; i--)
	{
		giatrituyetdoicuasoliensau = abs(arr[i + 1]);
		if (arr[i] > giatrituyetdoicuasoliensau)
		{
			std::cout << arr[i] << std::endl;
		}
	}
	std::cout << "ket thuc lietke179" << std::endl;
}

template<class A>
inline void Lister::lietke180(const A const * arr, int size)
{

	std::cout << "Bat dau : lietke180" << std::endl;
	A GTTDCuaSoLienSau;
	A GTTDCuaSoLienTruoc;
	for (int i = 1; i < size - 2; i++)
	{
		GTTDCuaSoLienTruoc = arr[i - 1];
		GTTDCuaSoLienSau = arr[i + 1];
		if (arr[i] > GTTDCuaSoLienTruoc && arr[i] < GTTDCuaSoLienSau)
		{
			std::cout << arr[i] << std::endl;
		}
	}
	std::cout << "Ket thuc: lietke180" << std::endl;
}

template<class A>
inline void Lister::lietKe182(const A const * arr, int size)
{
	std::cout << "Bat dau lietKe182" << std::endl;
	for (int i = 0; i < size; i++)
	{
		bool TonTaiLanCanTraiDau = kiemTraLanCanTraiDau(arr, i);
		if (TonTaiLanCanTraiDau)
		{
			std::cout << arr[i] << std::endl;
		}
	}
	std::cout << "Ket thuc lietKe182" << std::endl;
}

template<class A>
inline bool Lister::kiemTraLanCanTraiDau(const A const * arr, int Id)
{
	try
	{
		if (arr[Id] * arr[Id - 1] < 0)
		{
			return true;
		}
	}
	catch (std::out_of_range)
	{
		std::cout << "Loi luon" << std::endl;
	}

	try
	{
		if (arr[Id] * arr[Id + 1] < 0)
		{
			return true;
		}
	}
	catch (std::out_of_range)
	{
		std::cout << "Loi luon" << std::endl;
	}
	return false;
}

template<class A>
inline int Lister::lietKeViTriLonNhat(const A const * arr, int size)
{
	std::cout << "Bat dau: lietKeViTriLonNhat" << std::endl;
	std::vector<int> danhsachcacvitri;
	A max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			danhsachcacvitri.clear();
			danhsachcacvitri.push_back(i);
			max = arr[i];
		}
		else if(arr[i] == max)
		{
			danhsachcacvitri.push_back(i);
		}
		
	}
	for (int i = 0; i < danhsachcacvitri.size(); i++)
	{
		std::cout << danhsachcacvitri[i] << std::endl;
	}
	std::cout << "Ket thuc: lietKeViTriLonNhat" << std::endl;
	return 0;
}

template<class A>
inline void Lister::lietKe187(const A const * arr, int size)
{
	//tim gia tri duong nho nhat
	A SoDuongNhoNhat;
	bool daTimThaySoDuong = false;
	std::vector<int> mangCacChiSo;
	for (int i = 0; i < size; i++)
	{
		if (!daTimThaySoDuong)
		{
			if (arr[i] > 0)
			{
				daTimThaySoDuong = true;
				SoDuongNhoNhat = arr[i];
			}
		}
		else
		{
			if (arr[i] > 0 && arr[i] < SoDuongNhoNhat)
			{
				SoDuongNhoNhat = arr[i];
			}
		}
	}

	// Duyet qua mang de tim cac gia tri bang gia tri rieng nho nhat do
	if (!daTimThaySoDuong)
	{
		std::cout << "THDB: Deo ton tai so duong trong mang luon" << std::endl;
	}
	else
	{
		
		for(int i = 0; i < size; i++)
		{
			if (arr[i] == SoDuongNhoNhat)
			{
				mangCacChiSo.push_back(i);
			}
		}
	}
	//Duyet qua vector va in ra
	std::cout << "Bat dau LietKe187" << std::endl;
	for (int i = 0; i < mangCacChiSo.size(); i++)
	{
		std::cout << mangCacChiSo[i] << std::endl;
	}
	std::cout << "Ket Thuc LietKe187" << std::endl;
}
