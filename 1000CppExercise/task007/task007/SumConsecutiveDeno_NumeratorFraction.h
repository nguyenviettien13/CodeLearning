#pragma once
class SumConsecutiveDeno_NumeratorFraction
{
private:
	int begDeno = 0;
	int endDeno = 0;
	float value = 0;
public:
	SumConsecutiveDeno_NumeratorFraction(int beg, int end);
	~SumConsecutiveDeno_NumeratorFraction();
	
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

