#include "ShapeFactory.h"
#include "Shape.h"
#include "Circle.h"
#include "Square.h"

ShapeFactory::ShapeFactory()
{
}

ShapeFactory::~ShapeFactory()
{
}

Shape * ShapeFactory::getShape(ShapeType type)
{
	if (type == ShapeType::shape_Circle)
	{
		return new Circle();
	}
	else if(type == ShapeType::shape_Square)
	{
		return new Square();
	}
	return nullptr;
}

Color * ShapeFactory::getColor(ColorType type)
{
	return nullptr;
}
