#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;
class Test
{
private:
	static const int SIZE = 100;
	int * _pBuffer;
public:
	Test()
	{
		_pBuffer = new int[SIZE] {};
		cout << "Constructor" << endl;
	}

	Test(int i)
	{
		cout << "parameterized Constructor" << endl;
		_pBuffer = new int[SIZE] {};
		for (int i = 0; i < SIZE; i++)
		{
			_pBuffer[i] = 7 * i;
		}
	}

	Test(const Test & other)
	{
		cout << "copy constructor " << endl;
		_pBuffer = new int[SIZE] {};
		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
	}
	
	Test& operator = (const Test & other)
	{
		delete[] _pBuffer;
		cout << "Assignment" << endl;
		_pBuffer = new int[SIZE] {};
		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
		return *this;
	}
	~Test()
	{
		cout << "Destructor" << endl;
	}

	friend ostream& operator<<(iostream & out, Test &test)
	{
		cout << "meow meow";
		return out;
	}
};
int main()
{

	return 1;
} 