#include <iostream>
#include "SingleObject.h"


using namespace std;

int main()
{
	SingleObject* s = SingleObject::getInstance();
	s->introduce();
	return 1;
}