#include <iostream>
#include <vector>
#include <limits>
#include <cstdint>
#include <memory>
#include <math.h>
#include "BitmapFileHeader.h"
#include "Bitmap.h"
#include "mandelbrot.h"
#include "Zoom.h"
#include "ZoomList.h"
using namespace std;
using namespace caveofprogramming;

int main()
{
	const int WIDTH = 800;
	const int HEIGH = 600;

	Bitmap bitmap(WIDTH, HEIGH);
	
	ZoomList zoomList(WIDTH, HEIGH);
	zoomList.add(Zoom(WIDTH / 2, HEIGH / 2, 4.0/WIDTH));

	double min = numeric_limits<double>::max();
	double max = numeric_limits<double>::min();

	unique_ptr<int[]> histogram(new int[caveofprogramming::mandelbrot::MAX_ITERATIONS]);
	memset(histogram.get(), 0, (caveofprogramming::mandelbrot::MAX_ITERATIONS) * sizeof(int));
	unique_ptr<int[]> fractal(new int[WIDTH*HEIGH]);
	memset(fractal.get(), 0, (WIDTH*HEIGH) * sizeof(int));

	for (int y = 0; y < HEIGH; y++)
	{
		for (int x = 0; x < WIDTH; x++)
		{
			double xFractal = (x - WIDTH / 2 - 100)* 2.0 / HEIGH;
			double yFractal = (y - HEIGH / 2)* 2.0 / HEIGH;

			int iterations = caveofprogramming::mandelbrot::getIterations(xFractal, yFractal);
			fractal[y*WIDTH + x] = iterations;

			if (iterations != caveofprogramming::mandelbrot::MAX_ITERATIONS)
			{
				histogram[iterations]++;
			}
		}
	}

	int total = 0;
	for (int i = 0; i < caveofprogramming::mandelbrot::MAX_ITERATIONS; i++)
	{
		total += histogram[i];
	}
	for (int y = 0; y < HEIGH; y++)
	{
		for (int x = 0; x < WIDTH; x++)
		{
			uint8_t red = 0;
			uint8_t green = 0;
			uint8_t blue = 0;
			int iterations = fractal[y*WIDTH + x];
			if (iterations != caveofprogramming::mandelbrot::MAX_ITERATIONS)
			{
				uint8_t color = (uint8_t)(256 * (double)iterations / caveofprogramming::mandelbrot::MAX_ITERATIONS);


				double hue = 0.0;
				for (int i = 0; i <= iterations; i++)
				{
					hue += (double)histogram[i] / total;
				}
				green = pow(255, hue); 
			}
			

			
			bitmap.setPixel(x, y, red, green, blue);
		}
	}
	bitmap.write("test.bmp");
	cout << "finished." << endl;

	return 1;
}
