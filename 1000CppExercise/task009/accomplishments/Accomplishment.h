#pragma once
class Accomplishment
{
private:
	int begFactor		= 0;
	int endFactor		= 0;
	int accomplishment	= 0;
public:
	Accomplishment(int beg, int end);
	~Accomplishment();
	/*begFactor*/
	int getBegFactor() const { return begFactor; }
	void setBegFactor(int val) { begFactor = val; }
	/*endFactor*/
	int getEndFactor() const { return endFactor; }
	void setEndFactor(int val) { endFactor = val; }
	/*value*/
	int getValue();
	int calValue();
};

