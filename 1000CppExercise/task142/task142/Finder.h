#pragma once
class Finder
{
public:
	Finder();
	~Finder();
	/*task 142
	Tìm “giá trị nhỏ nhất” trong mảng một chiều số thực (nhonhat)
	*/
	float findMinNumber(const float const * arr, int size);

	/*task 143
	Viết hàm tìm “số chẵn đầu tiên” trong mảng các số nguyên (chandau).
	Nếu mảng không có giá trị chẵn thì hàm sẽ trả về giá trị không chẵn là -
	1.
	*/
	int findFirstEvenNumber(const int const * arr, int size);
	/*task 144
	Tìm “số nguyên tố đầu tiên” trong mảng một chiều các số nguyên
	(nguyentodau). Nếu mảng không có số nguyên tố thì trả về giá trị -1
	*/
	int findFirstPrimeNumber(const int const * arr, int size);
	/*task 145
	Tìm “số hoàn thiện đầu tiên” trong mảng một chiều các số nguyên
	(hoanthiendau). Nếu mảng không có số hoàn thiện thì trả về giá trị -1.
	*/
	int findFirstPerfectNumber(const int const* arr, int size);
	/*task 146
	Tìm giá trị âm đầu tiên trong mảng một chiều các sô thực (amdau). Nếu
	mảng không có giá trị âm thì trả về giá trị không âm là giá trị 1.
	*/
	float findFirstNegativeNumber(const float const * arr, int size);

	/*task 151
	Hãy tìm “số nguyên tố lớn nhất” trong mảng một chiều các số nguyên
	(nguyentolonnhat). Nếu mảng không có số nguyên tố thì trả về giá trị 0.
	*/
	int findMaxPrimeNumber(const int const * arr, int size);

	/*task 153
	Hãy tìm “hoàn thiện nhỏ nhất” trong mảng một chiều các số nguyên
	(hoanthiennhonhat). Nếu mảng không có số hoàn thiện thì trả về giá trị
	0.
	*/
	int findMinPerfectNumber(const int const * arr, int size);
protected:
	bool isPrime(int N);
	bool isPerfectNubmer(int N);
};

