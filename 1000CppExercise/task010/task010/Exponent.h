#pragma once
class Exponent
{
private:
	unsigned int base;
	unsigned int index;
	int value;
public:
	Exponent(int base, int index);
	~Exponent();
	/*base number*/
	int getBase() const { return base; }
	void setBase(unsigned int val) { base = val; }
	/*index*/
	int getIndex() const { return index; }
	void setIndex(int val) { index = val; }
	/*value*/
	int getValue();
	int calValue();
};

