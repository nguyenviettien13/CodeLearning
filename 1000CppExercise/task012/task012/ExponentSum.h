#pragma once
class ExponentSum
{private:
	int base		= 0;
	int begIndex	= 0;
	int endIndex	= 0;
	int value		= 0;
public:
	ExponentSum(int base, int beg, int end);
	~ExponentSum();
	/*base*/
	int getBase() const { return base; }
	void setBase(int val) { base = val; }

	/*beginIndex*/
	int getBegIndex() const { return begIndex; }
	void setBegIndex(int val) { begIndex = val; }

	/*endIndex*/
	int getEndIndex() const { return endIndex; }
	void setEndIndex(int val) { endIndex = val; }
	
	/*value*/
	int getValue();
	int calValue();

};

