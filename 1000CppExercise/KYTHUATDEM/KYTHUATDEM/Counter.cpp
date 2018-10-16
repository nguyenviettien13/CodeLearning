#include "Counter.h"
#include <iostream>
#include <assert.h>
#include <map>
#include <vector>
#include <limits>

Counter::Counter()
{
}


Counter::~Counter()
{
}

int Counter::count216(const int const * arr, int size)
{
	std::wcout << "Bat dau ham count216" << std::endl;
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			count++;
		}
	}
	std::wcout << "Ket thuc ham count216" << std::endl;
	return count;
}

int Counter::count217(const int const * arr, int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 7 == 0)
		{
			count++;
		}
	}
	return count;
}

int Counter::count218(const int const * arr, int size)
{
	int count = 0; 
	for (int i = 0; i < size; i++)
	{
		if (soDoiXung(arr[i]))
		{
			count++;
		}
	}
	return count;
}

bool Counter::soDoiXung(int N)
{
	int _N = N;
	int soSauKhiLat = 0;
	while (_N != 0)
	{
		soSauKhiLat = soSauKhiLat * 10 + _N % 10;
		_N /= 10;
	}
	return soSauKhiLat == N;
}

int Counter::count219(const int const * arr, int size, int N)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == N)
		{
			count++;
		}
	}
	return count;
}

int Counter::count220(const int const * arr, int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 10 == 5)
		{
			count++;
		}
	}
	return count;
}

int Counter::count221(const int const * arr, int size)
{
	std::wcout << "Bat dau ham count221" << std::endl;
	int chan = 0;
	int le = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			chan++;
		}
		else
		{
			le++;
		}
	}
	std::wcout << "So phan tu chan: " << chan << " so phan tu le: " << le << std::endl;
	std::wcout << "Ket thuc ham count221" << std::endl;
	if (chan > le) return -1;
	if (chan < le) return 1;
	return 0;
}

int Counter::count225(const int const * arr, int size)
{
	assert(arr != NULL);
	int max = arr[0];
	int soluong = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == max)
		{
			soluong++;
		}
		else if(arr[i] > max)
		{
			max = arr[i];
			soluong = 1;
		}
	}
	return soluong;
}

int Counter::count226(const int const * arr, int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (keChan(arr, i))
		{
			count++;
		}
	}
	return count;
}

bool Counter::keChan(const int const * arr, int id)
{
	try
	{
		if (arr[id] % 2 == 0 && arr[id -1]%2 == 0)
		{
			return true;
		}
	}
	catch(typename std::out_of_range )
	{
		
	}
	try
	{
		if (arr[id] % 2 == 0 && arr[id - 1] % 2 == 0)
			return true;
	}
	catch (typename std::out_of_range)
	{
		
	}
	return false;
}

int Counter::count227(const int const * arr, int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (traiDau(arr, i))
		{
			count++;
		}
	}
	return count;
}

bool Counter::traiDau(const int const * arr, int id)
{
	try
	{
		if (arr[id] * arr[id - 1] < 0)
			return true;
	}
	catch (const std::exception&)
	{

	}

	try
	{
		if (arr[id] * arr[id + 1] < 0)
			return true;
	}
	catch (const std::exception&)
	{

	}
	return false;
}

int Counter::count228(const int const * arr, int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		try
		{
			if (cungDauVoiDangTruoc(arr, i) && (abs(arr[i]) > abs(arr[i - 1])))
				count++;
		}
		catch (const std::exception&)
		{
		}
	}
	return count;
}

bool Counter::cungDauVoiDangTruoc(const int const * arr, int id)
{
	try
	{
		if (arr[id] * arr[id - 1])
			return true;
	}
	catch (const std::exception&)
	{

	}
	return false;
}

int Counter::count229(const int const * arr, int size)
{

	std::map<int, int> mangcacphantuphanbiet;//value va key bang nhau

	for (int i = 0; i < size; i++)
	{
		if (mangcacphantuphanbiet.find(arr[i]) == mangcacphantuphanbiet.end())
		{
			mangcacphantuphanbiet[arr[i]] = arr[i];
		}
	}
	return mangcacphantuphanbiet.size();
}

