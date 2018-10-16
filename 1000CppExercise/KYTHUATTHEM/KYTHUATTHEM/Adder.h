#pragma once
class Adder
{
public:
	Adder();
	~Adder();
	/*Bai 266.
	Hãy thêm một phần tử có giá trị x vào mảng tại vị trí k (themvitri).
	*/
	int * bai266(int* arr, int size, int N, int k);

	/*Bai 267
	Hãy viết hàm nhập mảng một chiều các số thực sao cho khi mảng nhập
	xong các giá trị trong mảng được sắp giảm dần (không sắp xếp sau khi
	nhập).
	*/
	void bai267(int* arr);


	/************************************************
	Bai 268
	Hãy tạo mảng b từ mảng a các giá trị 0, 1 để mảng có tính “tính chẵn
	lẻ” (taomangchanle).
	************************************************/
	int * bai268(const int const * arr, int size);

	/******************************************************
	Bai 269
	Hãy thêm một giá trị x vào trong mảng tăng dần mà vẫn giữ nguyên
	tính đơn điệu tăng của mảng (thembaotoan).
	*******************************************************/
	int*& bai269(int * &arr, int size);


	/******************************************************
	Bai 270
	Viết chương trình thực hiện các yêu cầu sau: Nhập mảng n số nguyên
	từ bàn phím sao cho khi nhập xong các phần tử trong mảng được sắp
	theo thứ tự tăng dần (nhapbaotoan).
	******************************************************/
	int* bai270();

	// A utility function to swap two elements
	void swap(int* a, int* b);

	int partition(int arr[], int low, int high);

	void quickSort(int arr[], int low, int high);
};

