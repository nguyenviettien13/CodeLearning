#pragma once
class Sum
{
private:
	int base;
	int end = 0;
	float value =0;
public:
	Sum(int base,  int beg);
	~Sum();
	/*end*/
	int getEnd() const { return end; }
	void setEnd(int val) { end = val; }
	/*value*/
	float getValue();
	float calValue();
};

