#pragma once
class SumOddDenoFraction
{
private:
	int begDenomination = 0;
	int endDenomination = 0;
	float value			= 0;
public:
	SumOddDenoFraction(int beg, int end);
	~SumOddDenoFraction();

	/*BegDeno*/
	int BegDenomination() const { return begDenomination; }
	void BegDenomination(int val) { begDenomination = val; }
	/*EndDeno*/
	int EndDenomination() const { return endDenomination; }
	void EndDenomination(int val) { endDenomination = val; }

	/*Value*/
	float getValue();
	float calValue();
};

