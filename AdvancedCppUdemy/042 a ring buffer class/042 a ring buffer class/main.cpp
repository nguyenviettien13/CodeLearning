#include <iostream>
#include <string>
#include "ring.h"

using namespace std;

int main()
{
	ring<string> ringBuff(5);
	ringBuff.add("one");
	ringBuff.add("two");
	ringBuff.add("three");
	ringBuff.add("four");
	ringBuff.add("five");
	ringBuff.add("six");
	ringBuff.add("seven");

	for (int i = 0; i < ringBuff.size(); i++)
	{
		cout << ringBuff.get(i) << endl;
	}
	return 1;
}