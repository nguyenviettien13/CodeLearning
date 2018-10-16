#include <iostream>
#include <exception>


void goWrong()
{
	bool error1Detected = true;
	bool error2Detected = true;
	if (error2Detected)
	{
		throw std::bad_cast();
	}
	if (error1Detected)
	{
		throw std::bad_alloc();
	}
	
}

int main()
{
	try
	{
		goWrong();
	}
	catch (std::bad_cast& e)
	{
		std::cout << "Catching bad_cast: " << e.what() << std::endl;
	}
	catch (std::bad_alloc& e)
	{
		std::cout << "Catching bad_alloc: " << e.what() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout <<"Catching exception: " << e.what() << std::endl;
	}
	
	return 1;
}