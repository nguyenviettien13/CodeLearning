//A.cpp
#include "A.h"
#include "B.h"

#include <iostream>

using namespace std;

A::A(int val)
:_val(val)
{
}

void A::SetB(B *b)
{
    _b = b;
    cout<<"Inside SetB()"<<endl;
    _b->Print();
}

void A::Print()
{
    cout<<"Type:A val="<<_val<<endl;
}
