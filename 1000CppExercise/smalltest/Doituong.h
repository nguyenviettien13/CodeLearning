#pragma once
#include "string"
#include "DoiTuong2.h"
class Doituong
{
private:
	std::string _ten;
	DoiTuong2 _doituong2;
public:
	Doituong(std::string ten = "dt" );
	~Doituong();
	
	
	std::string getTen() const { return _ten; }
	void setTen(std::string val) { _ten = val; }
	DoiTuong2 & getDoituong2() { return _doituong2; }
	void setDoituong2(DoiTuong2 val) { _doituong2 = val; }
};

