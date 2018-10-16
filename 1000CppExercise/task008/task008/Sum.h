#pragma once
class Sum
{
private:
	int begDeno		= 0;
	int endDeno		= 0;
	float value = 0;

public:
	Sum(int beg, int end);
	~Sum();
	/*begDeno*/
	int getBegDeno() const { return begDeno; }
	void setBegDeno(int val) { begDeno = val; }

	/*endDeno*/
	int getEndDeno() const { return endDeno; }
	void setEndDeno(int val) { endDeno = val; }

	/*value*/
	float getValue();
	float calValue();

};

