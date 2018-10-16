#pragma once
#include <string>
#include <cstdint>
using namespace std;
namespace caveofprogramming
{
	class Bitmap
	{
	private:
		int m_heigh{ 0 };
		int m_width{ 02 };
		unique_ptr<uint8_t[]> m_pPixels{ nullptr };
	public:
		Bitmap() = default;
		Bitmap(int width, int height);
		~Bitmap();

		bool write(string fileName);
		void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
	};


}