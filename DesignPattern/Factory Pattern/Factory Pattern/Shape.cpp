#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"


Shape::Shape()
{
}


Shape::~Shape()
{
}

Shape * Shape::Create(ShapeType type)
{
	if (type == CIRCLE)
	{
		return new Circle();
	}
	else if (type == RECTANGLE)
	{
		return new Rectangle();
	}
	return nullptr;
}
