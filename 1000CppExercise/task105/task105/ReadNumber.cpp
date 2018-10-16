#include "ReadNumber.h"
#include <string>
#include <iostream>


ReadNumber::ReadNumber(int number)
{
	this->value = number;
}


ReadNumber::~ReadNumber()
{
}

std::string ReadNumber::readSecondNumber(int firstDigit)
{
	switch (firstDigit)
	{
	case 1:
		return "Muoi";
	case 2:
		return "Hai muoi";
	case 3:
		return "Ba muoi";
	case 4:
		return "Bon muoi";
	case 5:
		return "Nam muoi";
	case 6:
		return "Sau muoi";
	case 7:
		return "Bay muoi";
	case 8:
		return "Tam muoi";
	case 9:
		return "Chin muoi";
	default:
		return "Sai cmnr";
	}
}

std::string ReadNumber::readThirdNumber(int thirdDigit)
{
	switch (thirdDigit)
	{
	case 1:
		return "Mot tram ";
	case 2:
		return "Hai tram ";
	case 3:
		return "Ba tram ";
	case 4:
		return "Bon tram ";
	case 5:
		return "Nam tram ";
	case 6:
		return "Sau tram";
	case 7:
		return "Bay tram";
	case 8:
		return "Tam tram";
	case 9:
		return "Chin tram";
	default:
		return "Sai cmnr.";
	}
	return std::string();
}

std::string ReadNumber::readFirstNumber(int secondDigit)
{
	switch (secondDigit)
	{
	case 0:
		return ".";
	case 1:
		return "mot.";
	case 2:
		return "hai.";
	case 3:
		return "ba.";
	case 4:
		return "bon.";
	case 5:
		return "nam.";
	case 6:
		return "sau.";
	case 7:
		return "bay.";
	case 8:
		return "tam.";
	case 9:
		return "chin.";
	default:
		return "Sai cmnr.";
	}
}


std::string ReadNumber::read2()
{
	std::string s;
	int firstDigit	= value / 10;
	int secondDigit = value % 10;
	s += readSecondNumber(firstDigit)+ " ";
	s += readFirstNumber(secondDigit);
	return s;
}

std::string ReadNumber::read3()
{
	std::string s;
	int thirdDigit = value / 100;
	int secondDigit = (value/10) % 10;
	int firstDigit = value % 10;
	s += readThirdNumber(thirdDigit) + " ";
	s += readSecondNumber(secondDigit) + " ";
	s += readFirstNumber(firstDigit);
	return s;
}


int main()
{
	int number = 29;
	std::string s = ReadNumber(number).read2();
	std::cout << s << std::endl;

	number = 123;
	s = "";
	s = ReadNumber(number).read3();
	std::cout << s << std::endl;
	return 1;
}

