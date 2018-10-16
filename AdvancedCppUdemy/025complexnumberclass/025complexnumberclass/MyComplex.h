#pragma once
#include <iostream>
using namespace std;
namespace caveofprogramming {

	class MyComplex
	{
	private:
		double real;
		double imaginary;

	public:
		MyComplex();
		MyComplex(double real, double imaginary);
		~MyComplex();
		//copy constructor
		MyComplex(const MyComplex& other);
		//Shift left operator
		const MyComplex& operator=(const MyComplex& other);
		friend ostream& operator<< (ostream & out, const MyComplex& complexnumber);
	};

}

