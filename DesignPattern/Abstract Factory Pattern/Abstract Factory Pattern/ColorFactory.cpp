#include "ColorFactory.h"
#include "Blue.h"
#include "Red.h"

ColorFactory::ColorFactory()
{
}


ColorFactory::~ColorFactory()
{
}

Shape * ColorFactory::getShape(ShapeType type)
{
	return nullptr;
}

Color * ColorFactory::getColor(ColorType type)
{
	if (type == ColorType::type_Blue)
	{
		return new Blue();
	}
	else if (type == ColorType::type_Red)
	{
		return new Red();
	}
	return nullptr;
}

