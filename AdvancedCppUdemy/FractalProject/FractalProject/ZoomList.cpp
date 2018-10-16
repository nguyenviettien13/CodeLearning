#include "ZoomList.h"
#include <iostream>

using namespace std;
using namespace caveofprogramming;

caveofprogramming::ZoomList::ZoomList(int width, int heigh):
	m_width(width),
	m_heigh(heigh)
{

}


caveofprogramming::ZoomList::~ZoomList()
{
}

void caveofprogramming::ZoomList::add(const caveofprogramming::Zoom & zoom)
{
	zooms.push_back(zoom);
	m_xCenter += (zoom.x - m_width / 2)*m_scale;
	m_yCenter += (zoom.y - m_heigh / 2)*m_scale;
	m_scale *= zoom.scale;
	cout << m_xCenter << ", " << m_yCenter << ", " << m_scale << endl;
}

pair<double, double> caveofprogramming::ZoomList::doZoom(int x, int y)
{ 
	return pair<double, double>(0.0, 0.0);
}
