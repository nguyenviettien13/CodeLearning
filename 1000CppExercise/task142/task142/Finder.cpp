#include "Finder.h"
#include <assert.h>
#include <iostream>
#include <math.h>

Finder::Finder()
{
}


Finder::~Finder()
{
}

float Finder::findMinNumber(const float const * arr, int size)
{
	assert(arr != NULL);
	float min = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}

int Finder::findFirstEvenNumber(const int const * arr, int size)
{
	int firstEvenNumber = -1;
	for (int i = 0; i < size; i++) 
	{
		if (arr[i] > 0 && arr[i] % 2 == 0)
		{
			firstEvenNumber = arr[i];
			break;
		}

	}
	return firstEvenNumber;
}

int Finder::findFirstPrimeNumber(const int const * arr, int size)
{
	int firstPrimeNumber = -1;
	for (int i = 0; i < size; i++)
	{
		if (isPrime(arr[i]))
		{
			firstPrimeNumber = arr[i];
			break;
		}
	}
	return firstPrimeNumber;
}

int Finder::findFirstPerfectNumber(const int const * arr, int size)
{
	int firstPerfectNumber = -1;
	for (int i = 0; i < size; i++)
	{
		if (isPerfectNubmer(arr[i]))
		{
			firstPerfectNumber = arr[i];
		}
	}
	return firstPerfectNumber;
}

float Finder::findFirstNegativeNumber(const float const * arr, int size)
{
	float negnumb = 1;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			negnumb = arr[i];
			break;
		}
	}
	return negnumb;
}

int Finder::findMaxPrimeNumber(const int const * arr, int size)
{
	int mpn = 0;
	for (int i = 0; i < size; i++)
	{
		if (isPrime(arr[i]) && arr[i] > mpn)
		{
			mpn = arr[i];
		}
	}
	return mpn;
}

int Finder::findMinPerfectNumber(const int const * arr, int size)
{
	int minPerfectNumber = 0;
	for (int i = 0; i < size; i++)
	{
		if (isPerfectNubmer(arr[i]))
		{
			if (minPerfectNumber == 0)
			{
				minPerfectNumber = arr[i];
			}
			else
			{
				if (minPerfectNumber > arr[i]) minPerfectNumber = arr[i];
			}
		}
	}
	return minPerfectNumber;
}

bool Finder::isPrime(int N)
{
	int sqrtN = sqrt(N);
	for (int i = 2; i <= sqrtN; i++)
	{
		if (N%i == 0) return false;
	}
	return true;
}

bool Finder::isPerfectNubmer(int N)
{
	int sumOfCommonDivisor = 0;
	for (int i = 1; i < N; i++)
	{
		if (N%i == 0)
		{
			sumOfCommonDivisor += i;
		}
	}
	return (N== sumOfCommonDivisor);
}

int main()
{
	float arr1[] = { 1.1f, 2.3f, 4.5f, 6.5f, 8.7f };
	float* arr2 = new float[10];
	for (int i = 0; i < 10; i++)
	{
		arr2[i] = (float)i * i + 30 *i - 40; 
	}
	std::cout << Finder().findMinNumber(arr1, 5) << std::endl;
	std::cout << Finder().findMinNumber(arr2, 10) << std::endl;

	int arr3[] = { -1, -2, -3, -4, -5 };
	std::cout << Finder().findFirstEvenNumber(arr3, 5) << std::endl;

	int arr4[] = {1, 2, 3, -4, 6};
	std::cout << Finder().findFirstPrimeNumber(arr4, 5) << std::endl;

	std::cout << "findFirstPerfectNumber : " << Finder().findFirstPerfectNumber(arr4, 5) << std::endl;


	float arr5[] = { 1.1, 1.2, 4.3, 4.5, 6.5 };
	std::cout << " findFirstNegativeNumber   " << Finder().findFirstNegativeNumber(arr5, 5) << std::endl;

	std::cout << "findMaxPrimeNumber  " << Finder().findMaxPrimeNumber(arr4, 5)<<std::endl;
	std::cout << "findMinPerfectNumber  " << Finder().findMinPerfectNumber(arr4, 5)<<std::endl;

	return 1;
}
