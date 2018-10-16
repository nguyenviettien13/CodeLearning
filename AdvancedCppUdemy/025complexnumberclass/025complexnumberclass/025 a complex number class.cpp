#include <iostream>
#include <string>
#include "MyComplex.h"

using namespace caveofprogramming;
using namespace std;

int main()
{
	caveofprogramming::MyComplex cp1(2,3);
	caveofprogramming::MyComplex cp2 = cp1;
	cout << cp2 << endl;

	return 1;
}