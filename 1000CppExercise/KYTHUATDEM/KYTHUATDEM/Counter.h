#pragma once
#include <map>
class Counter
{
public:
	Counter();
	~Counter();

	/*Bai 216
	Đếm số lượng số chẵn có trong mảng một chiều các số nguyên
	(demchan).
	*/
	int count216(const int const * arr, int size);

	/*Bai 217
	Đếm số lượng giá trị dương chia hết cho 7 trong mảng một chiều các số
	nguyên (demchiahetbay).
	*/
	int count217(const int const * arr, int size);

	/*Bai 2018
	Đếm số lượng giá trị đối xứng trong mảng các số nguyên
	(demdoixung).
	*/
	int count218(const int const * arr, int size);
	bool soDoiXung(int N);

	/*Bai  219
	Đếm số lần xuất hiện của giá trị x trong mảng một chiều các số thực
	(tanxuat)
	*/
	int count219(const int const * arr, int size, int N);

	/*Bai 220
	Hãy đếm số lượng giá trị có chữ số tận cùng bằng 5 trong mảng các số
	nguyên (demtancung).
	*/
	int count220(const int const * arr, int size);

	/*Bai 221
	Hãy cho biết sự tương quan giữa số lượng số chẵn và số lượng số lẻ
	trong mảng các số nguyên (tuongquanchanle)
		- Hàm này trả về một trong ba giá trị -1, 0, và 1.
		- Giá trị -1 có nghĩa số lượng số chẵn nhiều hơn số lẻ.
		- Giá trị 0 có nghĩa số lượng số lẻ bằng số lượng số chẵn
		- Giá trị 1 có nghĩa số lẻ nhiều hơn số chẵn.
	*/
	int count221(const int const * arr, int size);

	/*Bai 225
	Hãy đếm số lượng các giá trị lớn nhất có trong mảng một chiều các số
	thực (demlonnhat)
	*/
	int count225(const int const * arr, int size);

	/*Bai 226
	Hãy xác định số lượng các phần tử kề nhau mà cả hai đều chẵn
	(demkechan).
	*/
	int count226(const int const* arr, int size);
	bool keChan(const int const * arr, int id);

	/*BAi 227
	Hãy xác định số lượng các phần tử kề nhau mà cả hai số trái dấu nhau
	(demtraidau)
	*/
	int count227(const int const* arr, int size);
	bool traiDau(const int const * arr, int id);

	/*Bai 228
	Hãy xác định số lượng các phần tử kề nhau mà số đứng sau cùng dấu
	số đứng trước và có giá trị tuyệt đối lớn hơn (demgiatri).
	*/
	int count228(const int const* arr, int size);
	bool cungDauVoiDangTruoc(const int const* arr, int id);

	/*Bai 229
	Hãy đếm số lượng các giá trị phân biệt có trong mảng (demphanbiet).
	*/
	int count229(const int const* arr, int size);
	/*Bai 230
	Hãy đếm số lượng các giá trị phân biệt có tỏng mảng (demphanbiet)
	*/
	std::map<long, long>& count230(const int const* arr, int size);

	/*
	Bai 231
	Hãy liệt kê các giá trị xuất hiện trong mảng một chiều các số nguyên
	đúng một lần (lieketduynhat).
	*/
	std::map<long, long>& count231(const int const* arr, int size);

	/*Bai 234.
	Cho hai mảng số thực a, b. Đếm số lượng giá trị chỉ xuất hiện một
	trong hai mảng (demgiatri)
	*/
	int count234(const float const * arr1, int size1, const float const * arr2, int size2);
	int count234_v2(const float const * arr1, int size1, const float const * arr2, int size2);
	void quickSort(float *arr, int low, int high);
	int partition(float *arr, int low, int high);
	void swap(float* a, float* b);

	/*Bai 235
	Cho hai mảng a, b. Liệt kê các giá trị chỉ xuất hiện một rong hai mảng
	(lietke)
	*/
	int count235(const float const * arr1, int size1, const float const * arr2, int size2);

	/*Bai 236
	(*) Cho hai mảng a, b. Hãy cho biết số lần xuất hiện của cac phan tu cua mang a  trong
	mảng b (demsolan)
	*/
	int count236(const float const * arr1, int size1, const float const * arr2, int size2);
};
