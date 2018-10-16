#pragma once
#include "MyBase.h"
class Dirived:
	public MyBase
{
private:
	int m_dataY;
public:
	Dirived();
	Dirived(int dataY);
	Dirived(int dataX, int DataY);
	~Dirived();
	static void Create(int X, int Y);
	virtual void setDataY(int dataY);
	virtual int getDataY() const;
};