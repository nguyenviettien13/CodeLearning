#include "Lister.h"
#include <exception>
#include <math.h>

Lister::Lister()
{
}


Lister::~Lister()
{
}

void Lister::lietKeCacPhanTuChanTrongDoan(const int const * arr, int size, int min, int max)
{
	std::cout << "lietKeCacPhanTuChanTrongDoan bdau" << std::endl;
	for (int i = 0; i < size; i++)
	{
		//kiem tra tinh chan
		if (arr[i] % 2 == 0)
		{
			//kiem tra tinh thuoc doan
			if (arr[i] >= min && arr[i] <= max)
			{
				std::cout << arr[i] << std::endl;
			}
		}
	}
	std::cout << "lietKeCacPhanTuChanTrongDoan ketthuc" << std::endl;
}

void Lister::lietKe181(const int const * arr, int size)
{
	std::cout << "Bat dau : lietKe181" << std::endl;
	for (int i = 0; i < size; i++)
	{
		bool TonTaiLanCanChan = kiemTraLanCanChan(arr, i - 1, i + 1);
		if (TonTaiLanCanChan)
		{
			std::cout << arr[i] << std::endl;
		}
	}
	std::cout << "Ket thuc : lietKe181" << std::endl;
}

bool Lister::kiemTraLanCanChan(const int const * arr, int lanCanTraiId, int lanCanPhaiId)
{
	try
	{
		if (arr[lanCanTraiId] % 2 == 0)
			return true;
	}
	catch (std::out_of_range e)
	{
	}
	try
	{
		if (arr[lanCanPhaiId] % 2 == 0)
			return true;
	}
	catch (std::out_of_range e)
	{
	}
	return false;
}

void Lister::lietKe184(const int const * arr, int size)
{
	std::cout << "Bat dau: Lietke 184" << std::endl;
	std::vector<int> viTriCacSoNguyenTo;
	for (int i = 0; i < size; i++)
	{
		if (isPrimeNumber(arr[i]))
		{
			viTriCacSoNguyenTo.push_back(arr[i]);
		}
	}
	for (int i = 0; i < viTriCacSoNguyenTo.size(); i++)
	{
		std::cout << viTriCacSoNguyenTo[i] << std::endl;
	}
	std::cout << "Ket thuc : Lietke 184" << std::endl;
}

bool Lister::isPrimeNumber(int N)
{
	for (int i = 2; i <= sqrt(N); i++)
	{
		if (N%i == 0) return false;
	}
	return true;
}

void Lister::lietKet185(const int const * arr, int size)
{
	std::vector<int> cacSoChinhPhuong;
	for (int i = 0; i < size; i++)
	{
		if (isSquare(arr[i]))
		{
			cacSoChinhPhuong.push_back(arr[i]);
		}
	}
	for (int i = 0; i < cacSoChinhPhuong.size(); i++)
	{
		std::cout << cacSoChinhPhuong[i] << std::endl;
	}
}

bool Lister::isSquare(int N)
{
	int intSqrt = sqrt(N);
	return N == intSqrt * intSqrt;
}

void Lister::lietKe186(const int const * arr, int size)
{
	std::cout << "Bat dau: Liet Ke 186" << std::endl;
	int giaTriAmDauTien =0;
	int tagDaTimThay = false;
	std::vector<int> mangChiSo;
	for (int i = 0; i < size; i++)
	{
		if (!tagDaTimThay)
		{
			if (arr[i] < 0)
			{
				giaTriAmDauTien = arr[i];
				mangChiSo.push_back(i);
				tagDaTimThay = true;
			}
		}
		else
		{
			if (arr[i] == giaTriAmDauTien)
			{
				mangChiSo.push_back(i);
			}
		}
	}
	
	for (int i = 0; i < mangChiSo.size(); i++)
	{
		std::cout << mangChiSo[i] << std::endl;
	}
	std::cout << "Ket thuc: Liet Ke 186" << std::endl;
}

void Lister::lietKe188(const int const * arr, int size)
{
	bool tonTaiSoChan = false;
	int soChanMax = 0;
	std::vector<int> vectorChiSo;
	for (int i = 0; i < size; i++)
	{
		if (!tonTaiSoChan)
		{
			if (arr[i] % 2 == 0)
			{
				tonTaiSoChan = true;
				soChanMax = arr[i];
				vectorChiSo.push_back(i);
			}
		}
		else
		{
			if (arr[i] % 2 == 0)
			{
				if (arr[i] == soChanMax)
				{
					vectorChiSo.push_back(i);
				}
				else if (arr[i] > soChanMax)
				{
					vectorChiSo.clear();
					vectorChiSo.push_back(i);
					soChanMax = arr[i];
				}
			}
		}
	}

	//liet ket
	if (tonTaiSoChan)
	{
		std::cout << "Bat dau: lietKe188" << std::endl;
		for (int i = 0; i < vectorChiSo.size(); i++)
		{
			std::cout << vectorChiSo[i] << std::endl;
		}
		std::cout << "Ket thuc: lietKe188" << std::endl;
	}
	else
	{
		std::cout << "Ca cai mag khong ton tai phan tu chan nao" << std::endl;
	}
	
}

