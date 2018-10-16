#include "OneDimensionArray.h"
#include <assert.h>
#include <limits>
#include <iostream>

OneDimensionArray::OneDimensionArray()
{
}


OneDimensionArray::~OneDimensionArray()
{
}

float OneDimensionArray::findMax(const float * const &arr, int size)
{
	assert(arr != NULL);
	float max = std::numeric_limits<float>::min();
	for (int i = 0; i < size; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}

int main()
{
	float array1[] = { 10.0f, 1.2f, 199.4f, 4.6f, 4.3f, 44.5f};
	int size = sizeof(array1) / sizeof(array1[0]);
	OneDimensionArray a;
	std::cout << a.findMax(array1, size) << std::endl;
	std::cout << a.findMax1(array1) << std::endl;
	return 1;
}