#include "Doituong.h"
#include "iostream"


Doituong::Doituong(std::string ten)
{
	std::cout << "constructor Doituong" << std::endl;
	this->setTen(ten);
	//this->_doituong2 = DoiTuong2();
}


Doituong::~Doituong()
{
}
