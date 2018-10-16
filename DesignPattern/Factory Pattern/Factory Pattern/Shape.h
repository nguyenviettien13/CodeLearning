#pragma once

enum ShapeType
{
	CIRCLE,
	RECTANGLE
};
class Shape
{
public:
	Shape();
	~Shape();
	virtual void draw() = 0;
	static Shape* Create(ShapeType type);
};

