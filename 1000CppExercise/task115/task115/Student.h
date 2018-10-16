#pragma once
#include <string>
#include <iostream>

class Student
{
private:
	char name[100];
	float mathMark;
	float literatureMark;
public:
	Student();
	Student(float math);
	~Student();
	Student passInfo();
	/*mathMark*/
	float getMathMark() const { return mathMark; }
	void setMathMark(float val) { mathMark = val; }
	/*literatureMark*/
	float getLiteratureMark() const { return literatureMark; }
	void setLiteratureMark(float val) { literatureMark = val; }
	std::string getName ()const
	{
		return std::string(name);
	}
	void setName(const char* const &name)
	{
		strcpy_s(this->name, sizeof(this->name), name);
	}

	void showNextStudent(const Student & a)
	{
		std::cout << a.getMathMark() << std::endl;
	}
};

	