#pragma once
class findIndex
{
public:
	findIndex();
	~findIndex();
	int findIndexMinNumber(const float * const arr, int size);
	bool isExist(const float* const arr, int size, float N);
	int countEleLesThan(const float * const arr, int size, float N );
	float sumNegNumber(const float* const arr, int size);

	//return the array after be arranged
	float* const & bubbleSort(float* const & arr, int size);

	//bucket sort, apply for non-negative int/float array
	unsigned int* const & bucketSort(unsigned int * const & arr, int size);

	//selection sort
	float * const & selectionSort(float * const & arr, int size);
	//Insertion sort
	float * const & insertSort(float * const & arr, int size);
	//merge sort
	float * const & mergeSort(float * const & arr, int size);

	//quick sort
	float * const & quickSort(float * const & arr, int l, int r);
protected:
	void merge(float * const & arr, int sizeOfArr,
		float * const & L, int sizeOfL,
		float * const & R, int sizeOfR);

	int partition(float * const & arr, int l, int r);
};

