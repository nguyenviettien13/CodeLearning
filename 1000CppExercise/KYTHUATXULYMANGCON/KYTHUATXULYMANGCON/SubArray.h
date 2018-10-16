#pragma once
#include <stack>
class SubArray
{
	std::stack<int> stackk;
	int sumInStack = 0;
public:
	SubArray();
	~SubArray();
	/************************************************************
	Bai 293.
	Liệt kê tất cả các mảng con (lietkecon) trong mảng một chiều các số
	nguyên.
	*************************************************************/

	/************************************************************
	Bai 294:
	Liệt kê tất cả các mảng con có độ dài lớn hơn 2 trong mảng một chiều
	các số nguyên (conlonhonhai).
	*************************************************************/

	/************************************************************
	Bai 295:
	Liệt kê các dãy con tăng trong mảng (lietkecontang)
	*************************************************************/
	void bai295(int * arr, int size);

	/************************************************************
	Bai 296:
	Hãy liệt kê các mảng con tăng có chứa giá trị lớn nhất (lietke) trong
	mảng
	*************************************************************/
	void bai296(int* arr, int size);


	/************************************************************
	Bai 297:
	Tim mang con tang lon co trong luong lon nhat
	*************************************************************/
	void bai297(int* arr, int size);

	/************************************************************
	Bai 298:
	Đếm số lượng mảng con tăng có độ dài lớn hơn 1 trong mảng một
	chiều các số thực (demcontang)
	************************************************************/
	int bai298(const int const* arr, int size);


	/************************************************************
	Bai 298:
	Đếm số lượng mảng con tăng có độ dài lớn hơn 2 trong mảng một
	chiều các số thực (demcontang)
	************************************************************/
	int bai298B(const int const* arr, int size);

	/****************************************
	Bai 299:
	Liệt kê các dãy con toàn dương có độ dài lớn hơn 1 trong mảng một
	chiều số thực (lietkeconduong).
	*****************************************/
	int bai299(const int const* arr, int size, const int MINSIZE);


	/***************************************************
	Bai 300:
	Đếm số lượng mảng con giảm trong mảng một chiều các số thực có số
	phần tử lớn hơn MINSIZE
	(demcontang)
	****************************************************/
	int bai300(const int const* arr, int size, int MINSIZE);


	/***************************************************
	Bai 301:
	Cho hai mảng a và b. Hãy cho biết mảng a có phải là mảng con trong
	mảng b hay không? (kiemtracon)

	VERSION SIMPLE
	****************************************************/
	bool bai301_v1(int * arra, int sizea, int * arrb, int sizeb);


	/****************************************************
	Bai 301:
	Cho hai mảng a và b. Hãy cho biết mảng a có phải là mảng con trong
	mảng b hay không? (kiemtracon)

	VERSION USE SORTING AND BINARY SEARCH TREE.
	*****************************************************/
	void quickSort(int *arr, int si, int ei);
	int partition(int A[], int si, int ei);
	void exchange(int *a, int *b);

	/*Dau vao arr la mot mang da duoc sap xep san*/
	int binarySearch(int arr[], int low, int high, int x);
	bool bai301_v2(int arr1[], int arr2[], int m, int n);


	/****************************************************
	bai301_v3:
	1) Sort both arrays: arr1[] and arr2[] O(mLogm + nLogn)
	2) Use Merge type of process to see if all elements of sorted arr2[] are present in sorted arr1[].
	*****************************************************/
	bool bai301_v3(int arr1[], int arr2[], int m, int n);


	/****************************************************
	Bai 301_v4
	1) Create a Hash Table for all the elements of arr1[].
	2) Traverse arr2[] and search for each element of arr2[] in the Hash Table. If element is not found then return 0.
	3) If all elements are found then return 1.
	*****************************************************/
	bool bai301_v4(int arr1[], int arr2[], int m, int n);

	/****************************************************
	Bai 302:
	Cho hai mảng a và b. Hãy đếm số lần xuất hiện của mảng a trong mảng
	b. (demmangcon).
	Vd: 
	inputArray	: 1 2 3 4 5 6 7
	subArray	: 4 5 6 
	*****************************************************/
	
	/****************************************************
	Bai 303:
	Tìm dãy con toàn dương dài nhất trong mảng các số thực
	(duongdainhat).
	*****************************************************/
	void bai303(const int const * arr, int size);

	/*****************************************************
	bai 304.(*): 
	Cho mảng một chiều các số nguyên và một số nguyên M. Hãy tìm
	một mảng con sao cho tổng các phần tử trong mảng bằng M
	******************************************************/

	void bai304(int * arr, int fromIndex, int endIndex, int TARGET_SUM);
	void printstack(std::stack<int> stackk);

	
};

