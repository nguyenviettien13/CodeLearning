#pragma once
class SumSquare
{
private:
	int beg		= 0;
	int end		= 0;
	int value	= 0;
public:
	SumSquare(int beg, int end);
	~SumSquare();

	//method related beg
	int getBeg() const { return beg; }
	void setBeg(int val) { beg = val; }

	//method related end
	int getEnd() const { return end; }
	void setEnd(int val) { end = val; }

	//method related value
	int getValue();
	int calculateValue();
};

