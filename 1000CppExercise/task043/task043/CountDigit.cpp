#include "CountDigit.h"
#include <iostream>


CountDigit::CountDigit()
{
}


CountDigit::~CountDigit()
{
}

int CountDigit::countDigit(int n)
{
	int count = 0;
	do 
	{
		count++;
		n /= 10;
	} while (n != 0);
	return count;
}

int CountDigit::sumDigit(int n)
{
	int sum = 0;
	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int CountDigit::productionDigit(int n)
{
	int p = 1;
	while (n != 0)
	{
		p *= n % 10;
		n /= 10;
	}
	return p;
}

int CountDigit::countOddDigit(int n)
{
	int count = 0;
	while (n != 0)
	{
		if ((n %10) % 2 == 1)
		{
			count++;
		}
		n /= 10;
	}
	return count;
}

int CountDigit::countEventDigit(int n)
{
	int count = 0;
	while (n != 0)
	{
		if ((n % 10) % 2 == 0)
		{
			count++;
		}
		n /= 10;
	}
	return count;
}

int CountDigit::productionOddDigit(int n)
{
	int p = 1;
	while (n != 0)
	{
		if ((n % 10) % 2 == 1)
		{
			p *= n % 10;
		}
		n /= 10;
	}
	return p;
}

int CountDigit::findFirstDigit(int n)
{
	int digit = 0;
	while (n != 0)
	{
		digit = n % 10;
		n /= 10;
	}
	return digit;
}

int CountDigit::findRevertNumber(int n)
{
	int number = 0;
	while (n != 0)
	{
		number = 10 * number + n % 10;
		n /= 10;
	}
	return number;
}

int CountDigit::findMaxDigit(int n)
{
	int digit = 0;
	while (n != 0)
	{
		if (n % 10 > digit)
		{
			digit = n % 10;
		}
		n /= 10;
	}
	return digit;
}

int CountDigit::findMinDigit(int n)
{
	int digit = 9;
	while (n != 0)
	{
		if (n%10 < digit)
		{
			digit = n % 10;
		}
		n /= 10;
	}
	return digit;
}

int CountDigit::countMaxDigit(int n)
{
	int count = 0;
	int maxDigit = 0;
	int digit = 0;
	while (n != 0)
	{
		digit = n % 10;
		if (digit == maxDigit)
		{
			count++;
		}
		if (digit > maxDigit)
		{
			maxDigit = digit;
			count = 1;
		}
		
		n /= 10;
	}
	return count;
}

int CountDigit::countMinDigit(int n)
{
	int digit = 0;
	int minDigit = 10;
	int count = 0;
	while (n != 0)
	{
		digit = n % 10;
		if (digit == minDigit)
		{
			count++;
		}
		if (digit < minDigit)
		{
			minDigit = digit;
			count = 1;
		}
		n /= 10;
	}
	return count;
}

int CountDigit::countFirstDigit(int n)
{
	int firstDigit = findFirstDigit(n);
	int count = 0;
	while (n != 0)
	{
		if (n % 10 == firstDigit)
		{
			count++;
		}
		n /= 10;
	}
	return count;
}

bool CountDigit::isAllOddDigit(int n)
{
	while (n != 0)
	{
		if ((n % 10) % 2 == 0) return false;
		n /= 10;
	}
	return true;
}

bool CountDigit::isAllEvenDigit(int n)
{
	while (n!=0)
	{
		if ((n % 10) % 2 == 1)
		{
			return false;
		}
		n /= 10;
	}
	return true;
}

bool CountDigit::isSymetry(int n)
{
	int revertNumber = findRevertNumber(n);
	return (n == revertNumber);
}

bool CountDigit::isAscending(int n)
{
	int digit = 9;// chu so dang sau
	while (n != 0)
	{
		if ((n % 10) > digit)
		{
			return false;
		}
		else
		{
			digit = n % 10;
		}
		n /= 10;
	}
	return true;
}

bool CountDigit::isSpiralDigit(int n)
{
	int digit = 0;
	while (n != 0)
	{
		if ((n % 10) < digit)
		{
			return false;
		}
		else
		{
			digit = n % 10;
		}
		n /= 10;
	}
	return true;
}


int main()
{
	int n = 941;
	std::cout << "	countDigit			" << CountDigit::countDigit(n) << std::endl;
	std::cout << "	sumDigit			" << CountDigit::sumDigit(n) << std::endl;
	std::cout << "	productionDigit		" << CountDigit::productionDigit(n) << std::endl;
	std::cout << "	countOddDigit		" << CountDigit::countOddDigit(n) << std::endl;
	std::cout << "	countOddDigit		" << CountDigit::countEventDigit(n) << std::endl;
	std::cout << "	productionOddDigit	" << CountDigit::productionOddDigit(n) << std::endl;
	std::cout << "	findFirstDigit		" << CountDigit::findFirstDigit(n) << std::endl;
	std::cout << "	findRevertNumber	" << CountDigit::findRevertNumber(n) << std::endl;
	std::cout << "	findMaxDigit		" << CountDigit::findMaxDigit(n) << std::endl;
	std::cout << "	findMinDigit		" << CountDigit::findMinDigit(n) << std::endl;
	std::cout << "	countMaxDigit		" << CountDigit::countMaxDigit(n) << std::endl;
	std::cout << "	countMinDigit		" << CountDigit::countMinDigit(n) << std::endl;
	std::cout << "	countFirstDigit		" << CountDigit::countFirstDigit(n) << std::endl;
	std::cout << "	isAllOddDigit		" << CountDigit::isAllOddDigit(n) << std::endl;
	std::cout << "	isAllEvenDigit		" << CountDigit::isAllEvenDigit(n) << std::endl;
	std::cout << "	isSymetry		" << CountDigit::isSymetry(n) << std::endl;
	std::cout << "	isAscending		" << CountDigit::isAscending(n) << std::endl;
	std::cout << "	isSpiralDigit		" << CountDigit::isSpiralDigit(n) << std::endl;
	return 1;
}