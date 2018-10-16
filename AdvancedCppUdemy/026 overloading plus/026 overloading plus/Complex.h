#pragma once
#include<iostream>
using namespace std;

class Complex
{private:
	double real;
	double imaginary;
public:
	Complex();
	Complex(double, double);
	Complex(const Complex& other);
	~Complex();
	const Complex& operator= (const Complex& other);
	friend ostream& operator<<(ostream& out, const Complex& other);
	friend Complex operator+(const Complex& nb1, const Complex& nb2);
	friend Complex operator+(double b, const Complex& nb);
	friend Complex operator+(const Complex& nb,double b);
	friend bool operator==(const Complex& nb1, const Complex& nb2);
	friend bool operator!=(const Complex& nb1, const Complex& nb2);
};

