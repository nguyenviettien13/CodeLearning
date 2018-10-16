#pragma once

enum ShapeType
{
	shape_Square,
	shape_Circle
};
class Shape
{
public:
	Shape();
	~Shape();
	virtual void draw() = 0;
	static Shape* Create(ShapeType type);
};

