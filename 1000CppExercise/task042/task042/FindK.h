#pragma once
/*
Description problem
Cho n là số nguyên dương. Hãy tìm giá trị nguyên dương k lớn nhất sao
cho S(k) < n. Trong đó chuỗi S(k) được định nghĩa như sau : S(k) = 1 +
2 + 3 + … + k
*/
class FindK
{
public:
	FindK();
	~FindK();
	static int findK(int n);
};

