#include <iostream>
#include "FactoryProducer.h"
#include "Color.h"
#include "Blue.h"
#include "Red.h"
#include "Shape.h"
#include "Circle.h"
#include "Square.h"

using namespace  std;

int main()
{
	FactoryProducer fP;

	ColorFactory* cF = dynamic_cast<ColorFactory*>(fP.getFactory(type_ColorFactory));
	
	Blue* blue = dynamic_cast<Blue*>(cF->getColor(ColorType::type_Blue));
	Red* red = dynamic_cast<Red*>(cF->getColor(ColorType::type_Red));

	blue->fill();
	red->fill();
	
	ShapeFactory* sF = dynamic_cast<ShapeFactory*>(fP.getFactory(type_ShapeFactory));
	
	Square* square = dynamic_cast<Square*>(sF->getShape(ShapeType::shape_Square));
	Circle* circle = dynamic_cast<Circle*>(sF->getShape(ShapeType::shape_Circle));
	square->draw();
	circle->draw();
	return 1;
}