void Lister::lietKe189(const int const * arr, int size)
{
	std::vector<int> danhSachCacSoNguyenToBatDauBangChuSoLe;
	for (int i = 0; i < size; i++)
	{
		if (isPrimeNumber(arr[i]) && batDauBangChuSoLe(arr[i]))
		{
			danhSachCacSoNguyenToBatDauBangChuSoLe.push_back(arr[i]);
		}
	}
	std::cout << "Bat dau : lietKe189" << std::endl;
	for (int i = 0; i < danhSachCacSoNguyenToBatDauBangChuSoLe.size();i++)
	{
		std::cout << danhSachCacSoNguyenToBatDauBangChuSoLe[i] << std::endl;
	}
	std::cout << "Ket thuc: lietKe189" << std::endl;
}

bool Lister::batDauBangChuSoLe(int N)
{
	int chuSoDauTien;
	while (N != 0)
	{
		chuSoDauTien = N % 10;
		N /= 10;
	}
	return chuSoDauTien%2 == 1;
}

void Lister::lietKe190(const int const * arr, int size)
{
	std::vector<int> dsChuaCacSoGomToanChuSoLe;
	for (int i = 0; i < size; i++)
	{
		if (toanChuSoLe(arr[i]))
		{
			dsChuaCacSoGomToanChuSoLe.push_back(arr[i]);
		}
	}

	std::cout << "Bat dau: lietKe190" << std::endl;
	for (int i = 0; i < dsChuaCacSoGomToanChuSoLe.size(); i++)
	{
		std::cout << dsChuaCacSoGomToanChuSoLe[i] << std::endl;
	}
	std::cout << "ket thuc: lietKe190" << std::endl;
}

bool Lister::toanChuSoLe(int N)
{
	int chuso;
	while (N!= 0)
	{
		chuso = N % 10;
		if (chuso % 2 == 0) return false;
		N /= 10;
	}
	return true;
}

void Lister::lietKe191(const int const * arr, int size)
{
	std::vector<int> danhSachCacDiemCucDai;
	for (int i = 0; i < size; i++)
	{
		if (isCucDai(arr, i))
		{
			danhSachCacDiemCucDai.push_back(arr[i]);
		}
	}
	std::cout << "Bat dau liet ke 191" << std::endl;
	for (int i = 0; i < danhSachCacDiemCucDai.size(); i++)
	{
		std::cout << danhSachCacDiemCucDai[i] << std::endl;
	}
	std::cout << "Ketthuc liet ke 191" << std::endl;
}

bool Lister::isCucDai(const int const * arr, int Id)
{
	bool isCucDai = true;
	try
	{
		if (arr[Id + 1] > arr[Id])
		{
			isCucDai = false;
		}
	}
	catch (std::out_of_range)
	{

	}

	try
	{
		if (arr[Id - 1] > arr[Id])
		{
			isCucDai = false;
		}
	}
	catch (std::out_of_range)
	{

	}
	return isCucDai;
}

void Lister::lietKe192(const int const * arr, int size)
{
	std::vector<int> mangCacSoBatDauBangChuSoChan;
	for (int i = 0; i < size; i++)
	{
		if (isBatDauBangChuSoChan(arr[i]))
		{
			mangCacSoBatDauBangChuSoChan.push_back(arr[i]);
		}
	}
	std::cout << "Bat dau lietKe192" << std::endl;
	for (int i = 0; i< mangCacSoBatDauBangChuSoChan.size(); i++)
	{
		std::cout << mangCacSoBatDauBangChuSoChan[i] << std::endl;
	}
	std::cout << "Ket thuc:  lietKe192" << std::endl;
}

bool Lister::isBatDauBangChuSoChan(int N)
{
	int digit =0;
	while (N != 0)
	{
		digit = N % 10;
		N /= 10;
	}
	return digit%2 == 0;
}

void Lister::lietKe193(const int const * arr, int size)
{
	std::vector<int> dsCacSoCoDang3k;
	for (int i = 0; i < size; i++)
	{
		if (coDang3k(arr[i]))
		{
			dsCacSoCoDang3k.push_back(arr[i]);
		}
	}
	std::cout << "Bat dau: lietKe193 " << std::endl;
	for (int i = 0; i < dsCacSoCoDang3k.size(); i++)
	{
		std::cout << dsCacSoCoDang3k[i] << std::endl;
	}
	std::cout << "Ket thuc: lietKe193 " << std::endl;
}

