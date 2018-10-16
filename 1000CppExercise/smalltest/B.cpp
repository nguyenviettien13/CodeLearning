#include "B.h"
#include "A.h"
#include <iostream>

using namespace std;

B::B(double val)
	:_val(val)
{
}

void B::SetA(A *a)
{
	_a = a;
	cout << "Inside SetA()" << endl;
	_a->Print();
}

void B::Print()
{
	cout << "Type:B val=" << _val << endl;
}
