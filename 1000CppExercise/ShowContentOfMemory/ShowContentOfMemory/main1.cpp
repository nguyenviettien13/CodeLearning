#include <iostream>
#include "A.h"
using namespace std;

void function(const A & var)
{
	cout << var.getTuoi() << endl;
}

int main()
{
	A a(1);
	function(A(1));
	return 1;
}


