#pragma once
#include "FactoryAbstract.h"
#include "ColorFactory.h"
#include "ShapeFactory.h"


enum FactoryAbstractType
{
	type_ColorFactory,
	type_ShapeFactory
};


class FactoryProducer
{
public:
	FactoryProducer();
	~FactoryProducer();
	FactoryAbstract* getFactory(FactoryAbstractType type)
	{
		if (type == type_ColorFactory)
		{
			return new ColorFactory();
		}
		else if (type == type_ShapeFactory)
		{
			return new ShapeFactory();
		}
		return nullptr;
	}
};

