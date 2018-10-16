#include "Base.h"

Base* Base::m_pBaseInstance = nullptr;

Base::Base()
{
}


Base::~Base()
{
}

Base * Base::getInstance()
{
	if (m_pBaseInstance == nullptr)
	{
		m_pBaseInstance = new Base();
	}
	return nullptr;
}
