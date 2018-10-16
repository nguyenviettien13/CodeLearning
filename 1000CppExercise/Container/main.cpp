#include "TestArray.h"
#include "TestVector.h"
#include "iostream"

int main()
{
	std::cout << "bat dau test danh cho vector: " << std::endl;
	TestVector a;
	a.VectorMain();


	std::cout << "bat dau test danh cho vector: " << std::endl;
	TestArray b;
	b.ArrayMain();
	return 0;
}