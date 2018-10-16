#pragma once
class KyThuatXuLyMang
{
public:
	KyThuatXuLyMang();
	~KyThuatXuLyMang();

	/************************************
	Bai 280
	Hãy đưa số một về đầu mảng (motvedau)
	*************************************/
	int*& bai280(int * arr, int size);


	/************************************
	Bai 281:
	Hãy đưa các số chẵn trong mảng về đầu mảng, số lẻ về cuối mảng và
	các phần tử 0 năm ở giữa (chandaulecuoi).
	*************************************/
	int*& bai281(int*& arr, int &size);


	/**************************************
	Bai 282:
	Hãy đưa các số chia hết cho 3 về đầu mảng (chiahetchoba).
	***************************************/

	int*& bai282(int*& arr, int& size);


	/*************************************
	Bai 283:
	Hãy đảo ngược mảng ban đầu (daomang).
	*************************************/
	int*& bai283(int*& arr, int& size);


	/*
	Bai 284.
	Hãy đảo ngược thứ tự các số chẵn có trong mảng (daochan)
	*/
	int* & bai284(int*& arr, int& size);

	/**********************************************************
	bai 285:
	Hãy đảo ngược thứ tự các số dương có trong mảng (daoduong)
	**********************************************************/
	int*& bai285(int*& arrr, int& size);



	/**********************************
	Bai 286:
	Hãy “dịch trái xoay vòng” các phần tử trong mảng (dichtrai).
	 **********************************/
	int* & bai286(int*& arr, int&size, int k);


	/************************************
	bai 286:
	 dich mot phan tu:
	**************************************/
	int*& bai286_dich1phantu(int* & arr, int size);


	/*************************************
	Bai 287:
	Hãy “dịch phải xoay vòng” k lần các phần tử trong mảng (dichphai)
	**************************************/
	int* & bai287(int* &arr, int n, int d);

	/**************************************
	Bai 288:
	Hãy xuất các phần tử trong mảng theo yêu cầu: các phần tử chẵn có
	màu vàng, các phần tử lẻ có màu trắng (xuatchanle).
	***************************************/
	void bai288(const int const * arr, int size);


	/*******************************************
	Bai 289:
	Hãy xuất mảng theo yêu cầu: các phần tử chẵn nằm trên một hàng, các
	phần tử lẻ nằm ở hàng tiếp theo (chanlehaihang).
	*******************************************/
	void bai289(const int const * arr, int size);

	/******************************************
	Hãy đảo ngược thứ tự các số chẵn và các số lẻ trong mảng mà vẫn giữ
	nguyên vị trí tương đối của chúng (daonguocchanle).
	*******************************************/
	int* bai290( int *& arr, int size);


	/******************************************
	Bai 291:
	Hãy biến đổi mảng bằng cách thay các giá trị lớn nhất bằng giá trị nhỏ
	nhất và ngược lại (biendoi)
	*******************************************/
	int* bai291(int *& arr, int& size);

	/********************************************
	bai 292:
	Hãy biến đổi mảng bằng cách thay tất cả các phần tử trong mảng bằng
	số nguyên gần nó nhất (nguyenhoa)
	*********************************************/
	float* bai292(float*& arr, float & size);
};

