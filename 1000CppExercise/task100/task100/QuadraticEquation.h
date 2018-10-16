#pragma once
#include <vector>
class QuadraticEquation
{
private:
	float a;
	float b;
	float c;
	std::vector<int> roots;
public:
	QuadraticEquation(float a, float b, float c);
	~QuadraticEquation();
	void solve();
};

