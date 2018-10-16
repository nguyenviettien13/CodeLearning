#include "Complex.h"

using namespace std;

int main()
{
	Complex number1(2, 4);
	cout << number1 << endl;
	Complex number2(3, 3);
	cout << number2 << endl;
	cout << number1 + number2 << endl;
	cout << number1 + 5 << endl;
	cout << 5 + number1 << endl;

	Complex nbone(2, 3);
	Complex nbtwo(2, 3);
	if (nbone != nbtwo)
	{
		cout << "Not equal" << endl;
	}
	else
	{
		cout << "Equal" << endl;
	}
	return 1;
}