#include <iostream>
#include <string>
#include "ring.h"

using namespace std;

int main()
{
	ring<string> ringBuff(3);
	ringBuff.add("one");
	ringBuff.add("two");
	ringBuff.add("three");
	ringBuff.add("four");
	ringBuff.add("five");

	for (ring<string>::iterator it = ringBuff.begin(); it != ringBuff.end(); it++)
	{
		cout << *it << endl;
	}

	cout << endl;


	for (string item : ringBuff)
	{
		cout << item << endl;
	}
	return 1;
}
