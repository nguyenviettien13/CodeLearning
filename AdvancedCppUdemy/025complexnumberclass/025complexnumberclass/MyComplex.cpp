#include "MyComplex.h"

using namespace caveofprogramming;

MyComplex::MyComplex():
	real(0.0), imaginary(0)
{
}


caveofprogramming::MyComplex::MyComplex(double real, double imaginary):
	real(real), imaginary(imaginary)
{
}


MyComplex::~MyComplex()
{
}

caveofprogramming::MyComplex::MyComplex(const MyComplex & other)
{
	this->real = other.real;
	this->imaginary = other.imaginary;
}

const MyComplex & caveofprogramming::MyComplex::operator=(const MyComplex & other)
{
	real = other.real;
	imaginary = other.imaginary;
	return *this;
}


ostream & caveofprogramming::operator<<(ostream & out, const MyComplex & complexnumber)
{
	out << "(" << complexnumber.real << "," << complexnumber.imaginary << ")";
	return out;
}
