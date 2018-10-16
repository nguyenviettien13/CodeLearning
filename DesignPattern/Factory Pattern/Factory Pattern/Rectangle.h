#pragma once

#include <iostream>
#include "Shape.h"

using namespace std;

class Rectangle :
	public Shape
{
public:
	Rectangle();
	~Rectangle();
	virtual void draw()
	{
		cout << "draw Rectangle" << endl;
	}
};

