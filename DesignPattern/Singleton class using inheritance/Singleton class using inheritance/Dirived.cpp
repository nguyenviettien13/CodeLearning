#include "Dirived.h"
#include <iostream>


using namespace std;

Dirived::Dirived()
{
}


Dirived::Dirived(int dataY):
	m_dataY(dataY)
{
	
}

Dirived::Dirived(int dataX, int DataY):
	MyBase(dataX)
{
	m_dataY = DataY;
}


Dirived::~Dirived()
{
}

void Dirived::Create(int X, int Y)
{
	if (m_pMyBaseInstance)
	{
		cout << "Doi tuong da ton tai" << endl;
	}
	m_pMyBaseInstance = new Dirived(X, Y);
}

void Dirived::setDataY(int dataY)
{
	m_dataY = dataY;
}

int Dirived::getDataY() const
{
	return m_dataY;
}

