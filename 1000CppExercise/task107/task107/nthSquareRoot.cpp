#include "nthSquareRoot.h"



nthSquareRoot::nthSquareRoot(int n, float x)
{
	this->n = n;
	this->x = x;
}


nthSquareRoot::~nthSquareRoot()
{
}

float nthSquareRoot::cal()
{

	return 0.0f;
}
#include <stdio.h>
#include <assert.h>


#define _abs(x)          ((x > 0) ? (x) : (-x))
#define epsilon         0.0000001

double _exp(double x)
{
	double result = 0.0;
	double temp = 1.0;
	unsigned int i = 0;
	do
	{
		result += temp;
		temp *= x / ++i;
	} while (_abs(temp) > epsilon);
	return result;
}
double log_temp(double x)
{
	assert(x > 0);
	double result	= 0.0;
	double temp_x	= x - 1;
	double temp		;
	double temp_next;
	double remainder;
	unsigned int  i = 1;
	do
	{
		temp = temp_x / i;
		result += temp;
		temp_x *= - (x - 1);
		temp_next = temp_x / ++i;
		remainder = temp + temp_next;
	} while (_abs(remainder) > epsilon);

	//				x - 1	(x-1)^2
	//result	=	----- -	--------
	//				 1			2!

	return result;
}
double _log(double x)
{
	double u;
	assert(x > 0);
	if (x <= 1.0f)
		return log_temp(x);
	u = (x - 1.0) / (x + 1.0);
	return log_temp(1.0 + u) - log_temp(1.0 - u);
}

int main(int argc, char *argv[])
{
	double a = 9.2;
	int n = 10;
	printf("%lf ^ (1/%d) = %lf\n", a, n, _exp((1.0 / n) * _log(a)));
	return 0;
}