#pragma once
class SummultipleDenoFraction
{
private:
	int begDeno = 0;
	int endDeno = 0;
	float value = 0;
public:
	SummultipleDenoFraction(int beg, int end);
	~SummultipleDenoFraction();
	/*begeDeno*/
	int getBegDeno() const { return begDeno; }
	void setBegDeno(int val) { begDeno = val; }
	
	/*endDeno*/
	int EndDeno() const { return endDeno; }
	void EndDeno(int val) { endDeno = val; }
	
	/*value*/
	float getValue();
	float calValue();
};

