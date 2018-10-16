#pragma once
class Sentinal
{
public:
	Sentinal();
	~Sentinal();
	/*
	task 134
	**************Let code a function find max element using setinal technology************
	*/
	float findMaxSentinal(float const *  arr, int size);
	
	/*task 135
	******Let code the first positive number in array and return -1 if don't find****
	*/
	int findFirstPosNumb(float * const &arr, int size);

	void printArr11(float * const arr, int size);
	void printArr12(float * const &arr, int size);
	void printArr21(const float * arr, int size);
	void printArr22(const float * &arr, int size);
	void printArr31(const float * const &arr, int size);
	void printArr32(const float * const &arr, int size);

	/*
	*** Let code the function find index of the last even number and return -1 if array do not contain even number.
	*/
	int findLastEvenNumb(const int * const &arr, int size );

	/*
	*** let code the function find index of the min number in array 
	*/
	int findIdxOfMinNumber(const float * const &arr, int size);

	/*task 138
	**let code function find the index of the first even number of array, if do not find return -1
	*/
	int findIdxFirstEvenNumb(const int * const &arr, int size);

	/*
	task 139
	*** Let code the function find the index of the first complete number of array, if do not find return -1
	*/
	int findIdxFirstCompletedNumb(const int * const arr, int size);
	
	/*task140
	let code function find value of the min positive function of array. if do not find return -1
	*/
	float findValMinPositiveNumb(const float * const &arr, int size);

	/*
	task 141
	*** Let code function find index of the min positive number of array, if do not find return -1
	*/
	int findIdxMinPositiveNumber(const float * const arr, int size);


protected:
	bool isCompletedNumber(int N);
};

