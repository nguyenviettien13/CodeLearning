#pragma once

class CountDigit
{
public:
	CountDigit();
	~CountDigit();
	/*
	task 43
	Hãy đếm số lượng chữ số của số nguyên dương n
	*/
	static int countDigit(int n);

	/*
	task 44
	Hãy đếm số lượng chữ số của số nguyên dương n.
	*/
	static int sumDigit(int n);

	/*
	task 45
	Hãy tính tích các chữ số của số nguyên dương n.
	*/
	static int productionDigit(int n);

	/*
	task 46
	Hãy đếm số lượng chữ số lẻ của số nguyên dương n
	*/
	static int countOddDigit(int n);
	
	/*
	task 47
	Hãy tính tổng các chữ số chẵn của số nguyên dương n.
	*/
	static int countEventDigit(int n);

	/*
	task 48
	Hãy tính tích các chữ số lẻ của số nguyên dương n.
	*/
	static int productionOddDigit(int n);

	/*
	task 49
	Hãy tìm chữ số đầu tiên của n
	*/
	static int findFirstDigit(int n);

	/*
	task 50
	Hãy tìm chữ số đảo ngược của số nguyên dương n
	*/
	static int findRevertNumber(int n);

	/*
	task 51
	Tìm chữ số lớn nhất của số nguyên dương n.
	*/
	static int findMaxDigit(int n);

	/*
	task 52
	Tìm chữ số nhỏ nhất của số nguyên dương n
	*/
	static int findMinDigit(int n);

	/*
	task 53
	Hãy đếm số lượng chữ số lớn nhất của số nguyên dương n.
	*/
	static int countMaxDigit(int n);

	/*
	task 54
	Hãy đếm số lượng chữ số nho nhất của số nguyên dương n.
	*/
	static int countMinDigit(int n);

	/*
	task 55
	Hãy đêm số lượng chữ số đầu tiên của số nguyên dương n
	*/
	static int countFirstDigit(int n);

	/*task 56
	Hãy kiểm tra số nguyên dương n có toàn chữ số lẻ hay không?
	*/
	static bool isAllOddDigit(int n);

	/*task 57
	Hãy kiểm tra số nguyên dương n có toàn chữ số chẵn hay không?
	*/
	static bool isAllEvenDigit(int n);

	/*task 59
	Hãy kiểm tra số nguyên dương n có phải số đối xứng hay không?
	*/
	static bool isSymetry(int n);

	/*task 60
	Hãy kiểm tra các chữ số của số nguyên dương n có tăng dần từ trái
	sang phải hay không?
	*/
	static bool isAscending(int n);

	/*
	task 61
	Hãy kiểm tra các chữ số của số nguyên dương n có giảm dần từ trái
	sang phải hay không?
	*/
	static bool isSpiralDigit(int n);
};

