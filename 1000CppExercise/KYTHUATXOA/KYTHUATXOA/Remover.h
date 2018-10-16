#pragma once
class Remover
{
public:
	Remover();
	~Remover();
	/***********************************************
	Bai 271
	Xóa các phần tử có chỉ số k trong mảng(xoavitri)
	***********************************************/
	int* bai271(int* & arr, int &size, int K);


	/*********************************************
	Bai 272:
	Hãy xóa tất cả các số lớn nhất trong mảng các số thực (xoalonnhat).
	*********************************************/
	int* bai272(int*& arr, int& size);


	/*********************************************
	Bai 273: 
	Hãy xóa tất cả các số âm trong mảng các số thực (xoaam)
	**********************************************/
	int * bai273(int * arr, int size);


	/*************************************************
	Bai 274:
	Hãy xóa tất cả các số chẵn trong mảng các số nguyên (xoachan)
	*************************************************/
	int*& bai274(int *& arr, int & size);
	

	/*************************************************
	Bai 274v2:
	Hãy xóa tất cả các số chẵn trong mảng các số nguyên (xoachan)
	Giống như bài 274 nhưng thêm điều kiện đó là không được 
	thay đổi thứ tự của cắc phần tử được giữ lại
	*************************************************/
	int*& bai274_v2(int *& arr, int & size);

	/*********************************************
	Bài 275:
	Hãy xóa tất cả “số chính phương” trong mảng một chiều các số nguyên
	(xoachinhphuong).
	**********************************************/

	int*& bai275(int*& arr, int&size);
	bool soChinhPhuong(int N);


	/*******************************************
	Bai 278
	Hãy xóa tất cả các phần tử có giá trị trùng với x (xoatrungx).
	********************************************/
	int*& bai278(int *& arr, int &size, int X);
	bool trungX(int a, int X);


	/*******************************************
	Bai 279
	Hãy xóa tất cả các phần tử có tần suất xuất hiện trong mảng nhiều hơn
	một lần (xoatrungtatcar).
	*******************************************/
	int*& bai279(int* & arr, int& size);
	// A utility function to swap two elements
	void swap(int* a, int* b);
	/* This function takes last element as pivot, places
	the pivot element at its correct position in sorted
	array, and places all smaller (smaller than pivot)
	to left of pivot and all greater elements to right
	of pivot */
	int partition(int arr[], int low, int high);

	/* The main function that implements QuickSort
	arr[] --> Array to be sorted,
	low  --> Starting index,
	high  --> Ending index */
	void quickSort(int arr[], int low, int high);
	bool xuatHienNhieuLan(int *arr, int index);
};

