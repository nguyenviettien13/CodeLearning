#include "TestVector.h"
#include "vector"
#include "array"
#include "iostream"

TestVector::TestVector()
{
}


TestVector::~TestVector()
{
}


int TestVector::VectorMain()
{
	std::vector<int> myVector1;
	std::vector<int> myVector2(4, 100);
	std::vector<int> myVector3(myVector2.begin(), myVector2.end());
	std::vector<int> myVector4(myVector3);

	/*we also create vector from array.*/
	int myints[] = { 16,2,77,29 };
	std::vector<int> myVector5(myints, myints + sizeof(myints) / sizeof(int));

	std::cout << "cac phan tu trong vector myVector5 la: " << std::endl;
	for (int&x : myVector5)
	{
		std::cout << x << std::endl;
	}
	return 0;
}


/*
vector giống như array
sử dụng contiguous storage, vì vậy chúng ta có thể truy nhập các phần tử dựa vào offset.
kích thước có thể thay đổi dynamically
*/