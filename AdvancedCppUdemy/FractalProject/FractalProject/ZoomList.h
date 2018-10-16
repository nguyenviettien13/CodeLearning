#pragma once
#include <vector>
#include <utility>


#include "Zoom.h"

using namespace std;
namespace caveofprogramming
{
	class ZoomList
	{
	private:
		double m_xCenter{ 0 };
		double m_yCenter{ 0 };
		double m_scale{ 1.0 };
		int m_width{0};
		int m_heigh{ 0 };
		std::vector<Zoom> zooms;
	public:
		ZoomList() = default;
		ZoomList(int width, int heigh);
		~ZoomList();
		void add(const caveofprogramming::Zoom & zoom);
		pair<double, double> doZoom(int x, int y);
	};
}
