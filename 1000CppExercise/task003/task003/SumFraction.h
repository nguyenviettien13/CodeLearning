#pragma once
#include <limits>
class SumFraction
{
private:
	int begDenomination = 0;
	int endDenomination = 0;
	float value = std::numeric_limits<float>::min();
public:
	SumFraction(int beg, int end);
	~SumFraction();

	/*BegDenomination*/
	int getBegDenomination() const { return begDenomination; }
	void setBegDenomination(int val) { begDenomination = val; }

	/*EndDenomination*/
	int getEndDenomination() const { return endDenomination; }
	void setEndDenomination(int val) { endDenomination = val; }

	/*Value*/
	float getValue();
	float Calculate();
};

