#pragma once
enum ColorType
{
	type_Blue,
	type_Red
};
class Color
{
public:
	Color();
	~Color();
	virtual void fill() = 0;
};

