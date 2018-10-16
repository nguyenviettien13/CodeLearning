#include <iostream>
#include <string>
using namespace std;



void mightGoWrong()
{
	bool error1 = false;
	bool error2 = true;

	if (error1)
	{
		throw "Something went wrong!!";
	}
	if (error2)
	{
		throw string("Something else went wrong");
	}
}
void useMightGoWrong()
{
	mightGoWrong();
}
void A()
{
	try
	{
		useMightGoWrong();
	}
	catch (int e)
	{
		std::cout << "Error code : " << e << std::endl;
	}
	catch (const char * e)
	{
		std::cout << "Error Message: " << e << std::endl;
	}
	catch (string e)
	{
		std::cout << "String error message: " << e << std::endl;
	}

	std::cout << "This code is still running" << std::endl;
}
int main()
{
	A();
	return 1;
}