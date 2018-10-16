#include <iostream>
#include <string>


#pragma pack(push, 1) //person sẽ có size 64
#pragma pack(pop)	//person sẽ có size bằng 68
struct Person {
	char c;
	char name[60];
	int age;
};


int main()
{
	std::cout << sizeof(Person) << std::endl;
	return 1;
}