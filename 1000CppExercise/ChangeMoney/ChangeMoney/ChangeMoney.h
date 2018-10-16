#pragma once
#include <vector>

class ChangeMoney
{
private:
	int total;
	int n;
	std::vector<int> list;
public:
	ChangeMoney(int sum, int n,  ...);
	~ChangeMoney();
	void showSolution();
};

