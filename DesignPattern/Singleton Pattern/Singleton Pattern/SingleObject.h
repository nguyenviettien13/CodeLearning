#pragma once

#include <string>

class SingleObject
{
private:
	SingleObject() {};
	SingleObject(const SingleObject & other) {};//copy constructor is private
	SingleObject& operator = (const SingleObject & Other) {};
	static SingleObject * m_pSingleObject;

public:
	static SingleObject * getInstance();
	void introduce();
};