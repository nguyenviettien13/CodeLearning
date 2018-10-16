#pragma once
#include <complex>

using namespace  std;
namespace caveofprogramming
{
	class mandelbrot
	{
	public:
		static const int MAX_ITERATIONS = 1000;
	public:
		mandelbrot();
		~mandelbrot();
		static int getIterations(double x, double y);
	};
}/*namespace of caveofprogramming*/
