#pragma once
#include <iostream>
#include <typeinfo>
using namespace std;

template <typename T>
class ring
{
public:
	class iterator;

};
template <typename T>
class ring<T>::iterator {
public:
	void print();

};
template <typename T>
void ring<T>::iterator::print()
{
	cout << "hello from iterator!!!" << typeid(T()).name() << endl;
	cout << "hello from iterator!!!" << T() << endl;
}

