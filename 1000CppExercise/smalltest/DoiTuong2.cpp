#include "DoiTuong2.h"
#include <iostream>



DoiTuong2::DoiTuong2(std::string ten)
{
	std::cout << "Constructor DoiTuong2" << std::endl;
	this->setTen(ten);
}

DoiTuong2::DoiTuong2(const DoiTuong2& dt2)
{
	std::cout << "Tao doi tuong 2 copy constructor" << std::endl;
	this->setTen(dt2.getTen());
}

DoiTuong2 & DoiTuong2::operator = (const DoiTuong2 & rhs)
{
	// TODO: insert return statement here
	std::cout << "constructor call when assignment" << std::endl;
	this->setTen(rhs.getTen());
	return *this;
}


DoiTuong2::~DoiTuong2()
{
	std::cout << "deconstructor dt2" << std::endl;
}
