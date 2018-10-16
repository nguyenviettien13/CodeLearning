#pragma once
#include <limits.h>
class Sum
{
private:
	int beg = 0;
	int end = 0;
	int value = INT_MIN;
public:
	Sum(int beg, int end);
	~Sum();
	int Calculate();

	//method related Beg
	int getBeg() const { return beg; }
	void setBeg(int val) { beg = val; }

	//method related End
	int getEnd() const { return end; }
	void setEnd(int val) { end = val; }

	//method relate value
	int getValue();

};

