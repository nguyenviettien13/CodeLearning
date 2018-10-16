#pragma once
class Sum
{
private:
	int beg = 0;
	int end =0;
	float value = 0;
public:
	Sum(int beg, int end);
	~Sum();
	/*begin*/
	int getBeg() const { return beg; }
	void setBeg(int val) { beg = val; }

	/*end*/
	int getEnd() const { return end; }
	void setEnd(int val) { end = val; }

	/*value*/
	float getValue();
	float calValue();
};

