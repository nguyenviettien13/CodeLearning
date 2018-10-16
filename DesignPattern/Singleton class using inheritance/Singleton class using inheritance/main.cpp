#include <iostream>
#include "Dirived.h"

using namespace std;


int main()
{
	Dirived::Create(2, 3);
	cout << Dirived::getInstance()->getDataX()<<endl;
	cout << Dirived::getInstance()->getDataY()<<endl;
	return 1;
}
