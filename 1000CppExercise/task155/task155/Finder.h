#pragma once
#include <assert.h>
#include "Segment.h"
#include <vector>
class Finder
{
public:
	Finder();
	~Finder();
template <class A>
A findFurthestElement(const A const * arr, int size, A landMark);
template <class A>
A findNearestElement(const A const * arr, int size, A landMark);
	/*
	task 157
	Cho mảng một chiều các số có thể là thực, double, nguyên, hãy tìm đoạn [a,b] sao cho đoạn này
	chứa tất cả các giá trị trong mảng (timdoan).
	*/
template <class KieuDuLieu>
Segment<KieuDuLieu> findSegment(const KieuDuLieu * const arr, int size);

	/*
	159.Cho mảng một chiều các số thực hãy tìm giá trị đầu tiên lớn hơn giá trị
	2003 (dautien). Nếu mảng không có giá trị thỏa điều kiện trên thì hàm
	trả về giá trị là 0.
	*/
float findFirstElementMoreThanN(const float * const arr, int size, float N);


		/*
		.Cho mảng một chiều các số thực, hãy viết hàm tìm giá trị âm cuối cùng
		lớn hơn giá trị -1 (cuoicung). Nếu mảng không có giá trị thỏa điều kiện
		trên thì hàm trả về giá trị không chẵn là 0
		
		*/
float findLastNegativeElement(const float * const arr, int size);

	/*Bi 161
	Cho mảng một chiều các số nguyên, hãy tìm giá trị đầu tiên trong mảng
	nằm trong khoảng (x,y) cho trước (dautientrongdoan). Nếu mảng
	không có giá trị thỏa điều kiện trên thì hàm trả về giá trị là x
	*/
template <class A>
A findFirstElementInSeg(const A const * arr, int size, A min, A max);
	/*Bai 162:
	Cho mảng một chiều các số thực. Hãy viết hàm tìm một vị trí trong
	mảng thỏa hai điền kiện: có hai giá trị lân cận và giá trị tại vị trí đó
	bằng tích hai giá trị lân cận. Nếu mảng không tồn tại giá trị như vậy thì
	hàm trả về giá trị - 1.
	*/
float findElementEqualMulOf2AdjacentElement(const float const * arr, int size);

	/*
	Tìm số chính phương đầu tiên trong mảng một chiều các số nguyên
	*/
int findSquareNumber(const int const * arr, int size);

	/*
	Cho mảng một chiều các số nguyên, hãy viết hàm tìm giá trị đầu tiên
	trong mảng thỏa tính chất số gánh. (ví dụ giá trị 12321)
	*/
bool isPalidromeNumber(int N);

