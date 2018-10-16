#include "Shape.h"
#include "Circle.h"
#include "Square.h"


Shape::Shape()
{
}


Shape::~Shape()
{
}

Shape * Shape::Create(ShapeType type)
{
	if (type == shape_Circle)
	{
		return new Circle();
	}
	else if (type == shape_Square)
	{
		return new Square();
	}
	return nullptr;
}