std::map<long, long>& Counter::count230(const int const * arr, int size)
{
	std::map<long, long>* bangthongke = new std::map<long, long>;
	std::map<long, long>& bangthongkerf = *bangthongke;
	for (int i = 0; i < size; i++)
	{
		if (bangthongkerf.find(arr[i]) != bangthongkerf.end())//da co trong bang
			bangthongkerf[arr[i]] += 1;
		else
		{
			bangthongkerf[arr[i]] = 1;
		}
	}
	for (std::map<long, long>::iterator it = bangthongkerf.begin(); it != bangthongkerf.end(); ++it)
	{
		std::cout << it->first << " => " << it->second << '\n';
	}


	//for (long i = 0; i < 100000000; i++)
	//{
	//	if (i % 100000 == 0) std::wcout << i << std::endl;
	//	if (bangthongkerf.find(i) != bangthongkerf.end())//da co trong bang
	//		bangthongkerf[i] += 1;
	//	else
	//	{
	//		bangthongkerf[i] = 1;
	//	}
	//}
	return bangthongkerf;
}

std::map<long, long>& Counter::count231(const int const * arr, int size)
{
	std::cout << "Bat dau count231:" << std::endl;
	std::map<long, long>* bangthongke = new std::map<long, long>;
	std::map<long, long>& bangthongkerf = *bangthongke;
	for (int i = 0; i < size; i++)
	{
		if (bangthongkerf.find(arr[i]) != bangthongkerf.end())//da co trong bang
			bangthongkerf[arr[i]] += 1;
		else
		{
			bangthongkerf[arr[i]] = 1;
		}
	}
	for (std::map<long, long>::iterator it = bangthongkerf.begin(); it != bangthongkerf.end(); it++)
	{
		if ((*it).second == 1)
		{
			std::wcout << (*it).first << "___" << (*it).second << std::endl;
		}
	}
	std::cout << "Ket thuc count231:" << std::endl;
	return bangthongkerf;
}

int Counter::count234(const float const * arr1,int size1, const float const * arr2, int size2)
{
	
	std::map<float, int> thongkephantu = std::map<float, int>();
	//Cách 1: Su dung bang thong ke, khong can phai sap xep mang
	for (int i = 0; i < size1; i++)
	{
		thongkephantu[arr1[i]] = 1;
	}
	for (int i = 0; i < size2; i++)
	{
		if (thongkephantu.find(arr2[i]) == thongkephantu.end())
		{
			thongkephantu[arr2[i]] = 1;
		}
		else
		{
			thongkephantu[arr2[i]] = 0;
		}
	}
	for (std::map<float, int>::iterator it = thongkephantu.begin(); it!= thongkephantu.end(); it++)
	{
		if ((*it).second == 1)
		{
			std::cout << "+" << (*it).first << std::endl;
		}
	}
	return 1;
}

int Counter::count234_v2(const float const * arr1, int size1, const float const * arr2, int size2)
{
	float *arr11 = new float[size1];
	float *arr22 = new float[size2];


	memcpy(arr11, arr1, size1 * sizeof(float));
	memcpy(arr22, arr2, size2 * sizeof(float));
	quickSort(arr11, 0, size1 - 1);		// ta giả sử rằng mảng gồm toàn phần tử phân biệt
	quickSort(arr22, 0, size2 - 1);		// ta giả sử rằng mảng gồm toàn phần tử phân biệt


	float tgArr1 = arr22[0];
	float tgArr2 = arr22[0];
	int index1 = 0;
	int index2 = 0;
	std::vector<float> ds;

	while (index1 < size1 && index2 < size2)
	{
		if (tgArr1 < tgArr2)
		{
			ds.push_back(tgArr1);
			index1++;//sau dong nay no se tro vao phan tu dau tien lh hoac bang tgArr2
			tgArr1 = arr11[index1];
		}
		else if(abs(tgArr1 - tgArr2) <0.0000001)//2 trung gian bang nhau
		{
			index1++;
			tgArr1 = arr11[index1];
			index2++;
			tgArr2 = arr22[index2];
		}
		else
		{
			ds.push_back(tgArr2);
			index2++;
			tgArr2 = arr22[index2];
		}
	}
	for (int i = index1; i < size1; i++)
	{
		ds.push_back(arr11[i]);
	}
	for (int i = index2; i < size2; i++)
	{
		ds.push_back(arr22[i]);
	}
	return 0;
}

