#pragma once
#include <vector>
class FindCommonDivisor
{
private:
	unsigned int number;
	std::vector<int>* commonDivisorSet;
public:
	FindCommonDivisor(unsigned int number);
	~FindCommonDivisor();
	/*number*/
	unsigned int getNumber() const { return number; }
	void setNumber(unsigned int val) { number = val; }
	void findCommonDivisor();
	void showCommonDivisor();
	/*task 21*/
	int sumCommonDivisor();
	/*task 22*/
	int findProductionOfallCommonDivisor();
	/*task 23*/
	int countCommonDivisor();

	
	/*task 24*/
	int countOddCommonDivisor();
	/*task 26
	Tính tích tất cả “ước số lẻ” của số nguyên dương n.
	*/
	int findProductionOfAllOddCommonDivisor();
	/*
	task 27
	Đếm số lượng “ướ c số chẵn” của số nguyên dương n.
	*/
	int countEvenCommonDivisor();

	/*
	task 28
	Cho số nguyên dương n. Tính tổng các ước số nhỏ hơn chính nó.
	*/
	int findSumAllCDExceptIt();
	/*
	task 29
	Tìm ước số lẻ lớn nhất của số nguyên dương n. Ví dụ n = 100 ước lẻ
	lớn nhất của 100 là 25.
	*/
	int findOddGCD();

};

