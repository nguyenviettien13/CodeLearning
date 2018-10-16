#include "Abs.h"
#include <stdio.h>


Abs::Abs()
{
}


Abs::~Abs()
{
}

void Abs::getAbs()
{
	int a;
	int b;
	int c;
	printf("Enter value of a variable: ");
	scanf_s("%d", &a);
	if (a < 0) a = -a;
	printf("Enter value of a variable: ");
	scanf_s("%d", &b);
	if (b < 0) b = -b;
	printf("Enter value of a variable: ");
	scanf_s("%d", &c);
	if (c < 0) c = -c;

	printf("Gia tri cua a = %d, b = %d, c = %d ", a, b, c);

}


int main()
{
	Abs::getAbs();
	return 1;
}