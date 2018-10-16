#pragma once
#include <vector>
class PerfectNumber
{
private:
	int value;
	std::vector<int> CDset;
public:
	PerfectNumber(int value);
	~PerfectNumber();
	void findAllCD();
	void showCD();
	int sumOfAllCDExceptItself();
	bool isPerfectNumber();
};

