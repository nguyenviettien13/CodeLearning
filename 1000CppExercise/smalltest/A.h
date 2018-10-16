#ifndef A_H
#define A_H
class B;
class A
{
	int _val;
	B* _b;
public:

	A(int val);
	void SetB(B *b);
	void Print();
};
#endif
