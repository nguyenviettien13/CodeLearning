#include "Complex.h"



Complex::Complex()
{
}

Complex::Complex(double real, double imaginary):
	real(real), imaginary(imaginary)
{
}

Complex::Complex(const Complex & other)
{
	real = other.real;
	imaginary = other.imaginary;
}


Complex::~Complex()
{
}

const Complex & Complex::operator=(const Complex & other)
{
	real = other.real;
	imaginary = other.imaginary;
	return *this;
}

ostream & operator<<(ostream & out, const Complex & other)
{
	out << "(" << other.real << "," << other.imaginary << ")" << flush;
	return out;
}

Complex operator+(const Complex & nb1, const Complex & nb2)
{
	return Complex(nb1.real + nb2.real, nb1.imaginary+ nb2.imaginary);
}

Complex operator+(double b, const Complex & nb)
{
	return Complex(nb.real+b, nb.imaginary);
}

Complex operator+(const Complex & nb, double b)
{
	return Complex(nb.real+b, nb.imaginary);
}

bool operator==(const Complex & nb1, const Complex & nb2)
{
	return (nb1.real == nb2.real) && (nb1.imaginary == nb2.imaginary);
}

bool operator!=(const Complex & nb1, const Complex & nb2)
{
	return !(nb1==nb2);
}
