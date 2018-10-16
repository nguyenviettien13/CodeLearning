#pragma once
class ConsecutiveSum
{
private:
	int begNum	= 0;
	int endNum	= 0;
	int value = 0;
public:
	ConsecutiveSum(int beg, int end);
	~ConsecutiveSum();
	/*begNum*/
	int getBegNum() const { return begNum; }
	void setBegNum(int val) { begNum = val; }
	/*endNum*/
	int getEndNum() const { return endNum; }
	void setEndNum(int val) { endNum = val; }
	/*value*/
	int getValue();
	int calValue();
};

