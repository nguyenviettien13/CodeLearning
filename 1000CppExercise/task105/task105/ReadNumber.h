#pragma once
#include <iostream>
#include <iostream>
class ReadNumber
{
private:
	int value;
public:
	ReadNumber(int number);
	~ReadNumber();
	std::string read2();
	std::string read3();
protected:
	std::string readFirstNumber(int firstDigit);
	std::string readSecondNumber(int secondDigit);
	std::string readThirdNumber(int secondDigit);

};

