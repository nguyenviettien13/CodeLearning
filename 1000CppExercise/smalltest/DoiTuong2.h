#pragma once
#include "string"
class DoiTuong2
{
private:
	std::string _ten;
public:
	DoiTuong2(std::string ten ="dt2");
	DoiTuong2( const DoiTuong2& dt2);
	DoiTuong2& operator = (const DoiTuong2& rhs);
	~DoiTuong2();
	std::string getTen() const { return _ten; }
	void setTen(std::string val) { _ten = val; }
};

