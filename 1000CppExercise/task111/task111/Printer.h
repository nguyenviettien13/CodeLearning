#pragma once
class Printer
{
public:
	Printer();
	~Printer();
	/*task 111
	show solid triangle
	*/
	void showSolidTriangle(int h);
	/*task 112
	show empty triangle
	*/
	void showEmptyTriangle(int h);

	/*task 111c
	print right solid triangle
	*/
	void showRightSolidTriangle(int h);

	/*task 111d
	print right empty triangle
	*/
	void showRightEmptyTriangle(int h);

	/*task 112a
	print solid rectangle size m*n
	*/
	void showRectangle(int longside, int shortside);

	/*task 112b
	print empty rectangle size m*n
	*/
	void showEmptyRectangle(int longside, int shortside);
};

