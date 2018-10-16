#pragma once
class Sum
{
private:
	unsigned int base = 0; /*base differ 0*/
	int beg = 0;
	int end = 0;
	int value = 0;
public:
	Sum(int base, int beg, int end);
	~Sum();
	/*Base*/
	unsigned int getBase() const { return base; }
	void setBase(unsigned int val) { base = val; }
	/*beg*/
	int getBeg() const { return beg; }
	void setBeg(int val) { beg = val; }

	/*end*/
	int getEnd() const { return end; }
	void setEnd(int val) { end = val; }
	
	/*value*/
	int getValue();
	int calValue();
};

