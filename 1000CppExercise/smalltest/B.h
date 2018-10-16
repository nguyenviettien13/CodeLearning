//B.h
#ifndef B_H
#define B_H
class A;
class B
{
	double _val;
	A* _a;
public:

	B(double val);
	void SetA(A *a);
	void Print();
};
#endif
