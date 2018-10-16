#pragma once
/*
Calculate value of follow expression: S(x, n) = x^1 − x^2 + x^3 + ⋯ + (−1)^(n+1)x^n
*/
class Sum
{
public:
	Sum();
	~Sum();
	/*
	task 67
	*/
	static long cal(int base, int n);

	/*Task 68
	Calculate follow expression:
	S(x, n) = −x^2 + x^4 + ⋯ + (−1)^n.x^2n*/
	static long cal68(int base, int n);

	/* Task 69
	S(x, n) = x − x^3 + x^5 + ⋯ + (−1)^n. 2x^
	*/
	static long cal69(int base, int n);
};

