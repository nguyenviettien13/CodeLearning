#include "TestArray.h"
#include "array"
#include "iostream"


TestArray::TestArray()
{
}


TestArray::~TestArray()
{
}


int TestArray:: ArrayMain()
{
	std::array<int, 5> myArray = { 1, 2, 3, 4, 5 };
	for (auto it = myArray.begin(); it != myArray.end(); it++)
	{
		std::printf("%d\n", *it);
	}

	std::cout << "to be continue....." << std::endl;

	for (auto it = myArray.cbegin(); it != myArray.cend(); it++)
	{
		std::printf("%d\n", *it);
	}
	std::cout << "to be continue....." << std::endl;

	for (auto it = myArray.rbegin(); it != myArray.rend(); it++)
	{
		printf("%d\n", *it);
	}
	std::cout << "to be continue....." << std::endl;

	for (auto it = myArray.crbegin(); it != myArray.crend(); it++)
	{
		printf("%d\n", *it);
		//can't not use it to change value of myArray.
	}

	std::cout << "Phan tu dau tien cua mang la : " << myArray.front() << std::endl;
	std::cout << "Phan tu cuoi cung cua mang la : " << myArray.back() << std::endl;
	/******************************************************************************************
	Phương thức data của array.
	value_type* data() noexcept;					trả về con trỏ có thể làm thay đổi đổi tượng array
	const value_type* data() const noexcept;		trả về con trỏ đến array nhưng không thể làm thay đổi đối tượng
	reference link: http://www.cplusplus.com/reference/array/array/data/

	*******************************************************************************************/
	const int* pointerToData = myArray.data();
	for (auto i = 0; i < myArray.size(); i++)
	{
		std::cout << myArray.at(i) << std::endl;
	}

	/*
	Method fill() of class array in STL.
	void fill (const value_type& val);
	method will set val for all element in array.
	*/

	std::array<int, 10> fillArray;
	fillArray.fill(10);
	std::cout << "FillArray after call fill method: " << std::endl;
	for (auto i = 0; i < fillArray.size(); i++)
	{
		std::cout << fillArray.at(i) << std::endl;
	}


	/*
	max_size method in array.
	constexpr size_type max_size() noexcept;
	Return maximum size
	Alway equal second template parameter used to insantiate the array template class.
	*/

	std::array<int, 100> myIntArray;
	std::cout << "Maximum size of array is: " << myIntArray.max_size() << std::endl;


	/*
	Method swap:
	used to swap to array.
	what happen if 2 array don't have same size
	*/
	std::array<int, 5> array1 = { 1, 2, 3, 4, 5};
	std::array<int, 5> array2 = { 10, 11, 12, 13, 14 };
	array1.swap(array2);

	for (int& x: array1)
	{
		std::cout << " " << x;
	}

	for (int& x : array2)
	{
		std::cout << " " << x;
	}

	return 0;
}


/* Note 1:
Con trỏ hằng là con trỏ chỉ cho phép truy xuất lấy giá trị của vùng nhớ
mà không cho phép ta thay đổi giá trị của vùng nhớ mà con trỏ trỏ đến
*/

/* Note 2:
từ khóa noexcept có nghĩa là gì?
*/