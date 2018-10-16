#pragma once
class SetOfEquation
{
private:
	float a1, b1, c1;
	float a2, b2, c2;
public:
	SetOfEquation(float a1, float b1, float c1, float a2, float b2, float c2);
	~SetOfEquation();
	void solve();
};

