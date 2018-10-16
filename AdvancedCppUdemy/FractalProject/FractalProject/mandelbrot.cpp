#include "mandelbrot.h"
#include <complex>

using namespace std;
using namespace caveofprogramming;

caveofprogramming::mandelbrot::mandelbrot()
{
}


caveofprogramming::mandelbrot::~mandelbrot()
{
}

int caveofprogramming::mandelbrot::getIterations(double x, double y)
{
	complex<double> z = 0;
	complex<double> c(x, y);
	
	
	int iterations = 0;
	while (iterations < MAX_ITERATIONS)
	{
		z = z * z+ c;
		if (abs(z) > 2)
		{
			break;
		}
		iterations++;
	}
	return iterations;
}
