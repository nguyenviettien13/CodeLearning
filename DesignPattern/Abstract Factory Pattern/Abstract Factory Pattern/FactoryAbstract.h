#pragma once
#include "Shape.h"
#include "Color.h"


class FactoryAbstract
{
public:
	FactoryAbstract();
	~FactoryAbstract();

	virtual Shape* getShape(ShapeType type) = 0;
	virtual Color* getColor(ColorType type) = 0;
};

