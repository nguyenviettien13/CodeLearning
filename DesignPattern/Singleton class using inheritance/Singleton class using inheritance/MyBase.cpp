#include "MyBase.h"
#include <iostream>

using namespace std;

MyBase* MyBase::m_pMyBaseInstance = nullptr;

MyBase::MyBase()
{
}

MyBase::MyBase(int X):
	m_data(X)
{

}


MyBase::~MyBase()
{
}


void MyBase::setDataX(int value)
{
	m_data = value;
}

int MyBase::getDataX() const
{
	return m_data;
}

MyBase * MyBase::getInstance()
{
	if (m_pMyBaseInstance)
	{
		//cout << "Doi tuong chua duoc tao" << endl;
	}
	return m_pMyBaseInstance ;
}