void Counter::quickSort(float* arr, int low, int high)
{
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
}

int Counter::partition(float *arr, int low, int high)
{
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
}

void Counter::swap(float * a, float * b)
{
	{
		float t = *a;
		*a = *b;
		*b = t;
	}
}

int Counter::count235(const float const * arr1, int size1, const float const * arr2, int size2)
{
	std::map<float, int> thongkephantu = std::map<float, int>();
	//Cách 1: Su dung bang thong ke, khong can phai sap xep mang
	for (int i = 0; i < size1; i++)
	{
		thongkephantu[arr1[i]] = 1;
	}
	for (int i = 0; i < size2; i++)
	{
		if (thongkephantu.find(arr2[i]) == thongkephantu.end())
		{
			thongkephantu[arr2[i]] = 1;
		}
		else
		{
			thongkephantu[arr2[i]] = 0;
		}
	}

	int count = 0;
	for (std::map<float, int>::iterator it = thongkephantu.begin(); it != thongkephantu.end(); it++)
	{
		if ((*it).second == 0)
		{
			count++;
		}
	}
	return count;
}

int Counter::count236(const float const * arr1, int size1, const float const * arr2, int size2)
{
	std::map<float, int> mang1;

	for (int i = 0; i < size1; i++)
	{
		if (mang1.find(arr1[1]) == mang1.end())
		{
			mang1[arr1[i]] = 0;
		}
	}

	for (int i = 0; i < size2; i++)
	{
		if (mang1.find(arr2[i]) != mang1.end())
		{
			mang1[arr2[i]] += 1;
		}
	}

	for (std::map<float, int>::iterator it = mang1.begin(); it != mang1.end(); it++)
	{
		if ((*it).second > 0)
		{
			std::cout << (*it).first << "---" << (*it).second << std::endl;
		}
	}
	return 0;
}

int main()
{
	int arr[] = { 8, 212, -44, 1, 212, 31, 4, 6, 8 };
	
	//Bai 216
	std::wcout << "So phan tu chan cua mang la : " << Counter().count216(arr, 9) << std::endl;
	
	//Bai 217
	std::wcout << "So phan tu chia het cho 7 cua mang la : " << Counter().count217(arr, 9) << std::endl;

	//Bai 218
	std::wcout << "So phan tu doi xung cua mang la : " << Counter().count218(arr, 9) << std::endl;

	//Bai 219
	std::wcout << "So phan tu 5 xuat hien trong mang so lan la : " << Counter().count219(arr, 9, 5) << std::endl;

	//Bai 220
	std::wcout << "So phan tu co tan cung la 5 trong mang la: " << Counter().count220(arr, 9) << std::endl;

	//Bai 221
	std::wcout << "Tuong quan so luong phan tu chan va le trong mang la: " << Counter().count221(arr, 9) << std::endl;

	//Bai 225
	std::wcout << "So luong phan tu lon nhat trong mang la: " << Counter().count225(arr, 9) << std::endl;

	//Bai 226
	std::wcout << "So luong phan tu ke chan trong mang la: " << Counter().count226(arr, 9) << std::endl;

	//Bai 227
	std::wcout << "So luong phan tu trai dau mang la: " << Counter().count227(arr, 9) << std::endl;

	//Bai 228
	std::wcout << "So luong phan tu thoa man cua mang la: " << Counter().count228(arr, 9) << std::endl;

	//Bai 229
	std::wcout << "So luong phan tu phan biet cua mang la: " << Counter().count229(arr, 9) << std::endl;

	//Bai 230
	std::wcout << "Thong ke cac phan tu va so lan xuat hien cua no trong mang la: " << std::endl;
	std::map<long, long> bangthongke = Counter().count230(arr, 9);
	
	//Bai 231
	bangthongke = Counter().count231(arr, 9);

	//Bai 234
	float arr1[] = { 8.5f, -44.5f, 1.5f, 212.5f, 31.5f, 4.5f, 6.5f, 19.5f };
	float arr2[] = { 8.51f, -44.51f, 1.5f, 212.51f, 31.51f, 4.51f, 6.51f, 9.51f , 10.5f};
	Counter().count234(arr1, 8, arr2, 8);
	Counter().count236(arr1, 8, arr2, 8);
	Counter().count234_v2(arr1, 8, arr2, 9);
	
	return 1;
}