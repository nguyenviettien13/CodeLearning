#pragma once
#include "FactoryAbstract.h"
#include "Shape.h"

class ColorFactory:
	public FactoryAbstract
{
public:
	ColorFactory();
	~ColorFactory();
	virtual Shape* getShape(ShapeType type);
	virtual Color* getColor(ColorType type);
};

