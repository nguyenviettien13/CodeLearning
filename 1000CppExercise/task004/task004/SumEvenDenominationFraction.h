#pragma once
#include <limits>

class SumEvenDenominationFraction
{
private:
	int begDeno = 0;
	int endDeno = 0;
	float value = std::numeric_limits<float>::min();

public:
	SumEvenDenominationFraction(int beg, int end);
	~SumEvenDenominationFraction();

	/*BegDeno*/
	int getBegDeno() const { return begDeno; }
	void setBegDeno(int val) { begDeno = val; }

	/*EndDeno*/
	int getEndDeno() const { return endDeno; }
	void setEndDeno(int val) { endDeno = val; }

	/*Value*/
	float getValue();
	float calValue();
};