	/*Bài 165
	Hãy tìm giá trị đầu tiên trong mảng một chiều các số nguyên có chữ số
	đầu tiên là chữ số lẻ (dauledautien). Nếu trong mảng không tồn tại giá
	trị như vậy thì hàm sẽ trả về giá trị 0.
	*/
int findFirstOddNumber(const int const * arr, int size);
bool isOddFirstDigit(int N);

/*Bai 166
Cho mảng một chiều các số nguyên. Hãy viết hàm tìm giá trị đầu tiên
trong mảng có dạng 2muk .Nếu mảng không tồn tại giá trị dạng 2k thì hàm
sẽ trả về giá trị 0.
*/
int findFirst2kElement(int const * arr, int size);

bool is2KNumber(int N);

/*Bai 167
Hãy tìm giá trị thỏa điều kiện toàn chữ số lẻ và là giá trị lớn nhất thỏa
điều kiện ấy trong mảng một chiều các số nguyên (nếu mảng không có
giá trị thỏa điều kiện trên thì hàm trả về giá trị 0).
*/

int MaxAllOddDigit(const int const * arr, int size);

bool isAllOddDigit(int N);

/*Bai 169
(*) Cho mảng một chiều các số nguyên. Hãy viết hàm tìm số chẵn lớn
nhất nhỏ hơn mọi giá trị lẻ có trong mảng.
*/
int findMaxEvenNumGreaterThanAllOddNumber(const int const * arr, int size);

/*Bài 170
Cho mảng một chiều các số nguyên. Hãy viết hàm tìm số nguyên tố
nhỏ nhất và lớn hơn mọi giá trị có trong mảng.
Đề bài bài này hơi ngu
Solution: chỉ cần tìm phần tử lớn nhất sau đó kiểm tra nó có phải số nguyên tố hay không là oki
*/

/*Bài 171
Cho mảng một chiều các số nguyên dương. Hãy viết hàm tìm ước
chung lớn nhất của tất cả các phần tử trong mảng
*/
int findGCDOfArr(const int const * arr, int size);

int GCD(int M, int N);


/*Bai 173
Cho mảng một chiều các số nguyên. Hãy viết hàm tìm chữ số xuất
hiện ít nhất trong mảng (timchuso).
*/
std::vector<int> ChuSoXuatHienNhieuNhat(const int const * arr, int size);


/*Bai 172
Cho mảng một chiều các số nguyên dương. Hãy viết hàm tìm bội
chung nhỏ nhất của tất cả các phần tử trong mảng.
*/

int findLCMOfAllArray(const int const * arr, int size);
int LCM(int M, int N);


/*Bai 173
Cho mảng số thực có nhiều hơn hai giá trị và các giá trị trong mảng
khác nhau từng đôi một. Hãy viết hàm liệt kê tất cả các cặp giá trị (a,b)
trong mảng thỏa điều kiện a <= b
*/
void lietKeCacPhanTu(const int const * arr, int size);


/*Bai 174
Cho mảng số thực có nhiều hơn hai giá trị và các giá trị trong mảng
khác nhau từng đôi một. Hãy viết hàm tìm hai giá trị gần nhau nhất
trong mảng (gannhaunhat). Lưu ý: Mảng có các giá trị khác nhau từng
đôi một còn có tên là mảng phân biệt.
*/
void timCapPhanTuGanNhauNhat( int * arr, int size);
void quicksort(int * arr, int l, int r);
void quicksortV_2(int * arr, int l, int r);

/*Bai 176
Hãy liệt kê các số âm trong mảng một chiều các số thực (lietkeam).
*/
void lietKeCacPhanTuAm(const int const * arr, int size);
};


template<class A>
inline A Finder::findFurthestElement(const A const * arr, int size, A landMark)
{
	assert(arr != NULL);
	A maxDistance = abs(arr[0] - landMark);
	A FurthestElement = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (maxDistance < abs(arr[i] - landMark))
		{
			maxDistance = abs(arr[i] - landMark);
			FurthestElement = arr[i];
		}
	}
	return FurthestElement;
}

template<class A>
inline A Finder::findNearestElement(const A const * arr, int size, A landMark)
{
	assert(arr != NULL);
	A minDistanceElement = arr[0];
	A Distance = abs(landMark - arr[0]);
	for (int i = 1; i < size; i++)
	{
		if (Distance > abs(landMark - arr[i]))
		{
			Distance = abs(landMark - arr[i]);
			minDistanceElement = arr[i];
		}
	}
	return minDistanceElement;
}

template<class KieuDuLieu>
inline Segment<KieuDuLieu> Finder::findSegment(const KieuDuLieu * const arr, int size)
{
	assert(arr != NULL);
	KieuDuLieu max = arr[0];
	KieuDuLieu min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}
	return Segment<KieuDuLieu>(max, min);
}

template<class A>
inline A Finder::findFirstElementInSeg(const A const * arr, int size, A min, A max)
{
	Segment<A> a = Segment<A>(min, max);
	for (int i = 0; i < size; i++)
	{
		if (a.checkElementInSegment(arr[i])) return arr[i];
	}
	return min;
}

