#pragma once
class Sum
{
private:
	int base;
	int end;
	int value;
public:
	Sum(int base, int end);
	~Sum();
	/*base*/
	int getBase() const { return base; }
	void setBase(int val) { base = val; }
	/*end*/
	int getEnd() const { return end; }
	void setEnd(int val) { end = val; }

	/*value*/
	int getValue();
	int calValue();
};

