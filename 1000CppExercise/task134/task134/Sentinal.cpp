#include "Sentinal.h"
#include <assert.h>
#include <iostream>
#include <limits>
Sentinal::Sentinal()
{
}


Sentinal::~Sentinal()
{
}

float Sentinal::findMaxSentinal(float const * arr, int size)
{
	assert(arr != NULL);
	float max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

int Sentinal::findFirstPosNumb(float * const &arr, int size)
{
	int index = -1;
	std::cout << "sizeof(arr)" << sizeof(arr) << std::endl;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0) return i;
	}
	return index;
}

void Sentinal::printArr11(float * const arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

void Sentinal::printArr12(float * const &arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

void Sentinal::printArr21(const float * arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

void Sentinal::printArr22(const float * &arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

void Sentinal::printArr31(const float * const & arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

void Sentinal::printArr32(const float * const & arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

int Sentinal::findLastEvenNumb(const int * const &arr, int size)
{
	int index = -1;
	for (int i = size - 1; i >= 0; i--)
	{
		if (arr[i] % 2 == 0) return i;
	}
	return index;
}

int Sentinal::findIdxOfMinNumber(const float * const &arr, int size)
{
	assert(arr != NULL);
	float min = arr[0];
	int  index = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < min) index = i;
	}
	return index;
}

int Sentinal::findIdxFirstEvenNumb(const int * const & arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0) return i;
	}
	return -1;
}

int Sentinal::findIdxFirstCompletedNumb(const int * const arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (isCompletedNumber(arr[i])) return i;
	}
	return -1 ;
}

float Sentinal::findValMinPositiveNumb(const float * const & arr, int size)
{
	assert(arr != NULL);
	float min = std::numeric_limits<float>::max();
	bool flag = false;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			flag = true;
			if (arr[i] < min)
			{
				min = arr[i];
			}
		}
	}
	if (flag) 
	{
		return min;
	}
	return -1.0f;
}

int Sentinal::findIdxMinPositiveNumber(const float * const arr, int size)
{
	assert(arr != NULL);
	/*
	I will find the number positive that value of opposited number max;
	*/
	int index = -1;
	float min = std::numeric_limits<float>::max();
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			if (arr[i] < min)
			{
				index = i;
				min = arr[i];
			}
		}
	}
	return index;
}

bool Sentinal::isCompletedNumber(int N)
{
	int sum = 0;
	for (int i = 1; i < N; i++)
	{
		if (N% i == 0) sum += i;
	}
	return (sum == N);
}



int main()
{
	Sentinal n;
	float arr[] = { -1.2f, -2.4f, -4.4f };
	float * arr1 = new float[3];
	arr1[0] = -2.0f;
	arr1[1] = -2.0f;
	arr1[2] = 3.0f;

	//std::cout << n.findMaxSentinal(arr1, 3) << std::endl;
	//std::cout << n.findMaxSentinal(arr, 3) << std::endl;
	////std::cout << n.findMaxSentinal(NULL, 0) << std::endl;

	std::cout << "sizeof(arr)" << sizeof(arr) << std::endl;
	std::cout << n.findFirstPosNumb(arr, 3) << std::endl;
	std::cout << n.findFirstPosNumb(arr1, 3) << std::endl;
	//n.printArr(arr, 3);
	//n.printArr(arr1, 3);


	int array1[] = { 1, 2, 3, 4, 5, 6, 7, 9 };
	int * array2 = new int[8];
	array2[0] = 2;
	array2[1] = 4;
	array2[2] = 6;
	array2[3] = 27;
	array2[4] = 48;
	array2[5] = 31;
	array2[6] = 89;
	array2[7] = 81;

	std::cout << "index of last even number is : " << n.findLastEvenNumb(array1, 8) << std::endl;
	std::cout << "index of last even number is : " << n.findLastEvenNumb(array2, 8) <<std::endl;

	float array3[] = { 1.3, 2.3, 3.3, 4.3, 5.3, -6.3, 7.3, 9.3 };
	float * array4 = new float[8];
	array4[0] = 2.0;
	array4[1] = 4.0;
	array4[2] = -6.0;
	array4[3] = 27.0;
	array4[4] = 48.0;
	array4[5] = 31.0;
	array4[6] = 89.0;
	array4[7] = 81.0;
	std::cout << "index of min number is : " << n.findIdxOfMinNumber(array3, 8) <<std::endl;
	std::cout << "index of min number is : " << n.findIdxOfMinNumber(array4, 8) <<std::endl;

	int array5[] = { 1, 2, 3, 4, 5, 6, 7, 9 };
	int * array6 = new int[8];
	array6[0] = 2;
	array6[1] = 4;
	array6[2] = 6;
	array6[3] = 27;
	array6[4] = 48;
	array6[5] = 31;
	array6[6] = 89;
	array2[7] = 81;
	std::cout << "Index of First Even Number is " << n.findIdxFirstEvenNumb(array5, 8) << std::endl;
	std::cout << "Index of First Even Number is " << n.findIdxFirstEvenNumb(array6, 8) << std::endl;


	int array7[] = { 1, 2, 3, 4, 5, 6, 7, 9 };
	int * array8 = new int[8];
	array8[0] = 2;
	array8[1] = 4;
	array8[2] = 9;
	array8[3] = 27;
	array8[4] = 48;
	array8[5] = 31;
	array8[6] = 89;
	array8[7] = 81;
	std::cout << "Index of First Perfect Number is " << n.findIdxFirstCompletedNumb(array7, 8) << std::endl;
	std::cout << "Index of First Perfect Number is " << n.findIdxFirstCompletedNumb(array8, 8) << std::endl;

	float array9[] = { -1.3, -2.3, -3.3, -4.3, -5.3, -6.3, -7.3, -9.3 };
	float * array10 = new float[8];
	array10[0] = 2.0;
	array10[1] = 4.0;
	array10[2] = -6.0;
	array10[3] = 27.0;
	array10[4] = 48.0;
	array10[5] = 81.0;
	array10[6] = 89.0;
	array10[7] = 81.0;
	std::cout << "Index of MinPositiveNumber is " << n.findIdxMinPositiveNumber(array9, 8) << std::endl;
	std::cout << "Index of MinPositiveNumber is " << n.findIdxMinPositiveNumber(array10, 8) << std::endl;
	
	
	std::cout << "Value of MinPositiveNumber is " << n.findValMinPositiveNumb(array9, 8) << std::endl;
	std::cout << "Value of MinPositiveNumber is " << n.findValMinPositiveNumb(array10, 8) << std::endl;

	std::cout << "print follow method : 1" << std::endl;
	n.printArr11(array9, 8);
	std::cout << "print follow method : 2" << std::endl;
	n.printArr11(array10, 8);
	std::cout << "print follow method : 3" << std::endl;
	n.printArr12(array9, 8);
	std::cout << "print follow method : 4" << std::endl;
	n.printArr12(array10, 8);
	std::cout << "print follow method : 5" << std::endl;
	n.printArr21(array9, 8);
	std::cout << "print follow method : 6" << std::endl;
	n.printArr21(array10, 8);
	std::cout << "print follow method : 7" << std::endl;
	//n.printArr22(array9, 8);//cai này có thể hiểu được vì mảng truyền vào là kiểu const pointer
	std::cout << "print follow method : 8" << std::endl;
	//n.printArr22(array10, 8); //cái này hơi khó hiểu
	std::cout << "print follow method : 8" << std::endl;
	n.printArr31(array10, 8);
	std::cout << "print follow method : 8" << std::endl;
	n.printArr32(array10, 8);
	return 1;
}