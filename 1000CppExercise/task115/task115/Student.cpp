#include "Student.h"
#include <stdio.h>
#include <iostream>
#include <ostream>

Student::Student()
{
}

Student::Student(float math)
{
	std::cout << "khoi tao bien student" << std::endl;
	this->setMathMark(math);

}


Student::~Student()
{
	std::cout << "huy bien student" << std::endl;
}

Student Student::passInfo()
{
	printf("Enter the name of student: ");
	scanf_s("%100[^\n0-9]", name, sizeof(name));
	std::cout << name << std::endl;
	printf("Enter the point of Math: ");
	scanf_s("%f", &mathMark);
	printf("Enter the point of Literature:");
	scanf_s("%f", &literatureMark);
	return *this;
}

std::ostream& operator<<(std::ostream& os, Student &student)
{
	std::cout << (student.getMathMark() + student.getLiteratureMark()) / (float)2 << "\t" << student.getName();
	return os;
}



int main()
{
	Student s;
	s.passInfo();
	s.setName("Name1");
	std::cout << s << std::endl;

	std::string name2("Name 2");
	s.setName(name2.c_str());
	std::cout << s << std::endl;

	char name3[] = "Name3";
	s.setName(name3);
	std::cout << s << std::endl;

	char* name4 = new char[3];
	strcpy_s(name4, sizeof(name4), "two");
	s.setName(name4);
	return 1;
}
