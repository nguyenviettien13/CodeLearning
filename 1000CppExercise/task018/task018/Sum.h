#pragma once
class Sum
{
private:
	int base = 0;
	int end = 0;
	float value = 0;
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
	float getValue();
	float calValue();
};

