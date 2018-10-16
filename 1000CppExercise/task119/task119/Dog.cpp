#include "Dog.h"
#include <iostream>

int Dog::id = 1;

Dog::Dog()
{
	this->personalid = id++;
	std::cout << "create object A " << personalid << std::endl;
}


Dog::~Dog()
{
	std::cout << "Destroy object A " << personalid << std::endl;

}
