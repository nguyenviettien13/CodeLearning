#pragma once
#include "FactoryAbstract.h"
class ShapeFactory:
	public FactoryAbstract
{
public:
	ShapeFactory();
	~ShapeFactory();

	virtual Shape* getShape(ShapeType type);
	virtual Color* getColor(ColorType type);

};