bool Lister::coDang3k(int N)
{
	if (N == 1) return false;
	while (N != 1)
	{
		if (N % 3 != 0) return false;
		N /= 3;
	}
	return true;
}

void Lister::lietKe194(int * arr, int size)
{
	std::cout << "Bat dau lietKe94 " << std::endl;
	//xap xep lai mang
	quicksort(arr, 0, size - 1);
	
	//duyet qua mang da sap xep de tim kiem
	int khoangcachMin = abs(arr[0] - arr[1]);
	int khoangcach = abs(arr[0] - arr[1]);
	int index = 0;
	for (int i = 1; i < size; i++)
	{
		khoangcach = abs(arr[i] - arr[i - 1]);
		if (khoangcach < khoangcachMin)
		{
			khoangcachMin = khoangcach;
			index = i - 1;
		}
	}
	std::cout << "khoang cach lon nhat la: " << khoangcachMin << std::endl;
	std::cout << "khoang cach giua hai phan tu : " << arr[index] << " & " << arr[index + 1] << std::endl;
	std::cout << "Ket thuc lietKe94 " << std::endl;
}

void Lister::quicksort(int * arr, int left, int right)
{
	//
	if (left < right)
	{

		int pindex = right;

		for (int i = left; i < pindex; i++)
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

void Lister::lietKe195(int * arr, int size)
{
	quicksort(arr, 0, size - 1);
	for (int i = 0; i < size - 2; i++)
	{
		for (int j = i + 1; j < size - 1; j++)
		{
			for (int k = j + 1; k < size; k++)
			{
				if (arr[i] + arr[j] == arr[k])
				{
					std::cout << arr[i] << " + " << arr[j] << " = " << arr[k] << std::endl;
				}
				else if (arr[i] + arr[j] > arr[k])
				{
					//continue
				}
				else  if (arr[i] + arr[j] < arr[k])
				{
					break;
				}
			}
		}
	}
}

void Lister::lietKe196(const float const * arr, int size)
{
	std::cout << "Bat dau lietKe196" << std::endl;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			std::cout << arr[i] << std::endl;
		}
	}

	std::cout << "Ket thuc lietKe196 " << std::endl;
}

void Lister::lietKe197(const int const * arr, int size)
{
	std::cout << "Bat dau lietke197" << std::endl;
	for (int i = 0; i < size; i++)
	{
		if (batDauBangChuSoLe(arr[i]))
		{
			std::cout << arr[i] << std::endl;
		}
	}
	std::cout << "Ket thuc lietke197" << std::endl;
}






int main()
{
	int arr[] = { 1, 2, -3, 10, 5, -6, 8, -3 , 9, 10, 204284 };
	Lister().lietKeCacPhanTuTrongDoan(arr, 7, 2, 6);

	float arr1[] = { 1.0f, 3.0f , -2.0f ,4.0f, -5.0f, 7.0f, -10.0f, 9.0f, 30.0f };
	Lister().lietKeCacPhanTuTrongDoan(arr1, 9, 2.5f, 15.5f);


	Lister().lietKeCacPhanTuChanTrongDoan(arr, 7, 2, 6);

	Lister().lietke179(arr, 7);
	Lister().lietke179(arr1, 9);


	Lister().lietke180(arr, 7);
	Lister().lietke180(arr1, 9);

	Lister().lietKe181(arr, 7);

	Lister().lietKe182(arr, 7);
	Lister().lietKe182(arr1, 9);

	Lister().lietKeViTriLonNhat(arr, 7);
	Lister().lietKeViTriLonNhat(arr1, 9);

	Lister().lietKe184(arr, 7);

	Lister().lietKet185(arr, 7);


	Lister().lietKe186(arr, 11);

	Lister().lietKe187(arr, 11);
	Lister().lietKe187(arr1, 9);


	Lister().lietKe188(arr, 11);

	Lister().lietKe189(arr, 11);

	Lister().lietKe190(arr, 11);

	Lister().lietKe191(arr, 11);
	
	Lister().lietKe192(arr, 11);
	
	Lister().lietKe193(arr, 11);
	
	Lister().lietKe194(arr, 11);
	
	int arr2[] = { 2, 3, 5, 4, 7, 9, 10, 14, 17 };
	Lister().lietKe195(arr2, 9);

	Lister().lietKe196(arr1, 9);

	Lister().lietKe197(arr, 11);
	return 1;
}

