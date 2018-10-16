#include "SingleObject.h"
#include <iostream>

using namespace std;


SingleObject* SingleObject::m_pSingleObject = NULL;


SingleObject * SingleObject::getInstance()
{
	if (m_pSingleObject != nullptr)
	{
		return m_pSingleObject;
	}
	else
	{
		m_pSingleObject = new SingleObject();
	}
	return m_pSingleObject;
}

void SingleObject::introduce()
{
	cout << "Me oi cho danh con dau\nDe con bat oc hai rau me nho" << endl;
}
