#include <fstream>
#include "Bitmap.h"
#include <string>
#include "Bitmap.h"
#include "BitmapInfoHeader.h"
#include "BitmapFileHeader.h"

using namespace caveofprogramming;
using namespace std;

caveofprogramming::Bitmap::Bitmap(int width, int height):
	m_width(width),
	m_heigh(height),
	m_pPixels(new uint8_t[width*height * 3])
{
	memset(m_pPixels.get(), 65, width*height * 3);
}


caveofprogramming::Bitmap::~Bitmap()
{
}

bool caveofprogramming::Bitmap::write(string fileName)
{
	BitmapHeaderFile fileHeader;
	BitmapInfoHeader infoHeader;
	
	fileHeader.fileSize = sizeof(BitmapHeaderFile) + sizeof(BitmapHeaderFile) + m_width * m_heigh * 3; //calculate to byte
	fileHeader.dataOffset = sizeof(BitmapHeaderFile) + sizeof(BitmapHeaderFile);

	infoHeader.width = m_width;
	infoHeader.heigh = m_heigh;

	ofstream file;
	file.open(fileName, ios::out | ios::binary);

	if (!file) 
	{
		return false;
	}

	file.write(reinterpret_cast<char*> (&fileHeader), sizeof(fileHeader));
	file.write(reinterpret_cast<char*> (&infoHeader), sizeof(infoHeader));
	file.write(reinterpret_cast<char*> (m_pPixels.get()), m_width*m_heigh*3*sizeof(uint8_t));

	file.close();
	if (!file) {
		return false;
	}
	return true;
}

void caveofprogramming::Bitmap::setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue)
{
	uint8_t* pPixel = m_pPixels.get();
	pPixel += y * 3 * m_width + 3 * x;
	pPixel[0] = blue;
	pPixel[1] = green;
	pPixel[2] = red;
}
