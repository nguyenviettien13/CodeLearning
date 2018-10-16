#pragma once
class Arrangement
{
public:
	Arrangement();
	~Arrangement();
	/*Bai 255
	Hãy sắp xếp các giá trị trong mảng các số thực tăng dần (sapxeptang)
	*/
	void bai255_bubble(int * arr, int size);
	void bai255_mergesort(int * arr, int size);
	void bai255_quicksort(int * arr, int l, int r);
	void bai255_quicksort_v2(int * arr, int l, int r);
	/*Bai 256
	Hãy sắp xếp các giá trị trong mảng số nguyên giảm dần (sapxepgiam)
	*/


	void bai256_bubble(int *arr, int size);
	/*Bai 257
	Hãy sắp xếp các giá trị tại các vị trí lẻ trong mảng tăng dần các giá trị
	khác giữ nguyên giá trị và vị trí (vitriletang).
	*/
	void bai257(int *arr, int size);

	/*Bai 258
	.Hãy sắp xếp các số nguyên tố trong mảng các số nguyên tăng dần các
	giá trị khác giữ nguyên giá trị và vị trí (nguyentotang)
	*/
	void bai258(int *arr, int size);
	bool soNguyenTo(int N);


	/*Bai 259
	Hãy sắp xếp các số hoàn thiện trong mảng giảm dần các giá trị khác giữ
	nguyên giá trị và vị trí (nguyentotang)
	*/
	void bai259(int *arr, int size);
	bool soHoanHao(int N);

	/*Bai 262
	Hãy sắp xếp các số chẵn trong mảng các số nguyên tăng dần, các số lẻ
	cũng tăng dần. Vị trí tương đối giữa các số chẵn và số lẻ không đổi
	(chantang)
	*/
	void bai262(int * arr, int size);

	/*Bai 263
	Hãy sắp xếp các số dương trong mảng tăng dần, các số âm giảm dần, vị
	trí tương đối giữa các số âm và số dương không đổi (chantangamgiam)
	*/

	/*Bai 265
	Cho hai mảng tăng dần. Hãy trộn hai mảng lại thành một mảng được
	sắp thứ tự giảm dần (trongiam)
	*/
	void bai265(int * arr1, int size1, int* arr2, int size2);
};

