#include <iostream>
#include <exception>
#include <vector>
using namespace std;

class MyException : public exception
{
public:
	virtual const char * what() const throw()
	{
		return "Something bad happened!!";
	}
};


class Test
{
public:
	Test() {};
	~Test() {};
	void goWrong() throw(std::bad_alloc)
	{
		throw MyException();
	}
};


struct ooops : public exception {
	const char* what() const noexcept
	{
		return "Ooops!!!";
	}
};

class A
{
public:
	virtual void xinchao()
	{
		std::cout << "xin chao A" << std::endl;
	}
};

class B :public A {
public:
	virtual void xinchao()
	{
		std::cout << "Xin chao B" << std::endl;
	}
};

class C :public A {
public:
	virtual void xinchao()
	{
		std::cout << "Xin chao C" << std::endl;
	}
};

int main()
{
	try
	{
		throw ooops();
	}
	catch (exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	Test test;
	try
	{
		test.goWrong();
	}
	catch (MyException &e)
	{
		std::cout << e.what() << std::endl;
	}

	/**************************************
	***************************************/
	return 1;
}