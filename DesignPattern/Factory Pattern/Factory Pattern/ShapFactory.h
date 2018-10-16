#pragma once
#include <iostream>
#include <string>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace std;


class ShapFactory
{
private:
	Shape * pShape;
public:
	~ShapFactory();
	ShapFactory(int type);
};

