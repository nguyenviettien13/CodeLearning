#include "ShapFactory.h"


ShapFactory::~ShapFactory()
{
	if (pShape!=nullptr)
	{
		delete pShape;
	}
}

ShapFactory::ShapFactory(int type)
{
	if (type == 0)//create Rectangle
	{
		pShape = new Circle();
	}
	else if (type == 1)
	{
		pShape = new Circle();
	}
	else
	{
		pShape = nullptr;
	}
}
