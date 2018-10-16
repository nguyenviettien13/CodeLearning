#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;


class Circle :
	public Shape
{
public:
	Circle();
	~Circle();
	virtual void draw()
	{
		cout << "Draw Circle" << endl;
	}
};

