#pragma once
#ifndef BITMAPFILEHEADER
#define BITMAPFILEHEADER
#include <cstdint>

using namespace std;
#pragma pack(2)


namespace caveofprogramming
{
	struct BitmapHeaderFile
	{
		char header[2]{ 'B', 'M' };
		int32_t fileSize;
		int32_t reversed{ 0 };
		int32_t dataOffset;
	};
}

#endif