#include "string.h"
#include "gui.h"

/************************************************************************/
/* Các phương thức wstring                                              */
/************************************************************************/
bool				std::wcslesscmp::operator()(const std::wstring& lhs, const std::wstring& rhs) const
{
	return lhs.compare(rhs) < 0;
}
bool				std::vnslesscmp::operator()(const std::wstring& lhs, const std::wstring& rhs) const
{
	std::wstring lhsTone;
	std::wstring rhsTone;
	int lhsLength = lhs.size();
	int rhsLength = rhs.size();
	for (int i = 0; i < lhsLength; i++)
	{
		if (i >= rhsLength) return 0;
		else if (i < rhsLength)
		{
			double lhsBase = 0.0;
			switch (lhs[i])
			{
			case L'a': lhsBase = 1.00;	lhsTone += L"0"; break;
			case L'A': lhsBase = 1.50;	lhsTone += L"0"; break;
			case L'à': lhsBase = 1.00;	lhsTone += L"f"; break;
			case L'À': lhsBase = 1.50;	lhsTone += L"f"; break;
			case L'á': lhsBase = 1.00;	lhsTone += L"s"; break;
			case L'Á': lhsBase = 1.50;	lhsTone += L"s"; break;
			case L'ả': lhsBase = 1.00;	lhsTone += L"r"; break;
			case L'Ả': lhsBase = 1.50;	lhsTone += L"r"; break;
			case L'ã': lhsBase = 1.00;	lhsTone += L"x"; break;
			case L'Ã': lhsBase = 1.50;	lhsTone += L"x"; break;
			case L'ạ': lhsBase = 1.00;	lhsTone += L"j"; break;
			case L'Ạ': lhsBase = 1.50;	lhsTone += L"j"; break;
			case L'ă': lhsBase = 2.00;	lhsTone += L"0"; break;
			case L'Ă': lhsBase = 2.50;	lhsTone += L"0"; break;
			case L'ằ': lhsBase = 2.00;	lhsTone += L"f"; break;
			case L'Ằ': lhsBase = 2.50;	lhsTone += L"f"; break;
			case L'ắ': lhsBase = 2.00;	lhsTone += L"s"; break;
			case L'Ắ': lhsBase = 2.50;	lhsTone += L"s"; break;
			case L'ẳ': lhsBase = 2.00;	lhsTone += L"r"; break;
			case L'Ẳ': lhsBase = 2.50;	lhsTone += L"r"; break;
			case L'ẵ': lhsBase = 2.00;	lhsTone += L"x"; break;
			case L'Ẵ': lhsBase = 2.50;	lhsTone += L"x"; break;
			case L'ặ': lhsBase = 2.00;	lhsTone += L"j"; break;
			case L'Ặ': lhsBase = 2.50;	lhsTone += L"j"; break;
			case L'â': lhsBase = 3.00;	lhsTone += L"0"; break;
			case L'Â': lhsBase = 3.50;	lhsTone += L"0"; break;
			case L'ầ': lhsBase = 3.00;	lhsTone += L"f"; break;
			case L'Ầ': lhsBase = 3.50;	lhsTone += L"f"; break;
			case L'ấ': lhsBase = 3.00;	lhsTone += L"s"; break;
			case L'Ấ': lhsBase = 3.50;	lhsTone += L"s"; break;
			case L'ẩ': lhsBase = 3.00;	lhsTone += L"r"; break;
			case L'Ẩ': lhsBase = 3.50;	lhsTone += L"r"; break;
			case L'ẫ': lhsBase = 3.00;	lhsTone += L"x"; break;
			case L'Ẫ': lhsBase = 3.50;	lhsTone += L"x"; break;
			case L'ậ': lhsBase = 3.00;	lhsTone += L"j"; break;
			case L'Ậ': lhsBase = 3.50;	lhsTone += L"j"; break;
			case L'b': lhsBase = 4.00;	lhsTone += L"0"; break;
			case L'B': lhsBase = 4.50;	lhsTone += L"0"; break;
			case L'c': lhsBase = 5.00;	lhsTone += L"0"; break;
			case L'C': lhsBase = 5.50;	lhsTone += L"0"; break;
			case L'd': lhsBase = 6.00;	lhsTone += L"0"; break;
			case L'D': lhsBase = 6.50;	lhsTone += L"0"; break;
			case L'đ': lhsBase = 7.00;	lhsTone += L"0"; break;
			case L'Đ': lhsBase = 7.50;	lhsTone += L"0"; break;
			case L'e': lhsBase = 8.00;	lhsTone += L"0"; break;
			case L'E': lhsBase = 8.50;	lhsTone += L"0"; break;
			case L'è': lhsBase = 8.00;	lhsTone += L"f"; break;
			case L'È': lhsBase = 8.50;	lhsTone += L"f"; break;
			case L'é': lhsBase = 8.00;	lhsTone += L"s"; break;
			case L'É': lhsBase = 8.50;	lhsTone += L"s"; break;
			case L'ẻ': lhsBase = 8.00;	lhsTone += L"r"; break;
			case L'Ẻ': lhsBase = 8.50;	lhsTone += L"r"; break;
			case L'ẽ': lhsBase = 8.00;	lhsTone += L"x"; break;
			case L'Ẽ': lhsBase = 8.50;	lhsTone += L"x"; break;
			case L'ẹ': lhsBase = 8.00;	lhsTone += L"j"; break;
			case L'Ẹ': lhsBase = 8.50;	lhsTone += L"j"; break;
			case L'ê': lhsBase = 9.00;	lhsTone += L"0"; break;
			case L'Ê': lhsBase = 9.50;	lhsTone += L"0"; break;
			case L'ề': lhsBase = 9.00;	lhsTone += L"f"; break;
			case L'Ề': lhsBase = 9.50;	lhsTone += L"f"; break;
			case L'ế': lhsBase = 9.00;	lhsTone += L"s"; break;
			case L'Ế': lhsBase = 9.50;	lhsTone += L"s"; break;
			case L'ể': lhsBase = 9.00;	lhsTone += L"r"; break;
			case L'Ể': lhsBase = 9.50;	lhsTone += L"r"; break;
			case L'ễ': lhsBase = 9.00;	lhsTone += L"x"; break;
			case L'Ễ': lhsBase = 9.50;	lhsTone += L"x"; break;
			case L'ệ': lhsBase = 9.00;	lhsTone += L"j"; break;
			case L'Ệ': lhsBase = 9.50;	lhsTone += L"j"; break;
			case L'g': lhsBase = 10.00; lhsTone += L"0"; break;
			case L'G': lhsBase = 10.50; lhsTone += L"0"; break;
			case L'h': lhsBase = 11.00; lhsTone += L"0"; break;
			case L'H': lhsBase = 11.50; lhsTone += L"0"; break;
			case L'i': lhsBase = 12.00; lhsTone += L"0"; break;
			case L'I': lhsBase = 12.50; lhsTone += L"0"; break;
			case L'ì': lhsBase = 12.00; lhsTone += L"f"; break;
			case L'Ì': lhsBase = 12.50; lhsTone += L"f"; break;
			case L'í': lhsBase = 12.00; lhsTone += L"s"; break;
			case L'Í': lhsBase = 12.50; lhsTone += L"s"; break;
			case L'ỉ': lhsBase = 12.00; lhsTone += L"r"; break;
			case L'Ỉ': lhsBase = 12.50; lhsTone += L"r"; break;
			case L'ĩ': lhsBase = 12.00; lhsTone += L"x"; break;
			case L'Ĩ': lhsBase = 12.50; lhsTone += L"x"; break;
			case L'ị': lhsBase = 12.00; lhsTone += L"j"; break;
			case L'Ị': lhsBase = 12.50; lhsTone += L"j"; break;
			case L'k': lhsBase = 13.00; lhsTone += L"0"; break;
			case L'K': lhsBase = 13.50; lhsTone += L"0"; break;
			case L'l': lhsBase = 14.00; lhsTone += L"0"; break;
			case L'L': lhsBase = 14.50; lhsTone += L"0"; break;
			case L'm': lhsBase = 15.00; lhsTone += L"0"; break;
			case L'M': lhsBase = 15.50; lhsTone += L"0"; break;
			case L'n': lhsBase = 16.00; lhsTone += L"0"; break;
			case L'N': lhsBase = 16.50; lhsTone += L"0"; break;
			case L'o': lhsBase = 17.00; lhsTone += L"0"; break;
			case L'O': lhsBase = 17.50; lhsTone += L"0"; break;
			case L'ò': lhsBase = 17.00; lhsTone += L"f"; break;
			case L'Ò': lhsBase = 17.50; lhsTone += L"f"; break;
			case L'ó': lhsBase = 17.00; lhsTone += L"s"; break;
			case L'Ó': lhsBase = 17.50; lhsTone += L"s"; break;
			case L'ỏ': lhsBase = 17.00; lhsTone += L"r"; break;
			case L'Ỏ': lhsBase = 17.50; lhsTone += L"r"; break;
			case L'õ': lhsBase = 17.00; lhsTone += L"x"; break;
			case L'Õ': lhsBase = 17.50; lhsTone += L"x"; break;
			case L'ọ': lhsBase = 17.00; lhsTone += L"j"; break;
			case L'Ọ': lhsBase = 17.50; lhsTone += L"j"; break;
			case L'ô': lhsBase = 18.00; lhsTone += L"0"; break;
			case L'Ô': lhsBase = 18.50; lhsTone += L"0"; break;
			case L'ồ': lhsBase = 18.00; lhsTone += L"f"; break;
			case L'Ồ': lhsBase = 18.50; lhsTone += L"f"; break;
			case L'ố': lhsBase = 18.00; lhsTone += L"s"; break;
			case L'Ố': lhsBase = 18.50; lhsTone += L"s"; break;
			case L'ổ': lhsBase = 18.00; lhsTone += L"r"; break;
			case L'Ổ': lhsBase = 18.50; lhsTone += L"r"; break;
			case L'ỗ': lhsBase = 18.00; lhsTone += L"x"; break;
			case L'Ỗ': lhsBase = 18.50; lhsTone += L"x"; break;
			case L'ộ': lhsBase = 18.00; lhsTone += L"j"; break;
			case L'Ộ': lhsBase = 18.50; lhsTone += L"j"; break;
			case L'ơ': lhsBase = 19.00; lhsTone += L"0"; break;
			case L'Ơ': lhsBase = 19.50; lhsTone += L"0"; break;
			case L'ờ': lhsBase = 19.00; lhsTone += L"f"; break;
			case L'Ờ': lhsBase = 19.50; lhsTone += L"f"; break;
			case L'ớ': lhsBase = 19.00; lhsTone += L"s"; break;
			case L'Ớ': lhsBase = 19.50; lhsTone += L"s"; break;
			case L'ở': lhsBase = 19.00; lhsTone += L"r"; break;
			case L'Ở': lhsBase = 19.50; lhsTone += L"r"; break;
			case L'ỡ': lhsBase = 19.00; lhsTone += L"x"; break;
			case L'Ỡ': lhsBase = 19.50; lhsTone += L"x"; break;
			case L'ợ': lhsBase = 19.00; lhsTone += L"j"; break;
			case L'Ợ': lhsBase = 19.50; lhsTone += L"j"; break;
			case L'p': lhsBase = 20.00; lhsTone += L"0"; break;
			case L'P': lhsBase = 20.50; lhsTone += L"0"; break;
			case L'q': lhsBase = 21.00; lhsTone += L"0"; break;
			case L'Q': lhsBase = 21.50; lhsTone += L"0"; break;
			case L'r': lhsBase = 22.00; lhsTone += L"0"; break;
			case L'R': lhsBase = 22.50; lhsTone += L"0"; break;
			case L's': lhsBase = 23.00; lhsTone += L"0"; break;
			case L'S': lhsBase = 23.50; lhsTone += L"0"; break;
			case L't': lhsBase = 24.00; lhsTone += L"0"; break;
			case L'T': lhsBase = 24.50; lhsTone += L"0"; break;
			case L'u': lhsBase = 25.00; lhsTone += L"0"; break;
			case L'U': lhsBase = 25.50; lhsTone += L"0"; break;
			case L'ù': lhsBase = 25.00; lhsTone += L"f"; break;
			case L'Ù': lhsBase = 25.50; lhsTone += L"f"; break;
			case L'ú': lhsBase = 25.00; lhsTone += L"s"; break;
			case L'Ú': lhsBase = 25.50; lhsTone += L"s"; break;
			case L'ủ': lhsBase = 25.00; lhsTone += L"r"; break;
			case L'Ủ': lhsBase = 25.50; lhsTone += L"r"; break;
			case L'ũ': lhsBase = 25.00; lhsTone += L"x"; break;
			case L'Ũ': lhsBase = 25.50; lhsTone += L"x"; break;
			case L'ụ': lhsBase = 25.00; lhsTone += L"j"; break;
			case L'Ụ': lhsBase = 25.50; lhsTone += L"j"; break;
			case L'ư': lhsBase = 26.00; lhsTone += L"0"; break;
			case L'Ư': lhsBase = 26.50; lhsTone += L"0"; break;
			case L'ừ': lhsBase = 26.00; lhsTone += L"f"; break;
			case L'Ừ': lhsBase = 26.50; lhsTone += L"f"; break;
			case L'ứ': lhsBase = 26.00; lhsTone += L"s"; break;
			case L'Ứ': lhsBase = 26.50; lhsTone += L"s"; break;
			case L'ử': lhsBase = 26.00; lhsTone += L"r"; break;
			case L'Ử': lhsBase = 26.50; lhsTone += L"r"; break;
			case L'ữ': lhsBase = 26.00; lhsTone += L"x"; break;
			case L'Ữ': lhsBase = 26.50; lhsTone += L"x"; break;
			case L'ự': lhsBase = 26.00; lhsTone += L"j"; break;
			case L'Ự': lhsBase = 26.50; lhsTone += L"j"; break;
			case L'v': lhsBase = 27.00; lhsTone += L"0"; break;
			case L'V': lhsBase = 27.50; lhsTone += L"0"; break;
			case L'x': lhsBase = 28.00; lhsTone += L"0"; break;
			case L'X': lhsBase = 28.50; lhsTone += L"0"; break;
			case L'y': lhsBase = 29.00; lhsTone += L"0"; break;
			case L'Y': lhsBase = 29.50; lhsTone += L"0"; break;
			case L'ỳ': lhsBase = 29.00; lhsTone += L"f"; break;
			case L'Ỳ': lhsBase = 29.50; lhsTone += L"f"; break;
			case L'ý': lhsBase = 29.00; lhsTone += L"s"; break;
			case L'Ý': lhsBase = 29.50; lhsTone += L"s"; break;
			case L'ỷ': lhsBase = 29.00; lhsTone += L"r"; break;
			case L'Ỷ': lhsBase = 29.50; lhsTone += L"r"; break;
			case L'ỹ': lhsBase = 29.00; lhsTone += L"x"; break;
			case L'Ỹ': lhsBase = 29.50; lhsTone += L"x"; break;
			case L'ỵ': lhsBase = 29.00; lhsTone += L"j"; break;
			case L'Ỵ': lhsBase = 29.50; lhsTone += L"j"; break;
			case L'j': lhsBase = 30.00; lhsTone += L"0"; break;
			case L'J': lhsBase = 30.50; lhsTone += L"0"; break;
			case L'f': lhsBase = 31.00; lhsTone += L"0"; break;
			case L'F': lhsBase = 31.50; lhsTone += L"0"; break;
			case L'w': lhsBase = 32.00; lhsTone += L"0"; break;
			case L'W': lhsBase = 32.50; lhsTone += L"0"; break;
			case L'z': lhsBase = 33.00; lhsTone += L"0"; break;
			case L'Z': lhsBase = 33.50; lhsTone += L"0"; break;
			}

			double rhsBase = 0.0;
			switch (rhs[i])
			{
			case L'a': rhsBase = 1.00;	rhsTone += L"0"; break;
			case L'A': rhsBase = 1.50;	rhsTone += L"0"; break;
			case L'à': rhsBase = 1.00;	rhsTone += L"f"; break;
			case L'À': rhsBase = 1.50;	rhsTone += L"f"; break;
			case L'á': rhsBase = 1.00;	rhsTone += L"s"; break;
			case L'Á': rhsBase = 1.50;	rhsTone += L"s"; break;
			case L'ả': rhsBase = 1.00;	rhsTone += L"r"; break;
			case L'Ả': rhsBase = 1.50;	rhsTone += L"r"; break;
			case L'ã': rhsBase = 1.00;	rhsTone += L"x"; break;
			case L'Ã': rhsBase = 1.50;	rhsTone += L"x"; break;
			case L'ạ': rhsBase = 1.00;	rhsTone += L"j"; break;
			case L'Ạ': rhsBase = 1.50;	rhsTone += L"j"; break;
			case L'ă': rhsBase = 2.00;	rhsTone += L"0"; break;
			case L'Ă': rhsBase = 2.50;	rhsTone += L"0"; break;
			case L'ằ': rhsBase = 2.00;	rhsTone += L"f"; break;
			case L'Ằ': rhsBase = 2.50;	rhsTone += L"f"; break;
			case L'ắ': rhsBase = 2.00;	rhsTone += L"s"; break;
			case L'Ắ': rhsBase = 2.50;	rhsTone += L"s"; break;
			case L'ẳ': rhsBase = 2.00;	rhsTone += L"r"; break;
			case L'Ẳ': rhsBase = 2.50;	rhsTone += L"r"; break;
			case L'ẵ': rhsBase = 2.00;	rhsTone += L"x"; break;
			case L'Ẵ': rhsBase = 2.50;	rhsTone += L"x"; break;
			case L'ặ': rhsBase = 2.00;	rhsTone += L"j"; break;
			case L'Ặ': rhsBase = 2.50;	rhsTone += L"j"; break;
			case L'â': rhsBase = 3.00;	rhsTone += L"0"; break;
			case L'Â': rhsBase = 3.50;	rhsTone += L"0"; break;
			case L'ầ': rhsBase = 3.00;	rhsTone += L"f"; break;
			case L'Ầ': rhsBase = 3.50;	rhsTone += L"f"; break;
			case L'ấ': rhsBase = 3.00;	rhsTone += L"s"; break;
			case L'Ấ': rhsBase = 3.50;	rhsTone += L"s"; break;
			case L'ẩ': rhsBase = 3.00;	rhsTone += L"r"; break;
			case L'Ẩ': rhsBase = 3.50;	rhsTone += L"r"; break;
			case L'ẫ': rhsBase = 3.00;	rhsTone += L"x"; break;
			case L'Ẫ': rhsBase = 3.50;	rhsTone += L"x"; break;
			case L'ậ': rhsBase = 3.00;	rhsTone += L"j"; break;
			case L'Ậ': rhsBase = 3.50;	rhsTone += L"j"; break;
			case L'b': rhsBase = 4.00;	rhsTone += L"0"; break;
			case L'B': rhsBase = 4.50;	rhsTone += L"0"; break;
			case L'c': rhsBase = 5.00;	rhsTone += L"0"; break;
			case L'C': rhsBase = 5.50;	rhsTone += L"0"; break;
			case L'd': rhsBase = 6.00;	rhsTone += L"0"; break;
			case L'D': rhsBase = 6.50;	rhsTone += L"0"; break;
			case L'đ': rhsBase = 7.00;	rhsTone += L"0"; break;
			case L'Đ': rhsBase = 7.50;	rhsTone += L"0"; break;
			case L'e': rhsBase = 8.00;	rhsTone += L"0"; break;
			case L'E': rhsBase = 8.50;	rhsTone += L"0"; break;
			case L'è': rhsBase = 8.00;	rhsTone += L"f"; break;
			case L'È': rhsBase = 8.50;	rhsTone += L"f"; break;
			case L'é': rhsBase = 8.00;	rhsTone += L"s"; break;
			case L'É': rhsBase = 8.50;	rhsTone += L"s"; break;
			case L'ẻ': rhsBase = 8.00;	rhsTone += L"r"; break;
			case L'Ẻ': rhsBase = 8.50;	rhsTone += L"r"; break;
			case L'ẽ': rhsBase = 8.00;	rhsTone += L"x"; break;
			case L'Ẽ': rhsBase = 8.50;	rhsTone += L"x"; break;
			case L'ẹ': rhsBase = 8.00;	rhsTone += L"j"; break;
			case L'Ẹ': rhsBase = 8.50;	rhsTone += L"j"; break;
			case L'ê': rhsBase = 9.00;	rhsTone += L"0"; break;
			case L'Ê': rhsBase = 9.50;	rhsTone += L"0"; break;
			case L'ề': rhsBase = 9.00;	rhsTone += L"f"; break;
			case L'Ề': rhsBase = 9.50;	rhsTone += L"f"; break;
			case L'ế': rhsBase = 9.00;	rhsTone += L"s"; break;
			case L'Ế': rhsBase = 9.50;	rhsTone += L"s"; break;
			case L'ể': rhsBase = 9.00;	rhsTone += L"r"; break;
			case L'Ể': rhsBase = 9.50;	rhsTone += L"r"; break;
			case L'ễ': rhsBase = 9.00;	rhsTone += L"x"; break;
			case L'Ễ': rhsBase = 9.50;	rhsTone += L"x"; break;
			case L'ệ': rhsBase = 9.00;	rhsTone += L"j"; break;
			case L'Ệ': rhsBase = 9.50;	rhsTone += L"j"; break;
			case L'g': rhsBase = 10.00; rhsTone += L"0"; break;
			case L'G': rhsBase = 10.50; rhsTone += L"0"; break;
			case L'h': rhsBase = 11.00; rhsTone += L"0"; break;
			case L'H': rhsBase = 11.50; rhsTone += L"0"; break;
			case L'i': rhsBase = 12.00; rhsTone += L"0"; break;
			case L'I': rhsBase = 12.50; rhsTone += L"0"; break;
			case L'ì': rhsBase = 12.00; rhsTone += L"f"; break;
			case L'Ì': rhsBase = 12.50; rhsTone += L"f"; break;
			case L'í': rhsBase = 12.00; rhsTone += L"s"; break;
			case L'Í': rhsBase = 12.50; rhsTone += L"s"; break;
			case L'ỉ': rhsBase = 12.00; rhsTone += L"r"; break;
			case L'Ỉ': rhsBase = 12.50; rhsTone += L"r"; break;
			case L'ĩ': rhsBase = 12.00; rhsTone += L"x"; break;
			case L'Ĩ': rhsBase = 12.50; rhsTone += L"x"; break;
			case L'ị': rhsBase = 12.00; rhsTone += L"j"; break;
			case L'Ị': rhsBase = 12.50; rhsTone += L"j"; break;
			case L'k': rhsBase = 13.00; rhsTone += L"0"; break;
			case L'K': rhsBase = 13.50; rhsTone += L"0"; break;
			case L'l': rhsBase = 14.00; rhsTone += L"0"; break;
			case L'L': rhsBase = 14.50; rhsTone += L"0"; break;
			case L'm': rhsBase = 15.00; rhsTone += L"0"; break;
			case L'M': rhsBase = 15.50; rhsTone += L"0"; break;
			case L'n': rhsBase = 16.00; rhsTone += L"0"; break;
			case L'N': rhsBase = 16.50; rhsTone += L"0"; break;
			case L'o': rhsBase = 17.00; rhsTone += L"0"; break;
			case L'O': rhsBase = 17.50; rhsTone += L"0"; break;
			case L'ò': rhsBase = 17.00; rhsTone += L"f"; break;
			case L'Ò': rhsBase = 17.50; rhsTone += L"f"; break;
			case L'ó': rhsBase = 17.00; rhsTone += L"s"; break;
			case L'Ó': rhsBase = 17.50; rhsTone += L"s"; break;
			case L'ỏ': rhsBase = 17.00; rhsTone += L"r"; break;
			case L'Ỏ': rhsBase = 17.50; rhsTone += L"r"; break;
			case L'õ': rhsBase = 17.00; rhsTone += L"x"; break;
			case L'Õ': rhsBase = 17.50; rhsTone += L"x"; break;
			case L'ọ': rhsBase = 17.00; rhsTone += L"j"; break;
			case L'Ọ': rhsBase = 17.50; rhsTone += L"j"; break;
			case L'ô': rhsBase = 18.00; rhsTone += L"0"; break;
			case L'Ô': rhsBase = 18.50; rhsTone += L"0"; break;
			case L'ồ': rhsBase = 18.00; rhsTone += L"f"; break;
			case L'Ồ': rhsBase = 18.50; rhsTone += L"f"; break;
			case L'ố': rhsBase = 18.00; rhsTone += L"s"; break;
			case L'Ố': rhsBase = 18.50; rhsTone += L"s"; break;
			case L'ổ': rhsBase = 18.00; rhsTone += L"r"; break;
			case L'Ổ': rhsBase = 18.50; rhsTone += L"r"; break;
			case L'ỗ': rhsBase = 18.00; rhsTone += L"x"; break;
			case L'Ỗ': rhsBase = 18.50; rhsTone += L"x"; break;
			case L'ộ': rhsBase = 18.00; rhsTone += L"j"; break;
			case L'Ộ': rhsBase = 18.50; rhsTone += L"j"; break;
			case L'ơ': rhsBase = 19.00; rhsTone += L"0"; break;
			case L'Ơ': rhsBase = 19.50; rhsTone += L"0"; break;
			case L'ờ': rhsBase = 19.00; rhsTone += L"f"; break;
			case L'Ờ': rhsBase = 19.50; rhsTone += L"f"; break;
			case L'ớ': rhsBase = 19.00; rhsTone += L"s"; break;
			case L'Ớ': rhsBase = 19.50; rhsTone += L"s"; break;
			case L'ở': rhsBase = 19.00; rhsTone += L"r"; break;
			case L'Ở': rhsBase = 19.50; rhsTone += L"r"; break;
			case L'ỡ': rhsBase = 19.00; rhsTone += L"x"; break;
			case L'Ỡ': rhsBase = 19.50; rhsTone += L"x"; break;
			case L'ợ': rhsBase = 19.00; rhsTone += L"j"; break;
			case L'Ợ': rhsBase = 19.50; rhsTone += L"j"; break;
			case L'p': rhsBase = 20.00; rhsTone += L"0"; break;
			case L'P': rhsBase = 20.50; rhsTone += L"0"; break;
			case L'q': rhsBase = 21.00; rhsTone += L"0"; break;
			case L'Q': rhsBase = 21.50; rhsTone += L"0"; break;
			case L'r': rhsBase = 22.00; rhsTone += L"0"; break;
			case L'R': rhsBase = 22.50; rhsTone += L"0"; break;
			case L's': rhsBase = 23.00; rhsTone += L"0"; break;
			case L'S': rhsBase = 23.50; rhsTone += L"0"; break;
			case L't': rhsBase = 24.00; rhsTone += L"0"; break;
			case L'T': rhsBase = 24.50; rhsTone += L"0"; break;
			case L'u': rhsBase = 25.00; rhsTone += L"0"; break;
			case L'U': rhsBase = 25.50; rhsTone += L"0"; break;
			case L'ù': rhsBase = 25.00; rhsTone += L"f"; break;
			case L'Ù': rhsBase = 25.50; rhsTone += L"f"; break;
			case L'ú': rhsBase = 25.00; rhsTone += L"s"; break;
			case L'Ú': rhsBase = 25.50; rhsTone += L"s"; break;
			case L'ủ': rhsBase = 25.00; rhsTone += L"r"; break;
			case L'Ủ': rhsBase = 25.50; rhsTone += L"r"; break;
			case L'ũ': rhsBase = 25.00; rhsTone += L"x"; break;
			case L'Ũ': rhsBase = 25.50; rhsTone += L"x"; break;
			case L'ụ': rhsBase = 25.00; rhsTone += L"j"; break;
			case L'Ụ': rhsBase = 25.50; rhsTone += L"j"; break;
			case L'ư': rhsBase = 26.00; rhsTone += L"0"; break;
			case L'Ư': rhsBase = 26.50; rhsTone += L"0"; break;
			case L'ừ': rhsBase = 26.00; rhsTone += L"f"; break;
			case L'Ừ': rhsBase = 26.50; rhsTone += L"f"; break;
			case L'ứ': rhsBase = 26.00; rhsTone += L"s"; break;
			case L'Ứ': rhsBase = 26.50; rhsTone += L"s"; break;
			case L'ử': rhsBase = 26.00; rhsTone += L"r"; break;
			case L'Ử': rhsBase = 26.50; rhsTone += L"r"; break;
			case L'ữ': rhsBase = 26.00; rhsTone += L"x"; break;
			case L'Ữ': rhsBase = 26.50; rhsTone += L"x"; break;
			case L'ự': rhsBase = 26.00; rhsTone += L"j"; break;
			case L'Ự': rhsBase = 26.50; rhsTone += L"j"; break;
			case L'v': rhsBase = 27.00; rhsTone += L"0"; break;
			case L'V': rhsBase = 27.50; rhsTone += L"0"; break;
			case L'x': rhsBase = 28.00; rhsTone += L"0"; break;
			case L'X': rhsBase = 28.50; rhsTone += L"0"; break;
			case L'y': rhsBase = 29.00; rhsTone += L"0"; break;
			case L'Y': rhsBase = 29.50; rhsTone += L"0"; break;
			case L'ỳ': rhsBase = 29.00; rhsTone += L"f"; break;
			case L'Ỳ': rhsBase = 29.50; rhsTone += L"f"; break;
			case L'ý': rhsBase = 29.00; rhsTone += L"s"; break;
			case L'Ý': rhsBase = 29.50; rhsTone += L"s"; break;
			case L'ỷ': rhsBase = 29.00; rhsTone += L"r"; break;
			case L'Ỷ': rhsBase = 29.50; rhsTone += L"r"; break;
			case L'ỹ': rhsBase = 29.00; rhsTone += L"x"; break;
			case L'Ỹ': rhsBase = 29.50; rhsTone += L"x"; break;
			case L'ỵ': rhsBase = 29.00; rhsTone += L"j"; break;
			case L'Ỵ': rhsBase = 29.50; rhsTone += L"j"; break;
			case L'j': rhsBase = 30.00; rhsTone += L"0"; break;
			case L'J': rhsBase = 30.50; rhsTone += L"0"; break;
			case L'f': rhsBase = 31.00; rhsTone += L"0"; break;
			case L'F': rhsBase = 31.50; rhsTone += L"0"; break;
			case L'w': rhsBase = 32.00; rhsTone += L"0"; break;
			case L'W': rhsBase = 32.50; rhsTone += L"0"; break;
			case L'z': rhsBase = 33.00; rhsTone += L"0"; break;
			case L'Z': rhsBase = 33.50; rhsTone += L"0"; break;
			}
			if (lhsBase != rhsBase) return (lhsBase < rhsBase);
			else if (lhsBase == 0.0 && rhsBase == 0.0 && lhs[i] != rhs[i]) return lhs[i] < rhs[i];
		}
	}
	if (rhsLength == lhsLength) return  lhsTone.compare(rhsTone) < 0;
	else return lhsLength < rhsLength;
}
bool				std::operator ==(const std::wstring& a, const std::wstring& b)
{
	return wcscmp(a.c_str(), b.c_str()) == 0;
}
bool				std::operator ==(const std::wstring& a, const wchar_t* b)
{
	return wcscmp(a.c_str(), b) == 0;
}
bool				std::operator !=(const std::wstring& a, const std::wstring& b)
{
	return wcscmp(a.c_str(), b.c_str()) != 0;
}
bool				std::operator !=(const std::wstring& a, const wchar_t* b)
{
	return wcscmp(a.c_str(), b) != 0;
}
std::wstring		std::operator +(const std::wstring& a, const std::wstring& b)
{
	std::wstring result = a;
	result += b;
	return result;
}
std::wstring		std::operator+(const wstring& wstr, wchar_t wch)
{
	wchar_t buffer[2] = { wch,0 };
	return wstr + std::wstring(buffer);
}
std::wstring		std::operator +(const std::wstring& a, const std::string& b)
{
	std::wstring result = a;
	result += b;
	return result;
}
std::wstring		std::operator +(const std::string& a, const std::wstring& b)
{
	std::wstring result = b;
	result += a;
	return result;
}
std::wstring		std::operator +(const std::wstring& wstr, int n)
{
	std::wstring result = wstr;
	wchar_t bufwstr[50] = { 0 };
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	swprintf_s(bufwstr, 50, L"%d", n);
#else
	swprintf(bufwstr, 50, L"%d", n);
#endif
	result += bufwstr;
	return result;
}
std::wstring		std::operator +(const std::wstring& wstr, long long int n)
{
	std::wstring result = wstr;
	wchar_t bufwstr[100] = { 0 };
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	swprintf_s(bufwstr, 100, L"%lld", n);
#else
	swprintf(bufwstr, 100, L"%lld", n);
#endif


	result += bufwstr;
	return result;
}
std::wstring		std::operator +(const std::wstring& wstr, double n)
{
	std::wstring result = wstr;
	wchar_t bufwstr[50] = { 0 };

#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	swprintf_s(bufwstr, 50, L"%lf", n);
#else
	swprintf(bufwstr, 50, L"%lf", n);
#endif

	result += bufwstr;
	return result;
}
void				std::operator +=(std::wstring& wstr, char ch)
{
	wstr += ((wchar_t)ch);
}
void				std::operator +=(std::wstring& wstr, int n)
{
	wchar_t bufwstr[50] = { 0 };

#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	swprintf_s(bufwstr, 50, L"%d", n);
#else
	swprintf(bufwstr, 50, L"%d", n);
#endif
	wstr += bufwstr;
}
void				std::operator +=(std::wstring& wstr, INT64 n)
{
	wchar_t bufwstr[151] = { 0 };
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	swprintf_s(bufwstr, 150, L"%lld", n);
#else
	swprintf(bufwstr, 150, L"%lld", n);
#endif
	wstr += bufwstr;
}
void				std::operator +=(std::wstring& wstr, unsigned int n)
{
	wchar_t bufwstr[50] = { 0 };
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	swprintf_s(bufwstr, 50, L"%u", n);
#else
	swprintf(bufwstr, 50, L"%u", n);
#endif
	wstr += bufwstr;
}
void				std::operator +=(std::wstring& wstr, double n)
{
	wchar_t bufwstr[50] = { 0 };
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	swprintf_s(bufwstr, 50, L"%lf", n);
#else
	swprintf(bufwstr, 50, L"%lf", n);
#endif
	wstr += bufwstr;
}
void				std::operator +=(std::wstring& wstr, const std::string& str)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	int			bufferWideCharLength = str.size() + 10;
	wchar_t *	bufferWideChar = (wchar_t*)calloc(bufferWideCharLength, sizeof(wchar_t));
	if (bufferWideChar)
	{
		MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, bufferWideChar, bufferWideCharLength);
		wstr += bufferWideChar;
		free(bufferWideChar);
	}
#else
	std::wstring_convert<std::codecvt_utf8<wchar_t>> myconv;
	wstr += myconv.from_bytes(str);
#endif
}
void				std::operator +=(std::wstring& wstr, const char* str)
{
	if (str) wstr += std::string(str);
}
/************************************************************************/
/* Các phương thức string                                              */
/************************************************************************/
bool				std::strlesscmp::operator()(const std::string& lhs, const std::string& rhs) const
{
	return lhs.compare(rhs) < 0;
}
bool				std::operator ==(const std::string& a, const std::string& b)
{
	return strcmp(a.c_str(), b.c_str()) == 0;
}
bool				std::operator !=(const std::string& a, const std::string& b)
{
	return strcmp(a.c_str(), b.c_str()) != 0;
}
std::string			std::operator +(const std::string& a, const std::string& b)
{
	std::string result = a;
	result += b;
	return result;
}
std::string			std::operator +(const std::string& str, int n)
{
	std::string result = str;
	result += n;
	return result;
}
void				std::operator +=(std::string& str, int n)
{
	char bufwstr[50] = { 0 };
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	sprintf_s(bufwstr, 50, "%d", n);
#else
	sprintf(bufwstr, "%d", n);
#endif
	str += bufwstr;
}
void				std::operator +=(std::string& str, double n)
{
	char bufwstr[50] = { 0 };
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	sprintf_s(bufwstr, 50, "%lf", n);
#else
	sprintf(bufwstr, "%lf", n);
#endif
	str += bufwstr;
}
void				std::operator +=(std::string& str, const std::wstring& wstr)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	int		bufferUtf8Length = wstr.size() * 4 + 10;
	char *	bufferUtf8 = (char*)calloc(bufferUtf8Length, sizeof(char));
	if (bufferUtf8)
	{
		WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), wstr.size(), bufferUtf8, bufferUtf8Length, 0, 0);
		str += bufferUtf8;
		free(bufferUtf8);
	}
#else
	std::wstring_convert<std::codecvt_utf8<wchar_t>> myconv;
	str += myconv.to_bytes(wstr);
#endif
}
void				std::operator +=(std::string& str, const wchar_t * wstr)
{
	if (wstr) str += std::wstring(wstr);
}
const std::wstringset&		std::Copy(std::wstringset& a, const std::wstringset&b)
{
	a.clear();
	for (auto ielenment = b.begin(); ielenment != b.end(); ielenment++) a.insert(*ielenment);
	return b;
}
const std::wstringset&		std::Copy(std::vnwstringset& a, const std::wstringset&b)
{
	a.clear();
	for (auto ielenment = b.begin(); ielenment != b.end(); ielenment++) a.insert(*ielenment);
	return b;
}
const std::wstringintmap&	std::Copy(std::wstringintmap& dest, const std::wstringintmap& source)
{
	dest.clear();
	for (auto iword = source.begin(); iword != source.end(); iword++)
	{
		dest[iword->first] = iword->second;
	}
	return source;
}
const std::wstringmap&		std::Copy(std::wstringmap& dest, const std::wstringmap& source)
{
	dest.clear();
	for (auto iword = source.begin(); iword != source.end(); iword++)
	{
		dest[iword->first] = iword->second;
	}
	return source;
}
/************************************************************************/
/* Các hàm xử lý chung wstring và string                                */
/************************************************************************/
int					StartWith(const std::string& str, const std::string& subStr)
{
	if (str.size() >= subStr.size() && subStr.size() > 0)
	{
		for (auto i = 0u; i < subStr.size(); i++)
		{
			if (str[i] != subStr[i]) return 0;
		}
		return 1;
	}
	return 0;
}
int					StartWith(const std::wstring& str, const std::wstring& subStr)
{
	if (str.size() >= subStr.size() && subStr.size() > 0)
	{
		for (auto i = 0u; i < subStr.size(); i++)
		{
			if (str[i] != subStr[i]) return 0;
		}
		return 1;
	}
	return 0;
}
int					EndWith(const std::string& str, const std::string& subStr)
{
	return (str.size() >= subStr.size() && subStr.size() > 0 && str.substr(str.size() - subStr.size()) == subStr);
}
int					EndWith(const std::wstring& str, const std::wstring& subStr)
{
	return (str.size() >= subStr.size() && subStr.size() > 0 && str.substr(str.size() - subStr.size()) == subStr);
}
std::wstring		GetWString(const std::string& str)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	//	std::wstring buffer;
	//	int			bufferWideCharLength = str.size() + 10;
	//	wchar_t *	bufferWideChar = (wchar_t*)calloc(bufferWideCharLength + 100/*safe*/, sizeof(wchar_t));
	//	if (bufferWideChar)
	//	{
	//		MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, bufferWideChar, bufferWideCharLength);
	//		buffer += bufferWideChar;
	//		free(bufferWideChar);
	//	}
	//	return buffer;

	std::wstring_convert<std::codecvt_utf8<wchar_t>> myconv;
	return myconv.from_bytes(str);
#else
	std::wstring_convert<std::codecvt_utf8<wchar_t>> myconv;
	return myconv.from_bytes(str);
#endif
}
std::wstring		GetWString(const wchar_t * wstr, int length)
{
	std::wstring buffer;
	if (wstr)
	{
		for (int ichar = 0; ichar < length && wstr[ichar]; ichar++) buffer += wstr[ichar];
	}
	return buffer;
}
std::wstring		GetWString(const char * str, int length)
{
	std::string bufferA;
	//bufferA.reserve(length + 10);
	for (int iChar = 0; iChar < length; iChar++)
	{
		if (str[iChar]) bufferA += str[iChar];
	}
	return GetWString(bufferA);
}
std::wstring		GetWString(const char * str, long long int length)
{
	std::string bufferA;
	//bufferA.reserve(length + 10);
	for (int iChar = 0; iChar < length; iChar++)
	{
		if (str[iChar]) bufferA += str[iChar];
	}
	return GetWString(bufferA);
}
std::string			GetString(const std::wstring& wstr)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	std::string buffer;
	int		bufferUtf8Length = wstr.size() * 4 + 10;
	char *	bufferUtf8 = (char*)calloc(bufferUtf8Length, sizeof(char));
	if (bufferUtf8)
	{
		WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), wstr.size(), bufferUtf8, bufferUtf8Length, 0, 0);
		buffer += bufferUtf8;
		free(bufferUtf8);
	}
	return buffer;
#else
	std::wstring_convert<std::codecvt_utf8<wchar_t>> myconv;
	return myconv.to_bytes(wstr);
#endif
}






void				Split(const std::wstring &str, std::wstringlist &wordlist, wchar_t delim, bool getEmptySub/*=false*/)
{
	std::wstring buffword;
	for (unsigned int ibuffertxt = 0; ibuffertxt <= str.size(); ibuffertxt++)
	{
		if (ibuffertxt == str.size() || str[ibuffertxt] == delim || str[ibuffertxt] == L'\r' || str[ibuffertxt] == L'\n')
		{
			if (buffword.size() || getEmptySub) wordlist.insert(wordlist.end(), buffword);
			buffword.clear();
		}
		else buffword += str[ibuffertxt];
	}
}
void				Split(const std::wstring &str, std::wstringset &wordset, wchar_t delim, bool getEmptySub/*=false*/)
{
	std::wstring buffword;
	for (unsigned int ibuffertxt = 0; ibuffertxt <= str.size(); ibuffertxt++)
	{
		if (ibuffertxt == str.size() || str[ibuffertxt] == delim || str[ibuffertxt] == L'\r' || str[ibuffertxt] == L'\n')
		{
			if (buffword.size() || getEmptySub) wordset.insert(buffword);
			buffword.clear();
		}
		else buffword += str[ibuffertxt];
	}
}
void				Split(const std::wstring &str, std::vnwstringset &wordset, wchar_t delim, bool getEmptySub/*=false*/)
{
	std::wstring buffword;
	for (unsigned int ibuffertxt = 0; ibuffertxt <= str.size(); ibuffertxt++)
	{
		if (ibuffertxt == str.size() || str[ibuffertxt] == delim || str[ibuffertxt] == L'\r' || str[ibuffertxt] == L'\n')
		{
			if (buffword.size() || getEmptySub) wordset.insert(buffword);
			buffword.clear();
		}
		else buffword += str[ibuffertxt];
	}
}
void				Split(const std::string &str, std::stringlist &wordlist, char delim, bool getEmptySub/*=false*/)
{
	std::string buffword;
	for (unsigned int ibuffertxt = 0; ibuffertxt <= str.size(); ibuffertxt++)
	{
		if (ibuffertxt == str.size() || str[ibuffertxt] == delim || str[ibuffertxt] == L'\r' || str[ibuffertxt] == L'\n')
		{

			if (buffword.size() || getEmptySub) wordlist.insert(wordlist.end(), buffword);
			buffword.clear();
		}
		else buffword += str[ibuffertxt];
	}
}
int					GetCountSyllable(const std::string &str)
{
	std::stringlist coutList;
	Split(str, coutList, ' ');
	return coutList.size();
}
int					GetCountSyllable(const std::wstring &str)
{
	std::wstringlist coutList;
	Split(str, coutList, L' ');
	return coutList.size();
}
bool				Exist(const std::wstringset& wstrSet, const std::wstring &wstr)
{
	return (wstrSet.find(wstr) != wstrSet.end());
}
bool				Exist(const std::wstringmap& wstrMap, const std::wstring &wstr)
{
	return (wstrMap.find(wstr) != wstrMap.end());
}


/************************************************************************/
/* Japanese                                                             */
/************************************************************************/
bool				IsHiragana(wchar_t wch)
{
	switch (wch)
	{
	case L'あ':/*1863*/
	case L'い':/*10906*/
	case L'う':/*13769*/
	case L'え':/*1437*/
	case L'お':/*1817*/
	case L'か':/*5548*/
	case L'が':/*2013*/
	case L'き':/*5331*/
	case L'ぎ':/*1121*/
	case L'く':/*6262*/
	case L'ぐ':/*519*/
	case L'け':/*2542*/
	case L'げ':/*955*/
	case L'こ':/*3269*/
	case L'ご':/*943*/
	case L'さ':/*2187*/
	case L'ざ':/*578*/
	case L'し':/*7290*/
	case L'じ':/*3145*/
	case L'す':/*3227*/
	case L'ず':/*486*/
	case L'せ':/*2574*/
	case L'ぜ':/*504*/
	case L'そ':/*1384*/
	case L'ぞ':/*392*/
	case L'た':/*2401*/
	case L'だ':/*1269*/
	case L'ち':/*2727*/
	case L'ぢ':/*12*/
	case L'っ':/*1720*/
	case L'つ':/*3904*/
	case L'づ':/*151*/
	case L'て':/*2170*/
	case L'で':/*723*/
	case L'と':/*2665*/
	case L'ど':/*1217*/
	case L'な':/*2364*/
	case L'に':/*2150*/
	case L'ぬ':/*247*/
	case L'ね':/*903*/
	case L'の':/*1677*/
	case L'は':/*1651*/
	case L'ば':/*1017*/
	case L'ぱ':/*185*/
	case L'ひ':/*1758*/
	case L'び':/*812*/
	case L'ぴ':/*84*/
	case L'ふ':/*1309*/
	case L'ぶ':/*1091*/
	case L'ぷ':/*113*/
	case L'へ':/*356*/
	case L'べ':/*322*/
	case L'ぺ':/*38*/
	case L'ほ':/*1098*/
	case L'ぼ':/*711*/
	case L'ぽ':/*132*/
	case L'ま':/*1566*/
	case L'み':/*1483*/
	case L'む':/*794*/
	case L'め':/*1183*/
	case L'も':/*1157*/
	case L'ゃ':/*1177*/
	case L'や':/*923*/
	case L'ゅ':/*2942*/
	case L'ゆ':/*724*/
	case L'ょ':/*5477*/
	case L'よ':/*1161*/
	case L'ら':/*1329*/
	case L'り':/*2995*/
	case L'る':/*4199*/
	case L'れ':/*1021*/
	case L'ろ':/*933*/
	case L'わ':/*1146*/
	case L'を':/*1104*/
	case L'ん':/*12338*/
		return true;
		break;
	}

	return false;
}
bool				IsHiragana(const std::wstring& wstr)
{
	if (wstr.size() > 0)
	{
		for (auto iChar = 0u; iChar < wstr.size(); iChar++)
		{
			if (IsHiragana(wstr[iChar]) == false) return false;
		}
		return true;
	}
	return false;
}
bool				IsValidHiragana(const std::wstring& hiragana)
{
	for (int iChar = 0; iChar < hiragana.size(); iChar++)
	{
		switch (hiragana[iChar])
		{
		case L'あ':	 break;
		case L'か':	 break;
		case L'さ':	 break;
		case L'た':	 break;
		case L'な':	 break;
		case L'ま':	 break;
		case L'や':	 break;
		case L'ら':	 break;
		case L'わ':	 break;
		case L'き':	 break;
		case L'し':	 break;
		case L'ち':	 break;
		case L'に':	 break;
		case L'ひ':	 break;
		case L'み':	 break;
		case L'り':	 break;
		case L'く':	 break;
		case L'す':	 break;
		case L'ぬ':	 break;
		case L'ふ':	 break;
		case L'む':	 break;
		case L'ゆ':	 break;
		case L'る':	 break;
		case L'え':	 break;
		case L'け':	 break;
		case L'せ':	 break;
		case L'て':	 break;
		case L'ね':	 break;
		case L'め':	 break;
		case L'れ':	 break;
		case L'お':	 break;
		case L'こ':	 break;
		case L'そ':	 break;
		case L'と':	 break;
		case L'の':	 break;
		case L'ほ':	 break;
		case L'も':	 break;
		case L'よ':	 break;
		case L'ろ':	 break;
		case L'が':	 break;
		case L'ざ':	 break;
		case L'だ':	 break;
		case L'ば':	 break;
		case L'ぱ':	 break;
		case L'ぎ':	 break;
		case L'じ':	 break;
		case L'ぢ':	 break;
		case L'び':	 break;
		case L'ぴ':	 break;
		case L'ぐ':	 break;
		case L'ず':	 break;
		case L'づ':	 break;
		case L'ぶ':	 break;
		case L'ぷ':	 break;
		case L'げ':	 break;
		case L'ぜ':	 break;
		case L'で':	 break;
		case L'べ':	 break;
		case L'ぺ':	 break;
		case L'ご':	 break;
		case L'ぞ':	 break;
		case L'ど':	 break;
		case L'ぼ':	 break;
		case L'ぽ':	 break;
		case L'を':	 break;
		case L'ゐ':	 break;
		case L'ゑ':	 break;
		case L'つ':	 break;
		case L'へ':	 break;
		case L'は':	 break;
		case L'い':	 break;
		case L'う':	 break;
		case L'ん':	 break;
		case L'っ':	 break;
		case L'ゃ':	 break;
		case L'ょ':	 break;
		case L'ゅ':	 break;
		default:
			return false;
			break;
		}
	}
	return (hiragana.size() > 0);
}



/************************************************************************/
/* Vietnamese String                                                    */
/************************************************************************/
bool				IsVowel(wchar_t wch)
{
	switch (wch)
	{
	case 0x61:/*a*/case 0x41:/*A*/
	case 0x65:/*e*/case 0x45:/*E*/
	case 0x69:/*i*/case 0x49:/*I*/
	case 0x6F:/*o*/case 0x4F:/*O*/
	case 0x75:/*u*/case 0x55:/*U*/
	case 0x79:/*y*/case 0x59:/*Y*/
	case 0xE0:/*à*/case 0xC0:/*À*/
	case 0xE1:/*á*/case 0xC1:/*Á*/
	case 0xE2:/*â*/case 0xC2:/*Â*/
	case 0xE3:/*ã*/case 0xC3:/*Ã*/
	case 0xE8:/*è*/case 0xC8:/*È*/
	case 0xE9:/*é*/case 0xC9:/*É*/
	case 0xEA:/*ê*/case 0xCA:/*Ê*/
	case 0xEC:/*ì*/case 0xCC:/*Ì*/
	case 0xED:/*í*/case 0xCD:/*Í*/
	case 0xF2:/*ò*/case 0xD2:/*Ò*/
	case 0xF3:/*ó*/case 0xD3:/*Ó*/
	case 0xF4:/*ô*/case 0xD4:/*Ô*/
	case 0xF5:/*õ*/case 0xD5:/*Õ*/
	case 0xF9:/*ù*/case 0xD9:/*Ù*/
	case 0xFA:/*ú*/case 0xDA:/*Ú*/
	case 0xFD:/*ý*/case 0xDD:/*Ý*/
	case 0x103:/*ă*/case 0x102:/*Ă*/
	case 0x129:/*ĩ*/case 0x128:/*Ĩ*/
	case 0x169:/*ũ*/case 0x168:/*Ũ*/
	case 0x1A1:/*ơ*/case 0x1A0:/*Ơ*/
	case 0x1B0:/*ư*/case 0x1AF:/*Ư*/
	case 0x1EA1:/*ạ*/case 0x1EA0:/*Ạ*/
	case 0x1EA3:/*ả*/case 0x1EA2:/*Ả*/
	case 0x1EA5:/*ấ*/case 0x1EA4:/*Ấ*/
	case 0x1EA7:/*ầ*/case 0x1EA6:/*Ầ*/
	case 0x1EA9:/*ẩ*/case 0x1EA8:/*Ẩ*/
	case 0x1EAB:/*ẫ*/case 0x1EAA:/*Ẫ*/
	case 0x1EAD:/*ậ*/case 0x1EAC:/*Ậ*/
	case 0x1EAF:/*ắ*/case 0x1EAE:/*Ắ*/
	case 0x1EB1:/*ằ*/case 0x1EB0:/*Ằ*/
	case 0x1EB3:/*ẳ*/case 0x1EB2:/*Ẳ*/
	case 0x1EB5:/*ẵ*/case 0x1EB4:/*Ẵ*/
	case 0x1EB7:/*ặ*/case 0x1EB6:/*Ặ*/
	case 0x1EB9:/*ẹ*/case 0x1EB8:/*Ẹ*/
	case 0x1EBB:/*ẻ*/case 0x1EBA:/*Ẻ*/
	case 0x1EBD:/*ẽ*/case 0x1EBC:/*Ẽ*/
	case 0x1EBF:/*ế*/case 0x1EBE:/*Ế*/
	case 0x1EC1:/*ề*/case 0x1EC0:/*Ề*/
	case 0x1EC3:/*ể*/case 0x1EC2:/*Ể*/
	case 0x1EC5:/*ễ*/case 0x1EC4:/*Ễ*/
	case 0x1EC7:/*ệ*/case 0x1EC6:/*Ệ*/
	case 0x1EC9:/*ỉ*/case 0x1EC8:/*Ỉ*/
	case 0x1ECB:/*ị*/case 0x1ECA:/*Ị*/
	case 0x1ECD:/*ọ*/case 0x1ECC:/*Ọ*/
	case 0x1ECF:/*ỏ*/case 0x1ECE:/*Ỏ*/
	case 0x1ED1:/*ố*/case 0x1ED0:/*Ố*/
	case 0x1ED3:/*ồ*/case 0x1ED2:/*Ồ*/
	case 0x1ED5:/*ổ*/case 0x1ED4:/*Ổ*/
	case 0x1ED7:/*ỗ*/case 0x1ED6:/*Ỗ*/
	case 0x1ED9:/*ộ*/case 0x1ED8:/*Ộ*/
	case 0x1EDB:/*ớ*/case 0x1EDA:/*Ớ*/
	case 0x1EDD:/*ờ*/case 0x1EDC:/*Ờ*/
	case 0x1EDF:/*ở*/case 0x1EDE:/*Ở*/
	case 0x1EE1:/*ỡ*/case 0x1EE0:/*Ỡ*/
	case 0x1EE3:/*ợ*/case 0x1EE2:/*Ợ*/
	case 0x1EE5:/*ụ*/case 0x1EE4:/*Ụ*/
	case 0x1EE7:/*ủ*/case 0x1EE6:/*Ủ*/
	case 0x1EE9:/*ứ*/case 0x1EE8:/*Ứ*/
	case 0x1EEB:/*ừ*/case 0x1EEA:/*Ừ*/
	case 0x1EED:/*ử*/case 0x1EEC:/*Ử*/
	case 0x1EEF:/*ữ*/case 0x1EEE:/*Ữ*/
	case 0x1EF1:/*ự*/case 0x1EF0:/*Ự*/
	case 0x1EF3:/*ỳ*/case 0x1EF2:/*Ỳ*/
	case 0x1EF5:/*ỵ*/case 0x1EF4:/*Ỵ*/
	case 0x1EF7:/*ỷ*/case 0x1EF6:/*Ỷ*/
	case 0x1EF9:/*ỹ*/case 0x1EF8:/*Ỹ*/
		return 1;
	}
	return 0;
}
bool				IsConsonant(wchar_t wch)
{
	switch (wch)
	{
	case 0x62:/*b*/case 0x42:/*B*/
	case 0x63:/*c*/case 0x43:/*C*/
	case 0x64:/*d*/case 0x44:/*D*/
	case 0x67:/*g*/case 0x47:/*G*/
	case 0x68:/*h*/case 0x48:/*H*/
	case 0x6B:/*k*/case 0x4B:/*K*/
	case 0x6C:/*l*/case 0x4C:/*L*/
	case 0x6D:/*m*/case 0x4D:/*M*/
	case 0x6E:/*n*/case 0x4E:/*N*/
	case 0x70:/*p*/case 0x50:/*P*/
	case 0x71:/*q*/case 0x51:/*Q*/
	case 0x72:/*r*/case 0x52:/*R*/
	case 0x73:/*s*/case 0x53:/*S*/
	case 0x74:/*t*/case 0x54:/*T*/
	case 0x76:/*v*/case 0x56:/*V*/
	case 0x77:/*w*/case 0x57:/*W*/
	case 0x78:/*x*/case 0x58:/*X*/
	case 0x111:/*đ*/case 0x110:/*Đ*/
		return 1;
	}
	return 0;
}
VIETNAMESE_TONE		GetTone(wchar_t wch)
{
	//if (wcschr(L"ÀàẰằẦầÈèỀềÌìÒòỒồỜờÙùỪừỲỳ", wch))	return VIETNAMESE_TONE_HUYEN;
	//if (wcschr(L"ÁáẮắẤấÉéẾếÍíÓóỐốỚớÚúỨứÝý", wch))	return VIETNAMESE_TONE_SAC;
	//if (wcschr(L"ẢảẲẳẨẩẺẻỂểỈỉỎỏỔổỞởỦủỬửỶỷ", wch))	return VIETNAMESE_TONE_HOI;
	//if (wcschr(L"ÃãẴẵẪẫẼẽỄễĨĩÕõỖỗỠỡŨũỮữỸỹ", wch))	return VIETNAMESE_TONE_NGA;
	//if (wcschr(L"ẠạẶặẬậẸẹỆệỊịỌọỘộỢợỤụỰựỴỵ", wch))	return VIETNAMESE_TONE_NANG;
	switch (wch)
	{
	case L'à':case L'À':case L'ằ':case L'Ằ':case L'ầ':case L'Ầ':case L'è':case L'È':case L'ề':case L'Ề':case L'ì':case L'Ì':
	case L'ò':case L'Ò':case L'ồ':case L'Ồ':case L'ờ':case L'Ờ':case L'ù':case L'Ù':case L'ừ':case L'Ừ':case L'ỳ':case L'Ỳ':
		return VIETNAMESE_TONE_HUYEN;
	case L'á':case L'Á':case L'ắ':case L'Ắ':case L'ấ':case L'Ấ':case L'é':case L'É':case L'ế':case L'Ế':case L'í':case L'Í':
	case L'ó':case L'Ó':case L'ố':case L'Ố':case L'ớ':case L'Ớ':case L'ú':case L'Ú':case L'ứ':case L'Ứ':case L'ý':case L'Ý':
		return VIETNAMESE_TONE_SAC;
	case L'ả':case L'Ả':case L'ẳ':case L'Ẳ':case L'ẩ':case L'Ẩ':case L'ẻ':case L'Ẻ':case L'ể':case L'Ể':case L'ỉ':case L'Ỉ':
	case L'ỏ':case L'Ỏ':case L'ổ':case L'Ổ':case L'ở':case L'Ở':case L'ủ':case L'Ủ':case L'ử':case L'Ử':case L'ỷ':case L'Ỷ':
		return VIETNAMESE_TONE_HOI;
	case L'ã':case L'Ã':case L'ẵ':case L'Ẵ':case L'ẫ':case L'Ẫ':case L'ẽ':case L'Ẽ':case L'ễ':case L'Ễ':case L'ĩ':case L'Ĩ':
	case L'õ':case L'Õ':case L'ỗ':case L'Ỗ':case L'ỡ':case L'Ỡ':case L'ũ':case L'Ũ':case L'ữ':case L'Ữ':case L'ỹ':case L'Ỹ':
		return VIETNAMESE_TONE_NGA;
	case L'ạ':case L'Ạ':case L'ặ':case L'Ặ':case L'ậ':case L'Ậ':case L'ẹ':case L'Ẹ':case L'ệ':case L'Ệ':case L'ị':case L'Ị':
	case L'ọ':case L'Ọ':case L'ộ':case L'Ộ':case L'ợ':case L'Ợ':case L'ụ':case L'Ụ':case L'ự':case L'Ự':case L'ỵ':case L'Ỵ':
		return VIETNAMESE_TONE_NANG;
	}
	return VIETNAMESE_TONE_NO_TONE;
}
std::wstring		GetToneName(const VIETNAMESE_TONE tone)
{
	switch (tone)
	{
	case VIETNAMESE_TONE_NO_TONE:	return L"VIETNAMESE_TONE_NO_TONE";
	case VIETNAMESE_TONE_HUYEN:		return L"VIETNAMESE_TONE_HUYEN";
	case VIETNAMESE_TONE_NGA:		return L"VIETNAMESE_TONE_NGA";
	case VIETNAMESE_TONE_HOI:		return L"VIETNAMESE_TONE_HOI";
	case VIETNAMESE_TONE_SAC:		return L"VIETNAMESE_TONE_SAC";
	case VIETNAMESE_TONE_NANG:		return L"VIETNAMESE_TONE_NANG";
	default:						return L"VIETNAMESE_TONE_NO_TONE";
	}
}
VIETNAMESE_TONE		GetFirstTone(const std::wstring& syllable)
{
	for (unsigned i = 0; i < syllable.size(); i++)
	{
		VIETNAMESE_TONE tone = GetTone(syllable[i]);
		if (tone != VIETNAMESE_TONE_NO_TONE) return tone;
	}
	return VIETNAMESE_TONE_NO_TONE;
}
wchar_t				GetCharacterWithTone(wchar_t wch, VIETNAMESE_TONE tone)
{

	//file LogFile(L"log.txt");
	//std::set<wchar_t> currentBase;
	//for (auto j = 0u; j < vietnameseLowerVowelCharacter.size(); j++)
	//{
	//	currentBase.insert(GetBase(vietnameseLowerVowelCharacter[j]));
	//}
	//for (auto i = currentBase.begin(); i != currentBase.end(); i++)
	//{
	//	LogFile.Log(L"case L'%c':\n", *i);
	//	LogFile.Log(L"switch (tone)\n");
	//	LogFile.Log(L"{\n");
	//	for (auto j = 0u; j < vietnameseLowerVowelCharacter.size(); j++)
	//	{
	//		if (GetBase(vietnameseLowerVowelCharacter[j]) == (*i))
	//		{
	//			LogFile.Log(L"case %s:return L'%c';break;\n", GetToneName(GetTone(vietnameseLowerVowelCharacter[j])).c_str(), vietnameseLowerVowelCharacter[j]);
	//		}
	//	}
	//	LogFile.Log(L"}\n");
	//	LogFile.Log(L"break;\n");
	//}
	//LogFile.WriteLog(L"log.txt", true);
	//return;



	switch (wch)
	{
	case L'a':
		switch (tone)
		{
		case VIETNAMESE_TONE_NO_TONE:return L'a'; break;
		case VIETNAMESE_TONE_HUYEN:return L'à'; break;
		case VIETNAMESE_TONE_SAC:return L'á'; break;
		case VIETNAMESE_TONE_HOI:return L'ả'; break;
		case VIETNAMESE_TONE_NGA:return L'ã'; break;
		case VIETNAMESE_TONE_NANG:return L'ạ'; break;
		}
		break;
	case L'e':
		switch (tone)
		{
		case VIETNAMESE_TONE_NO_TONE:return L'e'; break;
		case VIETNAMESE_TONE_HUYEN:return L'è'; break;
		case VIETNAMESE_TONE_SAC:return L'é'; break;
		case VIETNAMESE_TONE_HOI:return L'ẻ'; break;
		case VIETNAMESE_TONE_NGA:return L'ẽ'; break;
		case VIETNAMESE_TONE_NANG:return L'ẹ'; break;
		}
		break;
	case L'i':
		switch (tone)
		{
		case VIETNAMESE_TONE_NO_TONE:return L'i'; break;
		case VIETNAMESE_TONE_HUYEN:return L'ì'; break;
		case VIETNAMESE_TONE_SAC:return L'í'; break;
		case VIETNAMESE_TONE_HOI:return L'ỉ'; break;
		case VIETNAMESE_TONE_NGA:return L'ĩ'; break;
		case VIETNAMESE_TONE_NANG:return L'ị'; break;
		}
		break;
	case L'o':
		switch (tone)
		{
		case VIETNAMESE_TONE_NO_TONE:return L'o'; break;
		case VIETNAMESE_TONE_HUYEN:return L'ò'; break;
		case VIETNAMESE_TONE_SAC:return L'ó'; break;
		case VIETNAMESE_TONE_HOI:return L'ỏ'; break;
		case VIETNAMESE_TONE_NGA:return L'õ'; break;
		case VIETNAMESE_TONE_NANG:return L'ọ'; break;
		}
		break;
	case L'u':
		switch (tone)
		{
		case VIETNAMESE_TONE_NO_TONE:return L'u'; break;
		case VIETNAMESE_TONE_HUYEN:return L'ù'; break;
		case VIETNAMESE_TONE_SAC:return L'ú'; break;
		case VIETNAMESE_TONE_HOI:return L'ủ'; break;
		case VIETNAMESE_TONE_NGA:return L'ũ'; break;
		case VIETNAMESE_TONE_NANG:return L'ụ'; break;
		}
		break;
	case L'y':
		switch (tone)
		{
		case VIETNAMESE_TONE_NO_TONE:return L'y'; break;
		case VIETNAMESE_TONE_HUYEN:return L'ỳ'; break;
		case VIETNAMESE_TONE_SAC:return L'ý'; break;
		case VIETNAMESE_TONE_HOI:return L'ỷ'; break;
		case VIETNAMESE_TONE_NGA:return L'ỹ'; break;
		case VIETNAMESE_TONE_NANG:return L'ỵ'; break;
		}
		break;
	case L'â':
		switch (tone)
		{
		case VIETNAMESE_TONE_NO_TONE:return L'â'; break;
		case VIETNAMESE_TONE_HUYEN:return L'ầ'; break;
		case VIETNAMESE_TONE_SAC:return L'ấ'; break;
		case VIETNAMESE_TONE_HOI:return L'ẩ'; break;
		case VIETNAMESE_TONE_NGA:return L'ẫ'; break;
		case VIETNAMESE_TONE_NANG:return L'ậ'; break;
		}
		break;
	case L'ê':
		switch (tone)
		{
		case VIETNAMESE_TONE_NO_TONE:return L'ê'; break;
		case VIETNAMESE_TONE_HUYEN:return L'ề'; break;
		case VIETNAMESE_TONE_SAC:return L'ế'; break;
		case VIETNAMESE_TONE_HOI:return L'ể'; break;
		case VIETNAMESE_TONE_NGA:return L'ễ'; break;
		case VIETNAMESE_TONE_NANG:return L'ệ'; break;
		}
		break;
	case L'ô':
		switch (tone)
		{
		case VIETNAMESE_TONE_NO_TONE:return L'ô'; break;
		case VIETNAMESE_TONE_HUYEN:return L'ồ'; break;
		case VIETNAMESE_TONE_SAC:return L'ố'; break;
		case VIETNAMESE_TONE_HOI:return L'ổ'; break;
		case VIETNAMESE_TONE_NGA:return L'ỗ'; break;
		case VIETNAMESE_TONE_NANG:return L'ộ'; break;
		}
		break;
	case L'ă':
		switch (tone)
		{
		case VIETNAMESE_TONE_NO_TONE:return L'ă'; break;
		case VIETNAMESE_TONE_HUYEN:return L'ằ'; break;
		case VIETNAMESE_TONE_SAC:return L'ắ'; break;
		case VIETNAMESE_TONE_HOI:return L'ẳ'; break;
		case VIETNAMESE_TONE_NGA:return L'ẵ'; break;
		case VIETNAMESE_TONE_NANG:return L'ặ'; break;
		}
		break;
	case L'ơ':
		switch (tone)
		{
		case VIETNAMESE_TONE_NO_TONE:return L'ơ'; break;
		case VIETNAMESE_TONE_HUYEN:return L'ờ'; break;
		case VIETNAMESE_TONE_SAC:return L'ớ'; break;
		case VIETNAMESE_TONE_HOI:return L'ở'; break;
		case VIETNAMESE_TONE_NGA:return L'ỡ'; break;
		case VIETNAMESE_TONE_NANG:return L'ợ'; break;
		}
		break;
	case L'ư':
		switch (tone)
		{
		case VIETNAMESE_TONE_NO_TONE:return L'ư'; break;
		case VIETNAMESE_TONE_HUYEN:return L'ừ'; break;
		case VIETNAMESE_TONE_SAC:return L'ứ'; break;
		case VIETNAMESE_TONE_HOI:return L'ử'; break;
		case VIETNAMESE_TONE_NGA:return L'ữ'; break;
		case VIETNAMESE_TONE_NANG:return L'ự'; break;
		}
		break;




	case L'A':
		switch (tone)
		{
		case VIETNAMESE_TONE_NO_TONE:return L'A'; break;
		case VIETNAMESE_TONE_HUYEN:return L'À'; break;
		case VIETNAMESE_TONE_SAC:return L'Á'; break;
		case VIETNAMESE_TONE_HOI:return L'Ả'; break;
		case VIETNAMESE_TONE_NGA:return L'Ã'; break;
		case VIETNAMESE_TONE_NANG:return L'Ạ'; break;
		}
		break;
	case L'E':
		switch (tone)
		{
		case VIETNAMESE_TONE_NO_TONE:return L'E'; break;
		case VIETNAMESE_TONE_HUYEN:return L'È'; break;
		case VIETNAMESE_TONE_SAC:return L'É'; break;
		case VIETNAMESE_TONE_HOI:return L'Ẻ'; break;
		case VIETNAMESE_TONE_NGA:return L'Ẽ'; break;
		case VIETNAMESE_TONE_NANG:return L'Ẹ'; break;
		}
		break;
	case L'I':
		switch (tone)
		{
		case VIETNAMESE_TONE_NO_TONE:return L'I'; break;
		case VIETNAMESE_TONE_HUYEN:return L'Ì'; break;
		case VIETNAMESE_TONE_SAC:return L'Í'; break;
		case VIETNAMESE_TONE_HOI:return L'Ỉ'; break;
		case VIETNAMESE_TONE_NGA:return L'Ĩ'; break;
		case VIETNAMESE_TONE_NANG:return L'Ị'; break;
		}
		break;
	case L'O':
		switch (tone)
		{
		case VIETNAMESE_TONE_NO_TONE:return L'O'; break;
		case VIETNAMESE_TONE_HUYEN:return L'Ò'; break;
		case VIETNAMESE_TONE_SAC:return L'Ó'; break;
		case VIETNAMESE_TONE_HOI:return L'Ỏ'; break;
		case VIETNAMESE_TONE_NGA:return L'Õ'; break;
		case VIETNAMESE_TONE_NANG:return L'Ọ'; break;
		}
		break;
	case L'U':
		switch (tone)
		{
		case VIETNAMESE_TONE_NO_TONE:return L'U'; break;
		case VIETNAMESE_TONE_HUYEN:return L'Ù'; break;
		case VIETNAMESE_TONE_SAC:return L'Ú'; break;
		case VIETNAMESE_TONE_HOI:return L'Ủ'; break;
		case VIETNAMESE_TONE_NGA:return L'Ũ'; break;
		case VIETNAMESE_TONE_NANG:return L'Ụ'; break;
		}
		break;
	case L'Y':
		switch (tone)
		{
		case VIETNAMESE_TONE_NO_TONE:return L'Y'; break;
		case VIETNAMESE_TONE_HUYEN:return L'Ỳ'; break;
		case VIETNAMESE_TONE_SAC:return L'Ý'; break;
		case VIETNAMESE_TONE_HOI:return L'Ỷ'; break;
		case VIETNAMESE_TONE_NGA:return L'Ỹ'; break;
		case VIETNAMESE_TONE_NANG:return L'Ỵ'; break;
		}
		break;
	case L'Â':
		switch (tone)
		{
		case VIETNAMESE_TONE_NO_TONE:return L'Â'; break;
		case VIETNAMESE_TONE_HUYEN:return L'Ầ'; break;
		case VIETNAMESE_TONE_SAC:return L'Ấ'; break;
		case VIETNAMESE_TONE_HOI:return L'Ẩ'; break;
		case VIETNAMESE_TONE_NGA:return L'Ẫ'; break;
		case VIETNAMESE_TONE_NANG:return L'Ậ'; break;
		}
		break;
	case L'Ê':
		switch (tone)
		{
		case VIETNAMESE_TONE_NO_TONE:return L'Ê'; break;
		case VIETNAMESE_TONE_HUYEN:return L'Ề'; break;
		case VIETNAMESE_TONE_SAC:return L'Ế'; break;
		case VIETNAMESE_TONE_HOI:return L'Ể'; break;
		case VIETNAMESE_TONE_NGA:return L'Ễ'; break;
		case VIETNAMESE_TONE_NANG:return L'Ệ'; break;
		}
		break;
	case L'Ô':
		switch (tone)
		{
		case VIETNAMESE_TONE_NO_TONE:return L'Ô'; break;
		case VIETNAMESE_TONE_HUYEN:return L'Ồ'; break;
		case VIETNAMESE_TONE_SAC:return L'Ố'; break;
		case VIETNAMESE_TONE_HOI:return L'Ổ'; break;
		case VIETNAMESE_TONE_NGA:return L'Ỗ'; break;
		case VIETNAMESE_TONE_NANG:return L'Ộ'; break;
		}
		break;
	case L'Ă':
		switch (tone)
		{
		case VIETNAMESE_TONE_NO_TONE:return L'Ă'; break;
		case VIETNAMESE_TONE_HUYEN:return L'Ằ'; break;
		case VIETNAMESE_TONE_SAC:return L'Ắ'; break;
		case VIETNAMESE_TONE_HOI:return L'Ẳ'; break;
		case VIETNAMESE_TONE_NGA:return L'Ẵ'; break;
		case VIETNAMESE_TONE_NANG:return L'Ặ'; break;
		}
		break;
	case L'Ơ':
		switch (tone)
		{
		case VIETNAMESE_TONE_NO_TONE:return L'Ơ'; break;
		case VIETNAMESE_TONE_HUYEN:return L'Ờ'; break;
		case VIETNAMESE_TONE_SAC:return L'Ớ'; break;
		case VIETNAMESE_TONE_HOI:return L'Ở'; break;
		case VIETNAMESE_TONE_NGA:return L'Ỡ'; break;
		case VIETNAMESE_TONE_NANG:return L'Ợ'; break;
		}
		break;
	case L'Ư':
		switch (tone)
		{
		case VIETNAMESE_TONE_NO_TONE:return L'Ư'; break;
		case VIETNAMESE_TONE_HUYEN:return L'Ừ'; break;
		case VIETNAMESE_TONE_SAC:return L'Ứ'; break;
		case VIETNAMESE_TONE_HOI:return L'Ử'; break;
		case VIETNAMESE_TONE_NGA:return L'Ữ'; break;
		case VIETNAMESE_TONE_NANG:return L'Ự'; break;
		}
		break;










	}
	return wch;
}
int					GetFirstCharacterWithToneIndex(const std::wstring& syllable)
{
	for (unsigned i = 0; i < syllable.size(); i++)
	{
		VIETNAMESE_TONE tone = GetTone(syllable[i]);
		if (tone != VIETNAMESE_TONE_NO_TONE) return i;
	}
	return 0;
}
bool				IsLower(wchar_t wch)
{
	switch (wch)
	{
	case 0xE0:/*af*/
	case 0xE1:/*as*/
	case 0x1EA3:/*ar*/
	case 0xE3:/*ax*/
	case 0x1EA1:/*aj*/
	case 0x103:/*aw*/
	case 0x1EB1:/*awf*/
	case 0x1EAF:/*aws*/
	case 0x1EB3:/*awr*/
	case 0x1EB5:/*awx*/
	case 0x1EB7:/*awj*/
	case 0xE2:/*aa*/
	case 0x1EA7:/*aaf*/
	case 0x1EA5:/*aas*/
	case 0x1EA9:/*aar*/
	case 0x1EAB:/*aax*/
	case 0x1EAD:/*aaj*/
	case 0x111:/*dd*/
	case 0xE8:/*ef*/
	case 0xE9:/*es*/
	case 0x1EBB:/*er*/
	case 0x1EBD:/*ex*/
	case 0x1EB9:/*ej*/
	case 0xEA:/*ee*/
	case 0x1EC1:/*eef*/
	case 0x1EBF:/*ees*/
	case 0x1EC3:/*eer*/
	case 0x1EC5:/*eex*/
	case 0x1EC7:/*eej*/
	case 0xEC:/*if*/
	case 0xED:/*is*/
	case 0x1EC9:/*ir*/
	case 0x129:/*ix*/
	case 0x1ECB:/*ij*/
	case 0xF2:/*of*/
	case 0xF3:/*os*/
	case 0x1ECF:/*or*/
	case 0xF5:/*ox*/
	case 0x1ECD:/*oj*/
	case 0xF4:/*oo*/
	case 0x1ED3:/*oof*/
	case 0x1ED1:/*oos*/
	case 0x1ED5:/*oor*/
	case 0x1ED7:/*oox*/
	case 0x1ED9:/*ooj*/
	case 0x1A1:/*ow*/
	case 0x1EDD:/*owf*/
	case 0x1EDB:/*ows*/
	case 0x1EDF:/*owr*/
	case 0x1EE1:/*owx*/
	case 0x1EE3:/*owj*/
	case 0xF9:/*uf*/
	case 0xFA:/*us*/
	case 0x1EE7:/*ur*/
	case 0x169:/*ux*/
	case 0x1EE5:/*uj*/
	case 0x1B0:/*uw*/
	case 0x1EEB:/*uwf*/
	case 0x1EE9:/*uws*/
	case 0x1EED:/*uwr*/
	case 0x1EEF:/*uwx*/
	case 0x1EF1:/*uwj*/
	case 0x1EF3:/*yf*/
	case 0xFD:/*ys*/
	case 0x1EF7:/*yr*/
	case 0x1EF9:/*yx*/
	case 0x1EF5:/*yj*/
		return 1;
	}
	if (wch >= 'a'&&wch <= 'z') return 1;
	return 0;
}
bool				IsLower(const std::string &str)
{
	for (unsigned int i = 0; i < str.size(); i++)
	{
		if (IsUpper(str[i])) return false;
	}
	return true;
}
bool				IsLower(const std::wstring &wstr)
{
	for (unsigned int i = 0; i < wstr.size(); i++)
	{
		if (IsUpper(wstr[i])) return false;
	}
	return true;
}
wchar_t				GetLower(wchar_t wch)
{
	switch (wch)
	{
	case 0xC0:/*AF*/
		return 0xE0/*af*/;
	case 0xC1:/*AS*/
		return 0xE1/*as*/;
	case 0x1EA2:/*AR*/
		return 0x1EA3/*ar*/;
	case 0xC3:/*AX*/
		return 0xE3/*ax*/;
	case 0x1EA0:/*AJ*/
		return 0x1EA1/*aj*/;
	case 0x102:/*AW*/
		return 0x103/*aw*/;
	case 0x1EB0:/*AWF*/
		return 0x1EB1/*awf*/;
	case 0x1EAE:/*AWS*/
		return 0x1EAF/*aws*/;
	case 0x1EB2:/*AWR*/
		return 0x1EB3/*awr*/;
	case 0x1EB4:/*AWX*/
		return 0x1EB5/*awx*/;
	case 0x1EB6:/*AWJ*/
		return 0x1EB7/*awj*/;
	case 0xC2:/*AA*/
		return 0xE2/*aa*/;
	case 0x1EA6:/*AAF*/
		return 0x1EA7/*aaf*/;
	case 0x1EA4:/*AAS*/
		return 0x1EA5/*aas*/;
	case 0x1EA8:/*AAR*/
		return 0x1EA9/*aar*/;
	case 0x1EAA:/*AAX*/
		return 0x1EAB/*aax*/;
	case 0x1EAC:/*AAJ*/
		return 0x1EAD/*aaj*/;
	case 0x110:/*DD*/
		return 0x111/*dd*/;
	case 0xC8:/*EF*/
		return 0xE8/*ef*/;
	case 0xC9:/*ES*/
		return 0xE9/*es*/;
	case 0x1EBA:/*ER*/
		return 0x1EBB/*er*/;
	case 0x1EBC:/*EX*/
		return 0x1EBD/*ex*/;
	case 0x1EB8:/*EJ*/
		return 0x1EB9/*ej*/;
	case 0xCA:/*EE*/
		return 0xEA/*ee*/;
	case 0x1EC0:/*EEF*/
		return 0x1EC1/*eef*/;
	case 0x1EBE:/*EES*/
		return 0x1EBF/*ees*/;
	case 0x1EC2:/*EER*/
		return 0x1EC3/*eer*/;
	case 0x1EC4:/*EEX*/
		return 0x1EC5/*eex*/;
	case 0x1EC6:/*EEJ*/
		return 0x1EC7/*eej*/;
	case 0xCC:/*IF*/
		return 0xEC/*if*/;
	case 0xCD:/*IS*/
		return 0xED/*is*/;
	case 0x1EC8:/*IR*/
		return 0x1EC9/*ir*/;
	case 0x128:/*IX*/
		return 0x129/*ix*/;
	case 0x1ECA:/*IJ*/
		return 0x1ECB/*ij*/;
	case 0xD2:/*OF*/
		return 0xF2/*of*/;
	case 0xD3:/*OS*/
		return 0xF3/*os*/;
	case 0x1ECE:/*OR*/
		return 0x1ECF/*or*/;
	case 0xD5:/*OX*/
		return 0xF5/*ox*/;
	case 0x1ECC:/*OJ*/
		return 0x1ECD/*oj*/;
	case 0xD4:/*OO*/
		return 0xF4/*oo*/;
	case 0x1ED2:/*OOF*/
		return 0x1ED3/*oof*/;
	case 0x1ED0:/*OOS*/
		return 0x1ED1/*oos*/;
	case 0x1ED4:/*OOR*/
		return 0x1ED5/*oor*/;
	case 0x1ED6:/*OOX*/
		return 0x1ED7/*oox*/;
	case 0x1ED8:/*OOJ*/
		return 0x1ED9/*ooj*/;
	case 0x1A0:/*OW*/
		return 0x1A1/*ow*/;
	case 0x1EDC:/*OWF*/
		return 0x1EDD/*owf*/;
	case 0x1EDA:/*OWS*/
		return 0x1EDB/*ows*/;
	case 0x1EDE:/*OWR*/
		return 0x1EDF/*owr*/;
	case 0x1EE0:/*OWX*/
		return 0x1EE1/*owx*/;
	case 0x1EE2:/*OWJ*/
		return 0x1EE3/*owj*/;
	case 0xD9:/*UF*/
		return 0xF9/*uf*/;
	case 0xDA:/*US*/
		return 0xFA/*us*/;
	case 0x1EE6:/*UR*/
		return 0x1EE7/*ur*/;
	case 0x168:/*UX*/
		return 0x169/*ux*/;
	case 0x1EE4:/*UJ*/
		return 0x1EE5/*uj*/;
	case 0x1AF:/*UW*/
		return 0x1B0/*uw*/;
	case 0x1EEA:/*UWF*/
		return 0x1EEB/*uwf*/;
	case 0x1EE8:/*UWS*/
		return 0x1EE9/*uws*/;
	case 0x1EEC:/*UWR*/
		return 0x1EED/*uwr*/;
	case 0x1EEE:/*UWX*/
		return 0x1EEF/*uwx*/;
	case 0x1EF0:/*UWJ*/
		return 0x1EF1/*uwj*/;
	case 0x1EF2:/*YF*/
		return 0x1EF3/*yf*/;
	case 0xDD:/*YS*/
		return 0xFD/*ys*/;
	case 0x1EF6:/*YR*/
		return 0x1EF7/*yr*/;
	case 0x1EF8:/*YX*/
		return 0x1EF9/*yx*/;
	case 0x1EF4:/*YJ*/
		return 0x1EF5/*yj*/;
	case 0xD0/*Kí tự đặc biệt Ð*/:
		return 0x111/*đ*/;
	}
	if (wch >= 'A'&&wch <= 'Z') return wch + 'a' - 'A';
	return wch;
}
std::wstring		GetLower(const std::wstring &wstr)
{
	std::wstring bufferLower;
	for (unsigned int i = 0; i < wstr.size(); i++)
	{
		bufferLower += GetLower(wstr[i]);
	}
	return bufferLower;
}
std::string			GetLower(const std::string &str)
{
	return GetString(GetLower(GetWString(str)));
}
void				ToLower(std::string &str)
{
	str = GetString(GetLower(GetWString(str)));
}
void				ToLower(std::wstring &wstr)
{
	for (unsigned int i = 0; i < wstr.size(); i++)
	{
		wstr[i] = GetLower(wstr[i]);
	}
}
bool				IsUpper(wchar_t wch)
{
	switch (wch)
	{
	case 0xC0:/*AF*/
	case 0xC1:/*AS*/
	case 0x1EA2:/*AR*/
	case 0xC3:/*AX*/
	case 0x1EA0:/*AJ*/
	case 0x102:/*AW*/
	case 0x1EB0:/*AWF*/
	case 0x1EAE:/*AWS*/
	case 0x1EB2:/*AWR*/
	case 0x1EB4:/*AWX*/
	case 0x1EB6:/*AWJ*/
	case 0xC2:/*AA*/
	case 0x1EA6:/*AAF*/
	case 0x1EA4:/*AAS*/
	case 0x1EA8:/*AAR*/
	case 0x1EAA:/*AAX*/
	case 0x1EAC:/*AAJ*/
	case 0x110:/*DD*/
	case 0xC8:/*EF*/
	case 0xC9:/*ES*/
	case 0x1EBA:/*ER*/
	case 0x1EBC:/*EX*/
	case 0x1EB8:/*EJ*/
	case 0xCA:/*EE*/
	case 0x1EC0:/*EEF*/
	case 0x1EBE:/*EES*/
	case 0x1EC2:/*EER*/
	case 0x1EC4:/*EEX*/
	case 0x1EC6:/*EEJ*/
	case 0xCC:/*IF*/
	case 0xCD:/*IS*/
	case 0x1EC8:/*IR*/
	case 0x128:/*IX*/
	case 0x1ECA:/*IJ*/
	case 0xD2:/*OF*/
	case 0xD3:/*OS*/
	case 0x1ECE:/*OR*/
	case 0xD5:/*OX*/
	case 0x1ECC:/*OJ*/
	case 0xD4:/*OO*/
	case 0x1ED2:/*OOF*/
	case 0x1ED0:/*OOS*/
	case 0x1ED4:/*OOR*/
	case 0x1ED6:/*OOX*/
	case 0x1ED8:/*OOJ*/
	case 0x1A0:/*OW*/
	case 0x1EDC:/*OWF*/
	case 0x1EDA:/*OWS*/
	case 0x1EDE:/*OWR*/
	case 0x1EE0:/*OWX*/
	case 0x1EE2:/*OWJ*/
	case 0xD9:/*UF*/
	case 0xDA:/*US*/
	case 0x1EE6:/*UR*/
	case 0x168:/*UX*/
	case 0x1EE4:/*UJ*/
	case 0x1AF:/*UW*/
	case 0x1EEA:/*UWF*/
	case 0x1EE8:/*UWS*/
	case 0x1EEC:/*UWR*/
	case 0x1EEE:/*UWX*/
	case 0x1EF0:/*UWJ*/
	case 0x1EF2:/*YF*/
	case 0xDD:/*YS*/
	case 0x1EF6:/*YR*/
	case 0x1EF8:/*YX*/
	case 0x1EF4:/*YJ*/
		return 1;
	}
	if (wch >= 'A'&&wch <= 'Z') return 1;
	return 0;
}
bool				IsStartUpper(const std::string &str)
{
	if (!IsUpper(str[0])) return false;
	for (unsigned int i = 1; i < str.size(); i++)
	{
		if (!IsLower(str[i])) return false;
	}
	return true;
}
bool				IsStartUpper(const std::wstring &wstr)
{
	if (!IsUpper(wstr[0])) return false;
	for (unsigned int i = 1; i < wstr.size(); i++)
	{
		if (!IsLower(wstr[i])) return false;
	}
	return true;
}
bool				IsFullUpper(const std::string &str)
{
	for (unsigned int i = 0; i < str.size(); i++)
	{
		if (IsLower(str[i])) return false;
	}
	return true;
}
bool				IsFullUpper(const std::wstring &wstr)
{
	for (unsigned int i = 0; i < wstr.size(); i++)
	{
		if (IsLower(wstr[i])) return false;
	}
	return true;
}
wchar_t				GetUpper(wchar_t wch)
{
	switch (wch)
	{
	case 0xE0:/*af*/
		return 0xC0/*AF*/;
	case 0xE1:/*as*/
		return 0xC1/*AS*/;
	case 0x1EA3:/*ar*/
		return 0x1EA2/*AR*/;
	case 0xE3:/*ax*/
		return 0xC3/*AX*/;
	case 0x1EA1:/*aj*/
		return 0x1EA0/*AJ*/;
	case 0x103:/*aw*/
		return 0x102/*AW*/;
	case 0x1EB1:/*awf*/
		return 0x1EB0/*AWF*/;
	case 0x1EAF:/*aws*/
		return 0x1EAE/*AWS*/;
	case 0x1EB3:/*awr*/
		return 0x1EB2/*AWR*/;
	case 0x1EB5:/*awx*/
		return 0x1EB4/*AWX*/;
	case 0x1EB7:/*awj*/
		return 0x1EB6/*AWJ*/;
	case 0xE2:/*aa*/
		return 0xC2/*AA*/;
	case 0x1EA7:/*aaf*/
		return 0x1EA6/*AAF*/;
	case 0x1EA5:/*aas*/
		return 0x1EA4/*AAS*/;
	case 0x1EA9:/*aar*/
		return 0x1EA8/*AAR*/;
	case 0x1EAB:/*aax*/
		return 0x1EAA/*AAX*/;
	case 0x1EAD:/*aaj*/
		return 0x1EAC/*AAJ*/;
	case 0x111:/*dd*/
		return 0x110/*DD*/;
	case 0xE8:/*ef*/
		return 0xC8/*EF*/;
	case 0xE9:/*es*/
		return 0xC9/*ES*/;
	case 0x1EBB:/*er*/
		return 0x1EBA/*ER*/;
	case 0x1EBD:/*ex*/
		return 0x1EBC/*EX*/;
	case 0x1EB9:/*ej*/
		return 0x1EB8/*EJ*/;
	case 0xEA:/*ee*/
		return 0xCA/*EE*/;
	case 0x1EC1:/*eef*/
		return 0x1EC0/*EEF*/;
	case 0x1EBF:/*ees*/
		return 0x1EBE/*EES*/;
	case 0x1EC3:/*eer*/
		return 0x1EC2/*EER*/;
	case 0x1EC5:/*eex*/
		return 0x1EC4/*EEX*/;
	case 0x1EC7:/*eej*/
		return 0x1EC6/*EEJ*/;
	case 0xEC:/*if*/
		return 0xCC/*IF*/;
	case 0xED:/*is*/
		return 0xCD/*IS*/;
	case 0x1EC9:/*ir*/
		return 0x1EC8/*IR*/;
	case 0x129:/*ix*/
		return 0x128/*IX*/;
	case 0x1ECB:/*ij*/
		return 0x1ECA/*IJ*/;
	case 0xF2:/*of*/
		return 0xD2/*OF*/;
	case 0xF3:/*os*/
		return 0xD3/*OS*/;
	case 0x1ECF:/*or*/
		return 0x1ECE/*OR*/;
	case 0xF5:/*ox*/
		return 0xD5/*OX*/;
	case 0x1ECD:/*oj*/
		return 0x1ECC/*OJ*/;
	case 0xF4:/*oo*/
		return 0xD4/*OO*/;
	case 0x1ED3:/*oof*/
		return 0x1ED2/*OOF*/;
	case 0x1ED1:/*oos*/
		return 0x1ED0/*OOS*/;
	case 0x1ED5:/*oor*/
		return 0x1ED4/*OOR*/;
	case 0x1ED7:/*oox*/
		return 0x1ED6/*OOX*/;
	case 0x1ED9:/*ooj*/
		return 0x1ED8/*OOJ*/;
	case 0x1A1:/*ow*/
		return 0x1A0/*OW*/;
	case 0x1EDD:/*owf*/
		return 0x1EDC/*OWF*/;
	case 0x1EDB:/*ows*/
		return 0x1EDA/*OWS*/;
	case 0x1EDF:/*owr*/
		return 0x1EDE/*OWR*/;
	case 0x1EE1:/*owx*/
		return 0x1EE0/*OWX*/;
	case 0x1EE3:/*owj*/
		return 0x1EE2/*OWJ*/;
	case 0xF9:/*uf*/
		return 0xD9/*UF*/;
	case 0xFA:/*us*/
		return 0xDA/*US*/;
	case 0x1EE7:/*ur*/
		return 0x1EE6/*UR*/;
	case 0x169:/*ux*/
		return 0x168/*UX*/;
	case 0x1EE5:/*uj*/
		return 0x1EE4/*UJ*/;
	case 0x1B0:/*uw*/
		return 0x1AF/*UW*/;
	case 0x1EEB:/*uwf*/
		return 0x1EEA/*UWF*/;
	case 0x1EE9:/*uws*/
		return 0x1EE8/*UWS*/;
	case 0x1EED:/*uwr*/
		return 0x1EEC/*UWR*/;
	case 0x1EEF:/*uwx*/
		return 0x1EEE/*UWX*/;
	case 0x1EF1:/*uwj*/
		return 0x1EF0/*UWJ*/;
	case 0x1EF3:/*yf*/
		return 0x1EF2/*YF*/;
	case 0xFD:/*ys*/
		return 0xDD/*YS*/;
	case 0x1EF7:/*yr*/
		return 0x1EF6/*YR*/;
	case 0x1EF9:/*yx*/
		return 0x1EF8/*YX*/;
	case 0x1EF5:/*yj*/
		return 0x1EF4/*YJ*/;
	}
	if (wch >= 'a'&&wch <= 'z') return wch + 'A' - 'a';
	return wch;
}
std::wstring		GetUpper(const std::wstring &wstr)
{
	std::wstring bufferUpper;
	for (unsigned int i = 0; i < wstr.size(); i++)
	{
		bufferUpper += GetUpper(wstr[i]);
	}
	return bufferUpper;
}
std::string			GetUpper(const std::string &str)
{
	return GetString(GetUpper(GetWString(str)));
}
void				ToUpper(std::string &str)
{
	str = GetString(GetUpper(GetWString(str)));
}
void				ToUpper(std::wstring &wstr)
{
	for (unsigned int i = 0; i < wstr.size(); i++)
	{
		wstr[i] = GetUpper(wstr[i]);
	}
}
wchar_t				GetBase(wchar_t wch)
{
	//if (wcschr(L"AaÀàÁáẢảÃãẠạ", wch)) return L'a';
	//if (wcschr(L"ĂăẰằẮắẲẳẴẵẶặ", wch)) return L'ă';
	//if (wcschr(L"ÂâẦầẤấẨẩẪẫẬậ", wch)) return L'â';
	//if (wcschr(L"EeÈèÉéẺẻẼẽẸẹ", wch)) return L'e';
	//if (wcschr(L"ÊêỀềẾếỂểỄễỆệ", wch)) return L'ê';
	//if (wcschr(L"IiÌìÍíỈỉĨĩỊị", wch)) return L'i';
	//if (wcschr(L"OoÒòÓóỎỏÕõỌọ", wch)) return L'o';
	//if (wcschr(L"ÔôỒồỐốỔổỖỗỘộộ", wch)) return L'ô';
	//if (wcschr(L"ƠơỜờỚớỞởỠỡỢợ", wch)) return L'ơ';
	//if (wcschr(L"UuÙùÚúỦủŨũỤụ", wch)) return L'u';
	//if (wcschr(L"ƯưỪừỨứỬửỮữỰự", wch)) return L'ư';
	//if (wcschr(L"YyỲỳÝýỶỷỸỹỴỵ", wch)) return L'y';
	//if (wcschr(L"đĐ", wch)) return L'đ';
	switch (wch)
	{
	case L'A':case L'à':case L'À':case L'á':case L'Á':case L'ả':case L'Ả':case L'ã':case L'Ã':case L'ạ':case L'Ạ':return L'a';
	case L'E':case L'è':case L'È':case L'é':case L'É':case L'ẻ':case L'Ẻ':case L'ẽ':case L'Ẽ':case L'ẹ':case L'Ẹ':return L'e';
	case L'I':case L'ì':case L'Ì':case L'í':case L'Í':case L'ỉ':case L'Ỉ':case L'ĩ':case L'Ĩ':case L'ị':case L'Ị':return L'i';
	case L'O':case L'ò':case L'Ò':case L'ó':case L'Ó':case L'ỏ':case L'Ỏ':case L'õ':case L'Õ':case L'ọ':case L'Ọ':return L'o';
	case L'U':case L'ù':case L'Ù':case L'ú':case L'Ú':case L'ủ':case L'Ủ':case L'ũ':case L'Ũ':case L'ụ':case L'Ụ':return L'u';
	case L'Y':case L'ỳ':case L'Ỳ':case L'ý':case L'Ý':case L'ỷ':case L'Ỷ':case L'ỹ':case L'Ỹ':case L'ỵ':case L'Ỵ':return L'y';
	case L'Â':case L'ầ':case L'Ầ':case L'ấ':case L'Ấ':case L'ẩ':case L'Ẩ':case L'ẫ':case L'Ẫ':case L'ậ':case L'Ậ':return L'â';
	case L'Ê':case L'ề':case L'Ề':case L'ế':case L'Ế':case L'ể':case L'Ể':case L'ễ':case L'Ễ':case L'ệ':case L'Ệ':return L'ê';
	case L'Ô':case L'ồ':case L'Ồ':case L'ố':case L'Ố':case L'ổ':case L'Ổ':case L'ỗ':case L'Ỗ':case L'ộ':case L'Ộ':return L'ô';
	case L'Ă':case L'ằ':case L'Ằ':case L'ắ':case L'Ắ':case L'ẳ':case L'Ẳ':case L'ẵ':case L'Ẵ':case L'ặ':case L'Ặ':return L'ă';
	case L'Ơ':case L'ờ':case L'Ờ':case L'ớ':case L'Ớ':case L'ở':case L'Ở':case L'ỡ':case L'Ỡ':case L'ợ':case L'Ợ':return L'ơ';
	case L'Ư':case L'ừ':case L'Ừ':case L'ứ':case L'Ứ':case L'ử':case L'Ử':case L'ữ':case L'Ữ':case L'ự':case L'Ự':return L'ư';
	case L'Đ':return L'đ';
	case L'B':return L'b';
	case L'C':return L'c';
	case L'D':return L'd';
	case L'F':return L'f';
	case L'G':return L'g';
	case L'H':return L'h';
	case L'J':return L'j';
	case L'K':return L'k';
	case L'L':return L'l';
	case L'M':return L'm';
	case L'N':return L'n';
	case L'P':return L'p';
	case L'Q':return L'q';
	case L'R':return L'r';
	case L'S':return L's';
	case L'T':return L't';
	case L'V':return L'v';
	case L'W':return L'w';
	case L'X':return L'x';
	case L'Z':return L'z';
	}
	return wch;
}
std::string			GetBase(const std::string& str)
{
	return GetString(GetBase(GetWString(str)));
}
std::wstring		GetBase(const std::wstring& wstr)
{
	std::wstring base;
	for (unsigned i = 0; i < wstr.size(); i++) base += GetBase(wstr[i]);
	return base;
}
wchar_t				GetCharacterInEnglish(wchar_t wch)
{
	switch (wch)
	{
	case L'A':case L'à':case L'À':case L'á':case L'Á':case L'ả':case L'Ả':case L'ã':case L'Ã':case L'ạ':case L'Ạ':return L'a';
	case L'E':case L'è':case L'È':case L'é':case L'É':case L'ẻ':case L'Ẻ':case L'ẽ':case L'Ẽ':case L'ẹ':case L'Ẹ':return L'e';
	case L'I':case L'ì':case L'Ì':case L'í':case L'Í':case L'ỉ':case L'Ỉ':case L'ĩ':case L'Ĩ':case L'ị':case L'Ị':return L'i';
	case L'O':case L'ò':case L'Ò':case L'ó':case L'Ó':case L'ỏ':case L'Ỏ':case L'õ':case L'Õ':case L'ọ':case L'Ọ':return L'o';
	case L'U':case L'ù':case L'Ù':case L'ú':case L'Ú':case L'ủ':case L'Ủ':case L'ũ':case L'Ũ':case L'ụ':case L'Ụ':return L'u';
	case L'Y':case L'ỳ':case L'Ỳ':case L'ý':case L'Ý':case L'ỷ':case L'Ỷ':case L'ỹ':case L'Ỹ':case L'ỵ':case L'Ỵ':return L'y';
	case L'Â':case L'ầ':case L'Ầ':case L'ấ':case L'Ấ':case L'ẩ':case L'Ẩ':case L'ẫ':case L'Ẫ':case L'ậ':case L'Ậ':return L'a';
	case L'Ê':case L'ề':case L'Ề':case L'ế':case L'Ế':case L'ể':case L'Ể':case L'ễ':case L'Ễ':case L'ệ':case L'Ệ':return L'e';
	case L'Ô':case L'ồ':case L'Ồ':case L'ố':case L'Ố':case L'ổ':case L'Ổ':case L'ỗ':case L'Ỗ':case L'ộ':case L'Ộ':return L'o';
	case L'Ă':case L'ằ':case L'Ằ':case L'ắ':case L'Ắ':case L'ẳ':case L'Ẳ':case L'ẵ':case L'Ẵ':case L'ặ':case L'Ặ':return L'a';
	case L'Ơ':case L'ờ':case L'Ờ':case L'ớ':case L'Ớ':case L'ở':case L'Ở':case L'ỡ':case L'Ỡ':case L'ợ':case L'Ợ':return L'o';
	case L'Ư':case L'ừ':case L'Ừ':case L'ứ':case L'Ứ':case L'ử':case L'Ử':case L'ữ':case L'Ữ':case L'ự':case L'Ự':return L'u';
	case L'Đ':return L'd';
	case L'B':return L'b';
	case L'C':return L'c';
	case L'D':return L'd';
	case L'F':return L'f';
	case L'G':return L'g';
	case L'H':return L'h';
	case L'J':return L'j';
	case L'K':return L'k';
	case L'L':return L'l';
	case L'M':return L'm';
	case L'N':return L'n';
	case L'P':return L'p';
	case L'Q':return L'q';
	case L'R':return L'r';
	case L'S':return L's';
	case L'T':return L't';
	case L'V':return L'v';
	case L'W':return L'w';
	case L'X':return L'x';
	case L'Z':return L'z';
	}
	return wch;
}
std::wstring		GetStringInEnglish(const std::wstring& wstr)
{
	std::wstring strInEnglish;
	for (unsigned i = 0; i < wstr.size(); i++) strInEnglish += GetCharacterInEnglish(wstr[i]);
	return strInEnglish;
}
std::wstring		GetTelex(wchar_t wch)
{
	switch (wch)
	{
	case L'à':return L"af";
	case L'À':return L"AF";
	case L'á':return L"as";
	case L'Á':return L"AS";
	case L'ả':return L"ar";
	case L'Ả':return L"AR";
	case L'ã':return L"ax";
	case L'Ã':return L"AX";
	case L'ạ':return L"aj";
	case L'Ạ':return L"AJ";
	case L'ă':return L"aw";
	case L'Ă':return L"AW";
	case L'ằ':return L"awf";
	case L'Ằ':return L"AWF";
	case L'ắ':return L"aws";
	case L'Ắ':return L"AWS";
	case L'ẳ':return L"awr";
	case L'Ẳ':return L"AWR";
	case L'ẵ':return L"awx";
	case L'Ẵ':return L"AWX";
	case L'ặ':return L"awj";
	case L'Ặ':return L"AWJ";
	case L'â':return L"aa";
	case L'Â':return L"AA";
	case L'ầ':return L"aaf";
	case L'Ầ':return L"AAF";
	case L'ấ':return L"aas";
	case L'Ấ':return L"AAS";
	case L'ẩ':return L"aar";
	case L'Ẩ':return L"AAR";
	case L'ẫ':return L"aax";
	case L'Ẫ':return L"AAX";
	case L'ậ':return L"aaj";
	case L'Ậ':return L"AAJ";
	case L'è':return L"ef";
	case L'È':return L"EF";
	case L'é':return L"es";
	case L'É':return L"ES";
	case L'ẻ':return L"er";
	case L'Ẻ':return L"ER";
	case L'ẽ':return L"ex";
	case L'Ẽ':return L"EX";
	case L'ẹ':return L"ej";
	case L'Ẹ':return L"EJ";
	case L'ê':return L"ee";
	case L'Ê':return L"EE";
	case L'ề':return L"eef";
	case L'Ề':return L"EEF";
	case L'ế':return L"ees";
	case L'Ế':return L"EES";
	case L'ể':return L"eer";
	case L'Ể':return L"EER";
	case L'ễ':return L"eex";
	case L'Ễ':return L"EEX";
	case L'ệ':return L"eej";
	case L'Ệ':return L"EEJ";
	case L'ì':return L"if";
	case L'Ì':return L"IF";
	case L'í':return L"is";
	case L'Í':return L"IS";
	case L'ỉ':return L"ir";
	case L'Ỉ':return L"IR";
	case L'ĩ':return L"ix";
	case L'Ĩ':return L"IX";
	case L'ị':return L"ij";
	case L'Ị':return L"IJ";
	case L'ò':return L"of";
	case L'Ò':return L"OF";
	case L'ó':return L"os";
	case L'Ó':return L"OS";
	case L'ỏ':return L"or";
	case L'Ỏ':return L"OR";
	case L'õ':return L"ox";
	case L'Õ':return L"OX";
	case L'ọ':return L"oj";
	case L'Ọ':return L"OJ";
	case L'ô':return L"oo";
	case L'Ô':return L"OO";
	case L'ồ':return L"oof";
	case L'Ồ':return L"OOF";
	case L'ố':return L"oos";
	case L'Ố':return L"OOS";
	case L'ổ':return L"oor";
	case L'Ổ':return L"OOR";
	case L'ỗ':return L"oox";
	case L'Ỗ':return L"OOX";
	case L'ộ':return L"ooj";
	case L'Ộ':return L"OOJ";
	case L'ơ':return L"ow";
	case L'Ơ':return L"OW";
	case L'ờ':return L"owf";
	case L'Ờ':return L"OWF";
	case L'ớ':return L"ows";
	case L'Ớ':return L"OWS";
	case L'ở':return L"owr";
	case L'Ở':return L"OWR";
	case L'ỡ':return L"owx";
	case L'Ỡ':return L"OWX";
	case L'ợ':return L"owj";
	case L'Ợ':return L"OWJ";
	case L'ù':return L"uf";
	case L'Ù':return L"UF";
	case L'ú':return L"us";
	case L'Ú':return L"US";
	case L'ủ':return L"ur";
	case L'Ủ':return L"UR";
	case L'ũ':return L"ux";
	case L'Ũ':return L"UX";
	case L'ụ':return L"uj";
	case L'Ụ':return L"UJ";
	case L'ư':return L"uw";
	case L'Ư':return L"UW";
	case L'ừ':return L"uwf";
	case L'Ừ':return L"UWF";
	case L'ứ':return L"uws";
	case L'Ứ':return L"UWS";
	case L'ử':return L"uwr";
	case L'Ử':return L"UWR";
	case L'ữ':return L"uwx";
	case L'Ữ':return L"UWX";
	case L'ự':return L"uwj";
	case L'Ự':return L"UWJ";
	case L'ỳ':return L"yf";
	case L'Ỳ':return L"YF";
	case L'ý':return L"ys";
	case L'Ý':return L"YS";
	case L'ỷ':return L"yr";
	case L'Ỷ':return L"YR";
	case L'ỹ':return L"yx";
	case L'Ỹ':return L"YX";
	case L'ỵ':return L"yj";
	case L'Ỵ':return L"YJ";
	case L'đ':return L"dd";
	case L'Đ':return L"DD";
	}
	wchar_t buffer[2] = { wch, 0 };
	return buffer;
}
std::wstring		GetTelex(const std::wstring& wstr)
{
	std::wstringlist	subWordList;
	Split(wstr, subWordList, L' ');
	std::wstring	bufferTelex;
	for (auto iword = subWordList.begin(); iword != subWordList.end(); iword++)
	{
		wchar_t			sign = 0;
		for (auto ichar = 0u; ichar < iword->size(); ichar++)
		{
			wchar_t			wch = iword->c_str()[ichar];

			switch (wch)
			{
			case 0x300/*`*/:										sign = L'f';			break;
			case 0x303/*~*/:										sign = L'x';			break;
			case 0x309/*?*/:										sign = L'r';			break;
			case 0x301/*'*/:										sign = L's';			break;
			case 0x323/*.*/:										sign = L'j';			break;
			case 0xE0/*af*/:		bufferTelex += L'a';			sign = L'f';			break;
			case 0xE3/*ax*/:		bufferTelex += L'a';			sign = L'x';			break;
			case 0x1EA3/*ar*/:		bufferTelex += L'a';			sign = L'r';			break;
			case 0xE1/*as*/:		bufferTelex += L'a';			sign = L's';			break;
			case 0x1EA1/*aj*/:		bufferTelex += L'a';			sign = L'j';			break;
			case 0xE2/*aa*/:		bufferTelex += L"aa";									break;
			case 0x1EA7/*aaf*/:		bufferTelex += L"aa";			sign = L'f';			break;
			case 0x1EAB/*aax*/:		bufferTelex += L"aa";			sign = L'x';			break;
			case 0x1EA9/*aar*/:		bufferTelex += L"aa";			sign = L'r';			break;
			case 0x1EA5/*aas*/:		bufferTelex += L"aa";			sign = L's';			break;
			case 0x1EAD/*aaj*/:		bufferTelex += L"aa";			sign = L'j';			break;
			case 0x103/*aw*/:		bufferTelex += L"aw";									break;
			case 0x1EB1/*awf*/:		bufferTelex += L"aw";			sign = L'f';			break;
			case 0x1EB5/*awx*/:		bufferTelex += L"aw";			sign = L'x';			break;
			case 0x1EB3/*awr*/:		bufferTelex += L"aw";			sign = L'r';			break;
			case 0x1EAF/*aws*/:		bufferTelex += L"aw";			sign = L's';			break;
			case 0x1EB7/*awj*/:		bufferTelex += L"aw";			sign = L'j';			break;
			case 0x111/*dd*/:		bufferTelex += L"dd";									break;
			case 0xEC/*if*/:		bufferTelex += L'i';			sign = L'f';			break;
			case 0x129/*ix*/:		bufferTelex += L'i';			sign = L'x';			break;
			case 0x1EC9/*ir*/:		bufferTelex += L'i';			sign = L'r';			break;
			case 0xED/*is*/:		bufferTelex += L'i';			sign = L's';			break;
			case 0x1ECB/*ij*/:		bufferTelex += L'i';			sign = L'j';			break;
			case 0x1EF3/*yf*/:		bufferTelex += L'y';			sign = L'f';			break;
			case 0x1EF9/*yx*/:		bufferTelex += L'y';			sign = L'x';			break;
			case 0x1EF7/*yr*/:		bufferTelex += L'y';			sign = L'r';			break;
			case 0xFD/*ys*/:		bufferTelex += L'y';			sign = L's';			break;
			case 0x1EF5/*yj*/:		bufferTelex += L'y';			sign = L'j';			break;
			case 0xF9/*uf*/:		bufferTelex += L'u';			sign = L'f';			break;
			case 0x169/*ux*/:		bufferTelex += L'u';			sign = L'x';			break;
			case 0x1EE7/*ur*/:		bufferTelex += L'u';			sign = L'r';			break;
			case 0xFA/*us*/:		bufferTelex += L'u';			sign = L's';			break;
			case 0x1EE5/*uj*/:		bufferTelex += L'u';			sign = L'j';			break;
			case 0x1B0/*uw*/:		bufferTelex += L"uw";									break;
			case 0x1EEB/*uwf*/:		bufferTelex += L"uw";			sign = L'f';			break;
			case 0x1EEF/*uwx*/:		bufferTelex += L"uw";			sign = L'x';			break;
			case 0x1EED/*uwr*/:		bufferTelex += L"uw";			sign = L'r';			break;
			case 0x1EE9/*uws*/:		bufferTelex += L"uw";			sign = L's';			break;
			case 0x1EF1/*uwj*/:		bufferTelex += L"uw";			sign = L'j';			break;
			case 0xE8/*ef*/:		bufferTelex += L'e';			sign = L'f';			break;
			case 0x1EBD/*ex*/:		bufferTelex += L'e';			sign = L'x';			break;
			case 0x1EBB/*er*/:		bufferTelex += L'e';			sign = L'r';			break;
			case 0xE9/*es*/:		bufferTelex += L'e';			sign = L's';			break;
			case 0x1EB9/*ej*/:		bufferTelex += L'e';			sign = L'j';			break;
			case 0xEA/*ee*/:		bufferTelex += L"ee";									break;
			case 0x1EC1/*eef*/:		bufferTelex += L"ee";			sign = L'f';			break;
			case 0x1EC5/*eex*/:		bufferTelex += L"ee";			sign = L'x';			break;
			case 0x1EC3/*eer*/:		bufferTelex += L"ee";			sign = L'r';			break;
			case 0x1EBF/*ees*/:		bufferTelex += L"ee";			sign = L's';			break;
			case 0x1EC7/*eej*/:		bufferTelex += L"ee";			sign = L'j';			break;
			case 0xF4/*oo*/:		bufferTelex += L"oo";									break;
			case 0x1ED3/*oof*/:		bufferTelex += L"oo";			sign = L'f';			break;
			case 0x1ED7/*oox*/:		bufferTelex += L"oo";			sign = L'x';			break;
			case 0x1ED5/*oor*/:		bufferTelex += L"oo";			sign = L'r';			break;
			case 0x1ED1/*oos*/:		bufferTelex += L"oo";			sign = L's';			break;
			case 0x1ED9/*ooj*/:		bufferTelex += L"oo";			sign = L'j';			break;
			case 0x1A1/*ow*/:		bufferTelex += L"ow";									break;
			case 0x1EDD/*owf*/:		bufferTelex += L"ow";			sign = L'f';			break;
			case 0x1EE1/*owx*/:		bufferTelex += L"ow";			sign = L'x';			break;
			case 0x1EDF/*owr*/:		bufferTelex += L"ow";			sign = L'r';			break;
			case 0x1EDB/*ows*/:		bufferTelex += L"ow";			sign = L's';			break;
			case 0x1EE3/*owj*/:		bufferTelex += L"ow";			sign = L'j';			break;
			case 0xF2/*of*/:		bufferTelex += L"o";			sign = L'f';			break;
			case 0xF5/*ox*/:		bufferTelex += L"o";			sign = L'x';			break;
			case 0x1ECF/*or*/:		bufferTelex += L"o";			sign = L'r';			break;
			case 0xF3/*os*/:		bufferTelex += L"o";			sign = L's';			break;
			case 0x1ECD/*oj*/:		bufferTelex += L"o";			sign = L'j';			break;

			case 0XC0/*AF*/:		bufferTelex += L'A';			sign = L'F';			break;
			case 0XC3/*AX*/:		bufferTelex += L'A';			sign = L'X';			break;
			case 0X1EA2/*AR*/:		bufferTelex += L'A';			sign = L'R';			break;
			case 0XC1/*AS*/:		bufferTelex += L'A';			sign = L'S';			break;
			case 0X1EA0/*AJ*/:		bufferTelex += L'A';			sign = L'J';			break;
			case 0XC2/*AA*/:		bufferTelex += L"AA";									break;
			case 0X1EA6/*AAF*/:		bufferTelex += L"AA";			sign = L'F';			break;
			case 0X1EAA/*AAX*/:		bufferTelex += L"AA";			sign = L'X';			break;
			case 0X1EA8/*AAR*/:		bufferTelex += L"AA";			sign = L'R';			break;
			case 0X1EA4/*AAS*/:		bufferTelex += L"AA";			sign = L'S';			break;
			case 0X1EAC/*AAJ*/:		bufferTelex += L"AA";			sign = L'J';			break;
			case 0X102/*AW*/:		bufferTelex += L"AW";									break;
			case 0X1EB0/*AWF*/:		bufferTelex += L"AW";			sign = L'F';			break;
			case 0X1EB4/*AWX*/:		bufferTelex += L"AW";			sign = L'X';			break;
			case 0X1EB2/*AWR*/:		bufferTelex += L"AW";			sign = L'R';			break;
			case 0X1EAE/*AWS*/:		bufferTelex += L"AW";			sign = L'S';			break;
			case 0X1EB6/*AWJ*/:		bufferTelex += L"AW";			sign = L'J';			break;
			case 0X110/*DD*/:		bufferTelex += L"DD";									break;
			case 0XCC/*IF*/:		bufferTelex += L'I';			sign = L'F';			break;
			case 0X128/*IX*/:		bufferTelex += L'I';			sign = L'X';			break;
			case 0X1EC8/*IR*/:		bufferTelex += L'I';			sign = L'R';			break;
			case 0XCD/*IS*/:		bufferTelex += L'I';			sign = L'S';			break;
			case 0X1ECA/*IJ*/:		bufferTelex += L'I';			sign = L'J';			break;
			case 0X1EF2/*YF*/:		bufferTelex += L'Y';			sign = L'F';			break;
			case 0X1EF8/*YX*/:		bufferTelex += L'Y';			sign = L'X';			break;
			case 0X1EF6/*YR*/:		bufferTelex += L'Y';			sign = L'R';			break;
			case 0XDD/*YS*/:		bufferTelex += L'Y';			sign = L'S';			break;
			case 0X1EF4/*YJ*/:		bufferTelex += L'Y';			sign = L'J';			break;
			case 0XD9/*UF*/:		bufferTelex += L'U';			sign = L'F';			break;
			case 0X168/*UX*/:		bufferTelex += L'U';			sign = L'X';			break;
			case 0X1EE6/*UR*/:		bufferTelex += L'U';			sign = L'R';			break;
			case 0XDA/*US*/:		bufferTelex += L'U';			sign = L'S';			break;
			case 0X1EE4/*UJ*/:		bufferTelex += L'U';			sign = L'J';			break;
			case 0X1AF/*UW*/:		bufferTelex += L"UW";									break;
			case 0X1EEA/*UWF*/:		bufferTelex += L"UW";			sign = L'F';			break;
			case 0X1EEE/*UWX*/:		bufferTelex += L"UW";			sign = L'X';			break;
			case 0X1EEC/*UWR*/:		bufferTelex += L"UW";			sign = L'R';			break;
			case 0X1EE8/*UWS*/:		bufferTelex += L"UW";			sign = L'S';			break;
			case 0X1EF0/*UWJ*/:		bufferTelex += L"UW";			sign = L'J';			break;
			case 0XC8/*EF*/:		bufferTelex += L'E';			sign = L'F';			break;
			case 0X1EBC/*EX*/:		bufferTelex += L'E';			sign = L'X';			break;
			case 0X1EBA/*ER*/:		bufferTelex += L'E';			sign = L'R';			break;
			case 0XC9/*ES*/:		bufferTelex += L'E';			sign = L'S';			break;
			case 0X1EB8/*EJ*/:		bufferTelex += L'E';			sign = L'J';			break;
			case 0XCA/*EE*/:		bufferTelex += L"EE";									break;
			case 0X1EC0/*EEF*/:		bufferTelex += L"EE";			sign = L'F';			break;
			case 0X1EC4/*EEX*/:		bufferTelex += L"EE";			sign = L'X';			break;
			case 0X1EC2/*EER*/:		bufferTelex += L"EE";			sign = L'R';			break;
			case 0X1EBE/*EES*/:		bufferTelex += L"EE";			sign = L'S';			break;
			case 0X1EC6/*EEJ*/:		bufferTelex += L"EE";			sign = L'J';			break;
			case 0XD4/*OO*/:		bufferTelex += L"OO";									break;
			case 0X1ED2/*OOF*/:		bufferTelex += L"OO";			sign = L'F';			break;
			case 0X1ED6/*OOX*/:		bufferTelex += L"OO";			sign = L'X';			break;
			case 0X1ED4/*OOR*/:		bufferTelex += L"OO";			sign = L'R';			break;
			case 0X1ED0/*OOS*/:		bufferTelex += L"OO";			sign = L'S';			break;
			case 0X1ED8/*OOJ*/:		bufferTelex += L"OO";			sign = L'J';			break;
			case 0X1A0/*OW*/:		bufferTelex += L"OW";									break;
			case 0X1EDC/*OWF*/:		bufferTelex += L"OW";			sign = L'F';			break;
			case 0X1EE0/*OWX*/:		bufferTelex += L"OW";			sign = L'X';			break;
			case 0X1EDE/*OWR*/:		bufferTelex += L"OW";			sign = L'R';			break;
			case 0X1EDA/*OWS*/:		bufferTelex += L"OW";			sign = L'S';			break;
			case 0X1EE2/*OWJ*/:		bufferTelex += L"OW";			sign = L'J';			break;
			case 0XD2/*OF*/:		bufferTelex += L"O";			sign = L'F';			break;
			case 0XD5/*OX*/:		bufferTelex += L"O";			sign = L'X';			break;
			case 0X1ECE/*OR*/:		bufferTelex += L"O";			sign = L'R';			break;
			case 0XD3/*OS*/:		bufferTelex += L"O";			sign = L'S';			break;
			case 0X1ECC/*OJ*/:		bufferTelex += L"O";			sign = L'J';			break;
			default:				bufferTelex += wch;										break;
			}
			if (ichar > 0 && GetBase(iword->c_str()[ichar - 1]) == L'o' && GetBase(iword->c_str()[ichar]) == L'o') bufferTelex += L"o";
		}
		if (sign/*!=0*/) bufferTelex += sign;
		auto inextword = iword;
		inextword++;
		if (inextword != subWordList.end()) bufferTelex += L' ';
	}
	return bufferTelex;
}
int					GetFirstInt(const std::wstring& wstr)
{
	int n = 0;
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	swscanf_s(wstr.c_str(), L"%d", &n);
#else
	swscanf(wstr.c_str(), L"%d", &n);
#endif
	return n;
}
int					Replace(std::wstring &wstr, wchar_t oldChar, wchar_t newChar)
{
	int countReplace = 0;
	for (auto iChar = 0u; iChar < wstr.size(); iChar++)
	{
		if (wstr[iChar] == oldChar)
		{
			wstr[iChar] = newChar;
			countReplace++;
		}
	}
	return countReplace;
}
int					Replace(std::string &wstr, char oldChar, char newChar)
{
	int countReplace = 0;
	for (auto iChar = 0u; iChar < wstr.size(); iChar++)
	{
		if (wstr[iChar] == oldChar)
		{
			wstr[iChar] = newChar;
			countReplace++;
		}
	}
	return countReplace;
}
int					Replace(std::wstring &wstr, const std::wstring &oldSub, const std::wstring &newSub)
{
	if (newSub.find(oldSub) != std::wstring::npos)
	{
		std::wstring errorString = L"Lỗi newSub[";
		errorString += newSub;
		errorString += L"] có chứa oldSub[";
		errorString += oldSub; errorString += L"] sẽ tạo ra 1 vòng lặp vô tận!";
		gui::Show(std::wstring(L"Lỗi"), L"Lỗi newSub[%ls] có chứa oldSub[%ls] sẽ tạo ra 1 vòng lặp vô tận!", newSub.c_str(), oldSub.c_str());
		return 0;
	}
	int countReplace = 0;
	if (oldSub.size() == 1 && newSub.size() == 1) countReplace = Replace(wstr, oldSub[0], newSub[0]);
	else
	{
		auto pos = wstr.find(oldSub);
		while (pos != std::wstring::npos)
		{
			wstr.replace(pos, oldSub.size(), newSub);
			countReplace++;
			pos = wstr.find(oldSub);
		}
	}
	return countReplace;
}
int					Replace(std::string &wstr, const std::string &oldSub, const std::string &newSub)
{
	if (newSub.find(oldSub) != std::wstring::npos)
	{
		std::wstring errorString = L"Lỗi newSub[";
		errorString += newSub;
		errorString += L"] có chứa oldSub[";
		errorString += oldSub; errorString += L"] sẽ tạo ra 1 vòng lặp vô tận!";
		gui::Show(std::wstring(L"Lỗi"), L"Lỗi newSub[%ls] có chứa oldSub[%ls] sẽ tạo ra 1 vòng lặp vô tận!", GetWString(newSub).c_str(), GetWString(oldSub).c_str());
		return 0;
	}
	int countReplace = 0;
	if (oldSub.size() == 1 && newSub.size() == 1) countReplace = Replace(wstr, oldSub[0], newSub[0]);
	else
	{
		auto pos = wstr.find(oldSub);
		while (pos != std::string::npos)
		{
			wstr.replace(pos, oldSub.size(), newSub);
			countReplace++;
			pos = wstr.find(oldSub);
		}
	}
	return countReplace;
}
std::wstring		GetUnicodeFromVNI(const std::wstring &vniStr)
{
	std::wstring unicodeStr;
	const wchar_t * iwstr = vniStr.c_str();
	for (auto i = 0u; i < vniStr.size(); i++, iwstr++)
	{
		wchar_t		rchar = *iwstr;
		int			jlength = 0;
		switch (iwstr[0])/*start switch : 124 way and 12 case*/
		{
		case 0x61/*a*/:
			switch (iwstr[1])/*start with [a..] : 17 way and 7 case 7 return. Cost 1*/
			{
			case 0x38/*8*/:
				/*Native cost is 2*/rchar = L'ă'; jlength = 1;
				switch (iwstr[2])/*start with [a8..] : 6 way and 5 case 5 return. Cost 2*/
				{
				case 0x31/*1*/:/*iwstr [a81] cost 3*/rchar = L'ắ'; jlength = 2; break;
				case 0x32/*2*/:/*iwstr [a82] cost 4*/rchar = L'ằ'; jlength = 2; break;
				case 0x33/*3*/:/*iwstr [a83] cost 5*/rchar = L'ẳ'; jlength = 2; break;
				case 0x34/*4*/:/*iwstr [a84] cost 6*/rchar = L'ẵ'; jlength = 2; break;
				case 0x35/*5*/:/*iwstr [a85] cost 7*/rchar = L'ặ'; jlength = 2; break;
				}//end of switch (iwstr[2])/*start with [a8..]*/
				break;
			case 0x31/*1*/:/*iwstr [a1] cost 3*/rchar = L'á'; jlength = 1; break;
			case 0x32/*2*/:/*iwstr [a2] cost 4*/rchar = L'à'; jlength = 1; break;
			case 0x33/*3*/:/*iwstr [a3] cost 5*/rchar = L'ả'; jlength = 1; break;
			case 0x34/*4*/:/*iwstr [a4] cost 6*/rchar = L'ã'; jlength = 1; break;
			case 0x35/*5*/:/*iwstr [a5] cost 7*/rchar = L'ạ'; jlength = 1; break;
			case 0x36/*6*/:
				/*Native cost is 8*/rchar = L'â'; jlength = 1;
				switch (iwstr[2])/*start with [a6..] : 6 way and 5 case 5 return. Cost 8*/
				{
				case 0x31/*1*/:/*iwstr [a61] cost 9*/rchar = L'ấ'; jlength = 2; break;
				case 0x32/*2*/:/*iwstr [a62] cost 10*/rchar = L'ầ'; jlength = 2; break;
				case 0x33/*3*/:/*iwstr [a63] cost 11*/rchar = L'ẩ'; jlength = 2; break;
				case 0x34/*4*/:/*iwstr [a64] cost 12*/rchar = L'ẫ'; jlength = 2; break;
				case 0x35/*5*/:/*iwstr [a65] cost 13*/rchar = L'ậ'; jlength = 2; break;
				}//end of switch (iwstr[2])/*start with [a6..]*/
				break;
			}//end of switch (iwstr[1])/*start with [a..]*/
			break;
		case 0x64/*d*/:/*iwstr [d9] cost 3*/if (iwstr[1] == 0x39/*9*/) { rchar = L'đ'; jlength = 1; }break;
		case 0x65/*e*/:
			switch (iwstr[1])/*start with [e..] : 11 way and 6 case 6 return. Cost 3*/
			{
			case 0x31/*1*/:/*iwstr [e1] cost 4*/rchar = L'é'; jlength = 1; break;
			case 0x32/*2*/:/*iwstr [e2] cost 5*/rchar = L'è'; jlength = 1; break;
			case 0x33/*3*/:/*iwstr [e3] cost 6*/rchar = L'ẻ'; jlength = 1; break;
			case 0x34/*4*/:/*iwstr [e4] cost 7*/rchar = L'ẽ'; jlength = 1; break;
			case 0x35/*5*/:/*iwstr [e5] cost 8*/rchar = L'ẹ'; jlength = 1; break;
			case 0x36/*6*/:
				/*Native cost is 9*/rchar = L'ê'; jlength = 1;
				switch (iwstr[2])/*start with [e6..] : 6 way and 5 case 5 return. Cost 9*/
				{
				case 0x31/*1*/:/*iwstr [e61] cost 10*/rchar = L'ế'; jlength = 2; break;
				case 0x32/*2*/:/*iwstr [e62] cost 11*/rchar = L'ề'; jlength = 2; break;
				case 0x33/*3*/:/*iwstr [e63] cost 12*/rchar = L'ể'; jlength = 2; break;
				case 0x34/*4*/:/*iwstr [e64] cost 13*/rchar = L'ễ'; jlength = 2; break;
				case 0x35/*5*/:/*iwstr [e65] cost 14*/rchar = L'ệ'; jlength = 2; break;
				}//end of switch (iwstr[2])/*start with [e6..]*/
				break;
			}//end of switch (iwstr[1])/*start with [e..]*/
			break;
		case 0x69/*i*/:
			switch (iwstr[1])/*start with [i..] : 5 way and 5 case 5 return. Cost 4*/
			{
			case 0x31/*1*/:/*iwstr [i1] cost 5*/rchar = L'í'; jlength = 1; break;
			case 0x32/*2*/:/*iwstr [i2] cost 6*/rchar = L'ì'; jlength = 1; break;
			case 0x33/*3*/:/*iwstr [i3] cost 7*/rchar = L'ỉ'; jlength = 1; break;
			case 0x34/*4*/:/*iwstr [i4] cost 8*/rchar = L'ĩ'; jlength = 1; break;
			case 0x35/*5*/:/*iwstr [i5] cost 9*/rchar = L'ị'; jlength = 1; break;
			}//end of switch (iwstr[1])/*start with [i..]*/
			break;
		case 0x6F/*o*/:
			switch (iwstr[1])/*start with [o..] : 17 way and 7 case 7 return. Cost 5*/
			{
			case 0x31/*1*/:/*iwstr [o1] cost 6*/rchar = L'ó'; jlength = 1; break;
			case 0x32/*2*/:/*iwstr [o2] cost 7*/rchar = L'ò'; jlength = 1; break;
			case 0x33/*3*/:/*iwstr [o3] cost 8*/rchar = L'ỏ'; jlength = 1; break;
			case 0x34/*4*/:/*iwstr [o4] cost 9*/rchar = L'õ'; jlength = 1; break;
			case 0x35/*5*/:/*iwstr [o5] cost 10*/rchar = L'ọ'; jlength = 1; break;
			case 0x36/*6*/:
				/*Native cost is 11*/rchar = L'ô'; jlength = 1;
				switch (iwstr[2])/*start with [o6..] : 6 way and 5 case 5 return. Cost 11*/
				{
				case 0x31/*1*/:/*iwstr [o61] cost 12*/rchar = L'ố'; jlength = 2; break;
				case 0x32/*2*/:/*iwstr [o62] cost 13*/rchar = L'ồ'; jlength = 2; break;
				case 0x33/*3*/:/*iwstr [o63] cost 14*/rchar = L'ổ'; jlength = 2; break;
				case 0x34/*4*/:/*iwstr [o64] cost 15*/rchar = L'ỗ'; jlength = 2; break;
				case 0x35/*5*/:/*iwstr [o65] cost 16*/rchar = L'ộ'; jlength = 2; break;
				}//end of switch (iwstr[2])/*start with [o6..]*/
				break;
			case 0x37/*7*/:
				/*Native cost is 12*/rchar = L'ơ'; jlength = 1;
				switch (iwstr[2])/*start with [o7..] : 6 way and 5 case 5 return. Cost 12*/
				{
				case 0x31/*1*/:/*iwstr [o71] cost 13*/rchar = L'ớ'; jlength = 2; break;
				case 0x32/*2*/:/*iwstr [o72] cost 14*/rchar = L'ờ'; jlength = 2; break;
				case 0x33/*3*/:/*iwstr [o73] cost 15*/rchar = L'ở'; jlength = 2; break;
				case 0x34/*4*/:/*iwstr [o74] cost 16*/rchar = L'ỡ'; jlength = 2; break;
				case 0x35/*5*/:/*iwstr [o75] cost 17*/rchar = L'ợ'; jlength = 2; break;
				}//end of switch (iwstr[2])/*start with [o7..]*/
				break;
			}//end of switch (iwstr[1])/*start with [o..]*/
			break;
		case 0x75/*u*/:
			switch (iwstr[1])/*start with [u..] : 11 way and 6 case 6 return. Cost 6*/
			{
			case 0x31/*1*/:/*iwstr [u1] cost 7*/rchar = L'ú'; jlength = 1; break;
			case 0x32/*2*/:/*iwstr [u2] cost 8*/rchar = L'ù'; jlength = 1; break;
			case 0x33/*3*/:/*iwstr [u3] cost 9*/rchar = L'ủ'; jlength = 1; break;
			case 0x34/*4*/:/*iwstr [u4] cost 10*/rchar = L'ũ'; jlength = 1; break;
			case 0x35/*5*/:/*iwstr [u5] cost 11*/rchar = L'ụ'; jlength = 1; break;
			case 0x37/*7*/:
				/*Native cost is 12*/rchar = L'ư'; jlength = 1;
				switch (iwstr[2])/*start with [u7..] : 6 way and 5 case 5 return. Cost 12*/
				{
				case 0x31/*1*/:/*iwstr [u71] cost 13*/rchar = L'ứ'; jlength = 2; break;
				case 0x32/*2*/:/*iwstr [u72] cost 14*/rchar = L'ừ'; jlength = 2; break;
				case 0x33/*3*/:/*iwstr [u73] cost 15*/rchar = L'ử'; jlength = 2; break;
				case 0x34/*4*/:/*iwstr [u74] cost 16*/rchar = L'ữ'; jlength = 2; break;
				case 0x35/*5*/:/*iwstr [u75] cost 17*/rchar = L'ự'; jlength = 2; break;
				}//end of switch (iwstr[2])/*start with [u7..]*/
				break;
			}//end of switch (iwstr[1])/*start with [u..]*/
			break;
		case 0x41/*A*/:
			switch (iwstr[1])/*start with [A..] : 17 way and 7 case 7 return. Cost 7*/
			{
			case 0x38/*8*/:
				/*Native cost is 8*/rchar = L'Ă'; jlength = 1;
				switch (iwstr[2])/*start with [A8..] : 6 way and 5 case 5 return. Cost 8*/
				{
				case 0x31/*1*/:/*iwstr [A81] cost 9*/rchar = L'Ắ'; jlength = 2; break;
				case 0x32/*2*/:/*iwstr [A82] cost 10*/rchar = L'Ằ'; jlength = 2; break;
				case 0x33/*3*/:/*iwstr [A83] cost 11*/rchar = L'Ẳ'; jlength = 2; break;
				case 0x34/*4*/:/*iwstr [A84] cost 12*/rchar = L'Ẵ'; jlength = 2; break;
				case 0x35/*5*/:/*iwstr [A85] cost 13*/rchar = L'Ặ'; jlength = 2; break;
				}//end of switch (iwstr[2])/*start with [A8..]*/
				break;
			case 0x31/*1*/:/*iwstr [A1] cost 9*/rchar = L'Á'; jlength = 1; break;
			case 0x32/*2*/:/*iwstr [A2] cost 10*/rchar = L'À'; jlength = 1; break;
			case 0x33/*3*/:/*iwstr [A3] cost 11*/rchar = L'Ả'; jlength = 1; break;
			case 0x34/*4*/:/*iwstr [A4] cost 12*/rchar = L'Ã'; jlength = 1; break;
			case 0x35/*5*/:/*iwstr [A5] cost 13*/rchar = L'Ạ'; jlength = 1; break;
			case 0x36/*6*/:
				/*Native cost is 14*/rchar = L'Â'; jlength = 1;
				switch (iwstr[2])/*start with [A6..] : 6 way and 5 case 5 return. Cost 14*/
				{
				case 0x31/*1*/:/*iwstr [A61] cost 15*/rchar = L'Ấ'; jlength = 2; break;
				case 0x32/*2*/:/*iwstr [A62] cost 16*/rchar = L'Ầ'; jlength = 2; break;
				case 0x33/*3*/:/*iwstr [A63] cost 17*/rchar = L'Ẩ'; jlength = 2; break;
				case 0x34/*4*/:/*iwstr [A64] cost 18*/rchar = L'Ẫ'; jlength = 2; break;
				case 0x35/*5*/:/*iwstr [A65] cost 19*/rchar = L'Ậ'; jlength = 2; break;
				}//end of switch (iwstr[2])/*start with [A6..]*/
				break;
			}//end of switch (iwstr[1])/*start with [A..]*/
			break;
		case 0x45/*E*/:
			switch (iwstr[1])/*start with [E..] : 11 way and 6 case 6 return. Cost 8*/
			{
			case 0x31/*1*/:/*iwstr [E1] cost 9*/rchar = L'É'; jlength = 1; break;
			case 0x32/*2*/:/*iwstr [E2] cost 10*/rchar = L'È'; jlength = 1; break;
			case 0x33/*3*/:/*iwstr [E3] cost 11*/rchar = L'Ẻ'; jlength = 1; break;
			case 0x34/*4*/:/*iwstr [E4] cost 12*/rchar = L'Ẽ'; jlength = 1; break;
			case 0x35/*5*/:/*iwstr [E5] cost 13*/rchar = L'Ẹ'; jlength = 1; break;
			case 0x36/*6*/:
				/*Native cost is 14*/rchar = L'Ê'; jlength = 1;
				switch (iwstr[2])/*start with [E6..] : 6 way and 5 case 5 return. Cost 14*/
				{
				case 0x31/*1*/:/*iwstr [E61] cost 15*/rchar = L'Ế'; jlength = 2; break;
				case 0x32/*2*/:/*iwstr [E62] cost 16*/rchar = L'Ề'; jlength = 2; break;
				case 0x33/*3*/:/*iwstr [E63] cost 17*/rchar = L'Ể'; jlength = 2; break;
				case 0x34/*4*/:/*iwstr [E64] cost 18*/rchar = L'Ễ'; jlength = 2; break;
				case 0x35/*5*/:/*iwstr [E65] cost 19*/rchar = L'Ệ'; jlength = 2; break;
				}//end of switch (iwstr[2])/*start with [E6..]*/
				break;
			}//end of switch (iwstr[1])/*start with [E..]*/
			break;
		case 0x4F/*O*/:
			switch (iwstr[1])/*start with [O..] : 17 way and 7 case 7 return. Cost 9*/
			{
			case 0x31/*1*/:/*iwstr [O1] cost 10*/rchar = L'Ó'; jlength = 1; break;
			case 0x32/*2*/:/*iwstr [O2] cost 11*/rchar = L'Ò'; jlength = 1; break;
			case 0x33/*3*/:/*iwstr [O3] cost 12*/rchar = L'Ỏ'; jlength = 1; break;
			case 0x34/*4*/:/*iwstr [O4] cost 13*/rchar = L'Õ'; jlength = 1; break;
			case 0x35/*5*/:/*iwstr [O5] cost 14*/rchar = L'Ọ'; jlength = 1; break;
			case 0x36/*6*/:
				/*Native cost is 15*/rchar = L'Ô'; jlength = 1;
				switch (iwstr[2])/*start with [O6..] : 6 way and 5 case 5 return. Cost 15*/
				{
				case 0x31/*1*/:/*iwstr [O61] cost 16*/rchar = L'Ố'; jlength = 2; break;
				case 0x32/*2*/:/*iwstr [O62] cost 17*/rchar = L'Ồ'; jlength = 2; break;
				case 0x33/*3*/:/*iwstr [O63] cost 18*/rchar = L'Ổ'; jlength = 2; break;
				case 0x34/*4*/:/*iwstr [O64] cost 19*/rchar = L'Ỗ'; jlength = 2; break;
				case 0x35/*5*/:/*iwstr [O65] cost 20*/rchar = L'Ộ'; jlength = 2; break;
				}//end of switch (iwstr[2])/*start with [O6..]*/
				break;
			case 0x37/*7*/:
				/*Native cost is 16*/rchar = L'Ơ'; jlength = 1;
				switch (iwstr[2])/*start with [O7..] : 6 way and 5 case 5 return. Cost 16*/
				{
				case 0x31/*1*/:/*iwstr [O71] cost 17*/rchar = L'Ớ'; jlength = 2; break;
				case 0x32/*2*/:/*iwstr [O72] cost 18*/rchar = L'Ờ'; jlength = 2; break;
				case 0x33/*3*/:/*iwstr [O73] cost 19*/rchar = L'Ở'; jlength = 2; break;
				case 0x34/*4*/:/*iwstr [O74] cost 20*/rchar = L'Ỡ'; jlength = 2; break;
				case 0x35/*5*/:/*iwstr [O75] cost 21*/rchar = L'Ợ'; jlength = 2; break;
				}//end of switch (iwstr[2])/*start with [O7..]*/
				break;
			}//end of switch (iwstr[1])/*start with [O..]*/
			break;
		case 0x55/*U*/:
			switch (iwstr[1])/*start with [U..] : 11 way and 6 case 6 return. Cost 10*/
			{
			case 0x31/*1*/:/*iwstr [U1] cost 11*/rchar = L'Ú'; jlength = 1; break;
			case 0x32/*2*/:/*iwstr [U2] cost 12*/rchar = L'Ù'; jlength = 1; break;
			case 0x33/*3*/:/*iwstr [U3] cost 13*/rchar = L'Ủ'; jlength = 1; break;
			case 0x34/*4*/:/*iwstr [U4] cost 14*/rchar = L'Ũ'; jlength = 1; break;
			case 0x35/*5*/:/*iwstr [U5] cost 15*/rchar = L'Ụ'; jlength = 1; break;
			case 0x37/*7*/:
				/*Native cost is 16*/rchar = L'Ư'; jlength = 1;
				switch (iwstr[2])/*start with [U7..] : 6 way and 5 case 5 return. Cost 16*/
				{
				case 0x31/*1*/:/*iwstr [U71] cost 17*/rchar = L'Ứ'; jlength = 2; break;
				case 0x32/*2*/:/*iwstr [U72] cost 18*/rchar = L'Ừ'; jlength = 2; break;
				case 0x33/*3*/:/*iwstr [U73] cost 19*/rchar = L'Ử'; jlength = 2; break;
				case 0x34/*4*/:/*iwstr [U74] cost 20*/rchar = L'Ữ'; jlength = 2; break;
				case 0x35/*5*/:/*iwstr [U75] cost 21*/rchar = L'Ự'; jlength = 2; break;
				}//end of switch (iwstr[2])/*start with [U7..]*/
				break;
			}//end of switch (iwstr[1])/*start with [U..]*/
			break;
		case 0x44/*D*/:/*iwstr [D9] cost 12*/if (iwstr[1] == 0x39/*9*/) { rchar = L'Đ'; jlength = 1; }break;
		case 0x49/*I*/:
			switch (iwstr[1])/*start with [I..] : 5 way and 5 case 5 return. Cost 12*/
			{
			case 0x31/*1*/:/*iwstr [I1] cost 13*/rchar = L'Í'; jlength = 1; break;
			case 0x32/*2*/:/*iwstr [I2] cost 14*/rchar = L'Ì'; jlength = 1; break;
			case 0x33/*3*/:/*iwstr [I3] cost 15*/rchar = L'Ỉ'; jlength = 1; break;
			case 0x34/*4*/:/*iwstr [I4] cost 16*/rchar = L'Ĩ'; jlength = 1; break;
			case 0x35/*5*/:/*iwstr [I5] cost 17*/rchar = L'Ị'; jlength = 1; break;
			}//end of switch (iwstr[1])/*start with [I..]*/
			break;
		}//end of switch (iwstr[0])/*start with [..]*/
		unicodeStr += rchar;
		i += jlength;
		iwstr += jlength;
	}
	return unicodeStr;
}
std::wstring		GetVNIFromUnicode(const std::wstring &unicodewstr)
{
	std::wstring vniStr;
	for (auto i = 0u; i < unicodewstr.size(); i++)
	{
		switch (unicodewstr[i])
		{
		case L'ắ':vniStr += L"a81"; break;
		case L'ằ':vniStr += L"a82"; break;
		case L'ẳ':vniStr += L"a83"; break;
		case L'ẵ':vniStr += L"a84"; break;
		case L'ặ':vniStr += L"a85"; break;
		case L'ấ':vniStr += L"a61"; break;
		case L'ầ':vniStr += L"a62"; break;
		case L'ẩ':vniStr += L"a63"; break;
		case L'ẫ':vniStr += L"a64"; break;
		case L'ậ':vniStr += L"a65"; break;
		case L'ế':vniStr += L"e61"; break;
		case L'ề':vniStr += L"e62"; break;
		case L'ể':vniStr += L"e63"; break;
		case L'ễ':vniStr += L"e64"; break;
		case L'ệ':vniStr += L"e65"; break;
		case L'ố':vniStr += L"o61"; break;
		case L'ồ':vniStr += L"o62"; break;
		case L'ổ':vniStr += L"o63"; break;
		case L'ỗ':vniStr += L"o64"; break;
		case L'ộ':vniStr += L"o65"; break;
		case L'ớ':vniStr += L"o71"; break;
		case L'ờ':vniStr += L"o72"; break;
		case L'ở':vniStr += L"o73"; break;
		case L'ỡ':vniStr += L"o74"; break;
		case L'ợ':vniStr += L"o75"; break;
		case L'ứ':vniStr += L"u71"; break;
		case L'ừ':vniStr += L"u72"; break;
		case L'ử':vniStr += L"u73"; break;
		case L'ữ':vniStr += L"u74"; break;
		case L'ự':vniStr += L"u75"; break;
		case L'Ắ':vniStr += L"A81"; break;
		case L'Ằ':vniStr += L"A82"; break;
		case L'Ẳ':vniStr += L"A83"; break;
		case L'Ẵ':vniStr += L"A84"; break;
		case L'Ặ':vniStr += L"A85"; break;
		case L'Ấ':vniStr += L"A61"; break;
		case L'Ầ':vniStr += L"A62"; break;
		case L'Ẩ':vniStr += L"A63"; break;
		case L'Ẫ':vniStr += L"A64"; break;
		case L'Ậ':vniStr += L"A65"; break;
		case L'Ế':vniStr += L"E61"; break;
		case L'Ề':vniStr += L"E62"; break;
		case L'Ể':vniStr += L"E63"; break;
		case L'Ễ':vniStr += L"E64"; break;
		case L'Ệ':vniStr += L"E65"; break;
		case L'Ố':vniStr += L"O61"; break;
		case L'Ồ':vniStr += L"O62"; break;
		case L'Ổ':vniStr += L"O63"; break;
		case L'Ỗ':vniStr += L"O64"; break;
		case L'Ộ':vniStr += L"O65"; break;
		case L'Ớ':vniStr += L"O71"; break;
		case L'Ờ':vniStr += L"O72"; break;
		case L'Ở':vniStr += L"O73"; break;
		case L'Ỡ':vniStr += L"O74"; break;
		case L'Ợ':vniStr += L"O75"; break;
		case L'Ứ':vniStr += L"U71"; break;
		case L'Ừ':vniStr += L"U72"; break;
		case L'Ử':vniStr += L"U73"; break;
		case L'Ữ':vniStr += L"U74"; break;
		case L'Ự':vniStr += L"U75"; break;
		case L'ă':vniStr += L"a8"; break;
		case L'â':vniStr += L"a6"; break;
		case L'ê':vniStr += L"e6"; break;
		case L'ô':vniStr += L"o6"; break;
		case L'ơ':vniStr += L"o7"; break;
		case L'ư':vniStr += L"u7"; break;
		case L'đ':vniStr += L"d9"; break;
		case L'ú':vniStr += L"u1"; break;
		case L'ù':vniStr += L"u2"; break;
		case L'ủ':vniStr += L"u3"; break;
		case L'ũ':vniStr += L"u4"; break;
		case L'ụ':vniStr += L"u5"; break;
		case L'é':vniStr += L"e1"; break;
		case L'è':vniStr += L"e2"; break;
		case L'ẻ':vniStr += L"e3"; break;
		case L'ẽ':vniStr += L"e4"; break;
		case L'ẹ':vniStr += L"e5"; break;
		case L'ó':vniStr += L"o1"; break;
		case L'ò':vniStr += L"o2"; break;
		case L'ỏ':vniStr += L"o3"; break;
		case L'õ':vniStr += L"o4"; break;
		case L'ọ':vniStr += L"o5"; break;
		case L'á':vniStr += L"a1"; break;
		case L'à':vniStr += L"a2"; break;
		case L'ả':vniStr += L"a3"; break;
		case L'ã':vniStr += L"a4"; break;
		case L'ạ':vniStr += L"a5"; break;
		case L'í':vniStr += L"i1"; break;
		case L'ì':vniStr += L"i2"; break;
		case L'ỉ':vniStr += L"i3"; break;
		case L'ĩ':vniStr += L"i4"; break;
		case L'ị':vniStr += L"i5"; break;
		case L'Ă':vniStr += L"A8"; break;
		case L'Â':vniStr += L"A6"; break;
		case L'Ê':vniStr += L"E6"; break;
		case L'Ô':vniStr += L"O6"; break;
		case L'Ơ':vniStr += L"O7"; break;
		case L'Ư':vniStr += L"U7"; break;
		case L'Đ':vniStr += L"D9"; break;
		case L'Ú':vniStr += L"U1"; break;
		case L'Ù':vniStr += L"U2"; break;
		case L'Ủ':vniStr += L"U3"; break;
		case L'Ũ':vniStr += L"U4"; break;
		case L'Ụ':vniStr += L"U5"; break;
		case L'É':vniStr += L"E1"; break;
		case L'È':vniStr += L"E2"; break;
		case L'Ẻ':vniStr += L"E3"; break;
		case L'Ẽ':vniStr += L"E4"; break;
		case L'Ẹ':vniStr += L"E5"; break;
		case L'Ó':vniStr += L"O1"; break;
		case L'Ò':vniStr += L"O2"; break;
		case L'Ỏ':vniStr += L"O3"; break;
		case L'Õ':vniStr += L"O4"; break;
		case L'Ọ':vniStr += L"O5"; break;
		case L'Á':vniStr += L"A1"; break;
		case L'À':vniStr += L"A2"; break;
		case L'Ả':vniStr += L"A3"; break;
		case L'Ã':vniStr += L"A4"; break;
		case L'Ạ':vniStr += L"A5"; break;
		case L'Í':vniStr += L"I1"; break;
		case L'Ì':vniStr += L"I2"; break;
		case L'Ỉ':vniStr += L"I3"; break;
		case L'Ĩ':vniStr += L"I4"; break;
		case L'Ị':vniStr += L"I5"; break;
		default:vniStr += unicodewstr[i]; break;
		}
	}
	return vniStr;
}
int					HaveSomeVietnameseCharacter(wchar_t wch)
{
	switch (wch)
	{
	case L'à':case L'À':case L'á':case L'Á':case L'ả':case L'Ả':case L'ã':case L'Ã':case L'ạ':case L'Ạ':
	case L'ă':case L'Ă':case L'ằ':case L'Ằ':case L'ắ':case L'Ắ':case L'ẳ':case L'Ẳ':case L'ẵ':case L'Ẵ':case L'ặ':case L'Ặ':
	case L'â':case L'Â':case L'ầ':case L'Ầ':case L'ấ':case L'Ấ':case L'ẩ':case L'Ẩ':case L'ẫ':case L'Ẫ':case L'ậ':case L'Ậ':
	case L'è':case L'È':case L'é':case L'É':case L'ẻ':case L'Ẻ':case L'ẽ':case L'Ẽ':case L'ẹ':case L'Ẹ':
	case L'ê':case L'Ê':case L'ề':case L'Ề':case L'ế':case L'Ế':case L'ể':case L'Ể':case L'ễ':case L'Ễ':case L'ệ':case L'Ệ':
	case L'ì':case L'Ì':case L'í':case L'Í':case L'ỉ':case L'Ỉ':case L'ĩ':case L'Ĩ':case L'ị':case L'Ị':
	case L'ò':case L'Ò':case L'ó':case L'Ó':case L'ỏ':case L'Ỏ':case L'õ':case L'Õ':case L'ọ':case L'Ọ':
	case L'ô':case L'Ô':case L'ồ':case L'Ồ':case L'ố':case L'Ố':case L'ổ':case L'Ổ':case L'ỗ':case L'Ỗ':case L'ộ':case L'Ộ':
	case L'ơ':case L'Ơ':case L'ờ':case L'Ờ':case L'ớ':case L'Ớ':case L'ở':case L'Ở':case L'ỡ':case L'Ỡ':case L'ợ':case L'Ợ':
	case L'ù':case L'Ù':case L'ú':case L'Ú':case L'ủ':case L'Ủ':case L'ũ':case L'Ũ':case L'ụ':case L'Ụ':
	case L'ư':case L'Ư':case L'ừ':case L'Ừ':case L'ứ':case L'Ứ':case L'ử':case L'Ử':case L'ữ':case L'Ữ':case L'ự':case L'Ự':
	case L'ỳ':case L'Ỳ':case L'ý':case L'Ý':case L'ỷ':case L'Ỷ':case L'ỹ':case L'Ỹ':case L'ỵ':case L'Ỵ':
	case L'đ':case L'Đ':
	case 0x300/*`*/:case 0x303/*~*/:case  0x309/*?*/:case 0x301/*'*/:case  0x323/*.*/:
		return 1;
		break;
	}
	return 0;
}
int					HaveSomeVietnameseCharacter(const std::wstring &wstr)
{
	//wchar_t dataVietnameseVowelLower[68] = L"àáảãạăằắẳẵặâầấẩẫậèéẻẽẹêềếểễệìíỉĩịòóỏõọôồốổỗộơờớởỡợùúủũụưừứửữựỳýỷỹỵđ";
	//wchar_t dataVietnameseVowelUpper[68] = L"ÀÁẢÃẠĂẰẮẲẴẶÂẦẤẨẪẬÈÉẺẼẸÊỀẾỂỄỆÌÍỈĨỊÒÓỎÕỌÔỒỐỔỖỘƠỜỚỞỠỢÙÚỦŨỤƯỪỨỬỮỰỲÝỶỸỴĐ";
	for (auto i = 0u; i < wstr.size(); i++)
	{
		switch (wstr[i])
		{

		case L'à':case L'À':case L'á':case L'Á':case L'ả':case L'Ả':case L'ã':case L'Ã':case L'ạ':case L'Ạ':
		case L'ă':case L'Ă':case L'ằ':case L'Ằ':case L'ắ':case L'Ắ':case L'ẳ':case L'Ẳ':case L'ẵ':case L'Ẵ':case L'ặ':case L'Ặ':
		case L'â':case L'Â':case L'ầ':case L'Ầ':case L'ấ':case L'Ấ':case L'ẩ':case L'Ẩ':case L'ẫ':case L'Ẫ':case L'ậ':case L'Ậ':
		case L'è':case L'È':case L'é':case L'É':case L'ẻ':case L'Ẻ':case L'ẽ':case L'Ẽ':case L'ẹ':case L'Ẹ':
		case L'ê':case L'Ê':case L'ề':case L'Ề':case L'ế':case L'Ế':case L'ể':case L'Ể':case L'ễ':case L'Ễ':case L'ệ':case L'Ệ':
		case L'ì':case L'Ì':case L'í':case L'Í':case L'ỉ':case L'Ỉ':case L'ĩ':case L'Ĩ':case L'ị':case L'Ị':
		case L'ò':case L'Ò':case L'ó':case L'Ó':case L'ỏ':case L'Ỏ':case L'õ':case L'Õ':case L'ọ':case L'Ọ':
		case L'ô':case L'Ô':case L'ồ':case L'Ồ':case L'ố':case L'Ố':case L'ổ':case L'Ổ':case L'ỗ':case L'Ỗ':case L'ộ':case L'Ộ':
		case L'ơ':case L'Ơ':case L'ờ':case L'Ờ':case L'ớ':case L'Ớ':case L'ở':case L'Ở':case L'ỡ':case L'Ỡ':case L'ợ':case L'Ợ':
		case L'ù':case L'Ù':case L'ú':case L'Ú':case L'ủ':case L'Ủ':case L'ũ':case L'Ũ':case L'ụ':case L'Ụ':
		case L'ư':case L'Ư':case L'ừ':case L'Ừ':case L'ứ':case L'Ứ':case L'ử':case L'Ử':case L'ữ':case L'Ữ':case L'ự':case L'Ự':
		case L'ỳ':case L'Ỳ':case L'ý':case L'Ý':case L'ỷ':case L'Ỷ':case L'ỹ':case L'Ỹ':case L'ỵ':case L'Ỵ':
		case L'đ':case L'Đ':
		case 0x300/*`*/:case 0x303/*~*/:case  0x309/*?*/:case 0x301/*'*/:case  0x323/*.*/:
			return i + 1;
			break;
		}
	}
	return 0;
}
int					GetTotalVowel(const std::wstring& wstr)
{
	int totalVowel = 0;
	for (auto i = 0u; i < wstr.size(); i++)
	{
		switch (wstr[i])
		{
		case L'a':case L'à':case L'À':case L'á':case L'Á':case L'ả':case L'Ả':case L'ã':case L'Ã':case L'ạ':case L'Ạ':
		case L'ă':case L'Ă':case L'ằ':case L'Ằ':case L'ắ':case L'Ắ':case L'ẳ':case L'Ẳ':case L'ẵ':case L'Ẵ':case L'ặ':case L'Ặ':
		case L'â':case L'Â':case L'ầ':case L'Ầ':case L'ấ':case L'Ấ':case L'ẩ':case L'Ẩ':case L'ẫ':case L'Ẫ':case L'ậ':case L'Ậ':
		case L'e':case L'è':case L'È':case L'é':case L'É':case L'ẻ':case L'Ẻ':case L'ẽ':case L'Ẽ':case L'ẹ':case L'Ẹ':
		case L'ê':case L'Ê':case L'ề':case L'Ề':case L'ế':case L'Ế':case L'ể':case L'Ể':case L'ễ':case L'Ễ':case L'ệ':case L'Ệ':
		case L'i':case L'ì':case L'Ì':case L'í':case L'Í':case L'ỉ':case L'Ỉ':case L'ĩ':case L'Ĩ':case L'ị':case L'Ị':
		case L'o':case L'ò':case L'Ò':case L'ó':case L'Ó':case L'ỏ':case L'Ỏ':case L'õ':case L'Õ':case L'ọ':case L'Ọ':
		case L'ô':case L'Ô':case L'ồ':case L'Ồ':case L'ố':case L'Ố':case L'ổ':case L'Ổ':case L'ỗ':case L'Ỗ':case L'ộ':case L'Ộ':
		case L'ơ':case L'Ơ':case L'ờ':case L'Ờ':case L'ớ':case L'Ớ':case L'ở':case L'Ở':case L'ỡ':case L'Ỡ':case L'ợ':case L'Ợ':
		case L'u':case L'ù':case L'Ù':case L'ú':case L'Ú':case L'ủ':case L'Ủ':case L'ũ':case L'Ũ':case L'ụ':case L'Ụ':
		case L'ư':case L'Ư':case L'ừ':case L'Ừ':case L'ứ':case L'Ứ':case L'ử':case L'Ử':case L'ữ':case L'Ữ':case L'ự':case L'Ự':
		case L'y':case L'ỳ':case L'Ỳ':case L'ý':case L'Ý':case L'ỷ':case L'Ỷ':case L'ỹ':case L'Ỹ':case L'ỵ':case L'Ỵ':
			totalVowel++;
			break;
		}
	}
	return totalVowel;
}
bool				SyllableInList(const std::wstring& syllable, const std::wstring& syllableStringList/*separated by space*/)
{
	return ((L" " + syllableStringList + L" ").find(L" " + syllable + L" ") != std::wstring::npos);
}
void				ReduceDataSet(std::wstringset &syllableSet)
{

	/************************************************************************/
	/* Các biến                                                             */
	/************************************************************************/
	int							totalReduce = 0;
	int							index = 1;
	int							total = 1;
	/************************************************************************/
	/* Xóa bỏ trùng lặp nội syllableSet                                     */
	/************************************************************************/
	index = 1;
	total = syllableSet.size();
	int currentY = gui::GetY();
	for (auto isyllable = syllableSet.begin(); isyllable != syllableSet.end(); isyllable++)
	{
		gui::GoToXY(0, currentY);
		printf("Reduce inner dup : index %d/%d/%d - Reduce %d bytes\n", index++, total, syllableSet.size(), totalReduce);
		int syllableLength = isyllable->size();
		if (syllableLength > 1)
		{
			for (int iStart = 0; iStart < syllableLength; iStart++)
			{
				for (int isubLeng = 1; isubLeng < syllableLength - iStart; isubLeng++)
				{
					std::wstring subStr = isyllable->substr(iStart, isubLeng);
					if (subStr.size() && subStr != *isyllable)
					{
						auto iDel = syllableSet.find(subStr);
						if (iDel != syllableSet.end())
						{
							totalReduce += iDel->size();
							syllableSet.erase(subStr);
						}
					}
				}
			}
		}
	}
	return;
	/************************************************************************/
	/* Tìm kiếm sự giao nhau                                                */
	/************************************************************************/
	std::wstringlist			sortedDupList;
	{
		std::wstringintmap			startCount;
		std::wstringintmap			endCount;
		std::wstringset				allSubSet;
		std::wstringset				dupSet;

		int							dupSetMaxSize = 0;
		index = 1;
		total = syllableSet.size();
		for (auto isyllable = syllableSet.begin(); isyllable != syllableSet.end(); isyllable++)
		{
			printf("Scan dup : index %d/%d - Sub %d/%d/%d\n", index++, total, startCount.size(), endCount.size(), allSubSet.size());
			std::wstring bufferCurrentWord = *isyllable;
			int length = bufferCurrentWord.size();

			for (int iSize = 1; iSize < length; iSize++)
			{
				std::wstring bufferCurrentStart = bufferCurrentWord.substr(0, iSize);
				startCount[bufferCurrentStart]++;
				allSubSet.insert(bufferCurrentStart);

				std::wstring bufferCurrentEnd = bufferCurrentWord.substr(length - iSize);
				endCount[bufferCurrentEnd]++;
				allSubSet.insert(bufferCurrentEnd);
			}
		}
		for (auto isub = allSubSet.begin(); isub != allSubSet.end(); isub++)
		{
			if (startCount.find(*isub) != startCount.end() && endCount.find(*isub) != endCount.end())
			{
				dupSet.insert(*isub);
				if (int(isub->size()) > dupSetMaxSize) dupSetMaxSize = isub->size();
			}
		}
		for (int iSize = dupSetMaxSize; iSize > 0; iSize--)
		{
			for (auto idup = dupSet.begin(); idup != dupSet.end(); idup++)
			{
				if (idup->size() == iSize)
				{
					sortedDupList.insert(sortedDupList.end(), *idup);
				}
			}
		}
		allSubSet.clear();
	}
	/************************************************************************/
	/* Nối                                                                  */
	/************************************************************************/
	index = 1;
	for (auto idup = sortedDupList.begin(); idup != sortedDupList.end(); idup++, index++)
	{
		std::wstring firstStartWithDup;
		std::wstring firstEndWithDup;
		int subindex = 1;
		for (auto isyllable = syllableSet.begin(); isyllable != syllableSet.end();)
		{
			printf("Join : index %d/%d - %d/%d\n", index, sortedDupList.size(), subindex++, syllableSet.size());
			if (firstStartWithDup.size() == 0 && StartWith(*isyllable, *idup) && (*isyllable) != firstEndWithDup) firstStartWithDup = *isyllable;
			else if (firstEndWithDup.size() == 0 && EndWith(*isyllable, *idup) && (*isyllable) != firstStartWithDup) firstEndWithDup = *isyllable;
			if (firstStartWithDup.size() && firstEndWithDup.size())
			{
				std::wstring newSyllable = firstEndWithDup;
				newSyllable += firstStartWithDup.substr(idup->size());
				syllableSet.insert(newSyllable);
				syllableSet.erase(firstStartWithDup);
				syllableSet.erase(firstEndWithDup);



				int syllableLength = newSyllable.size();
				for (int iStart = 0; iStart < syllableLength; iStart++)
				{
					for (int isubLeng = 1; isubLeng < syllableLength - iStart; isubLeng++)
					{
						std::wstring subStr = newSyllable.substr(iStart, isubLeng);
						if (subStr.size() > 1 && subStr != newSyllable)
						{
							auto iDel = syllableSet.find(subStr);
							if (iDel != syllableSet.end())
							{
								totalReduce += iDel->size();
								syllableSet.erase(subStr);
							}
						}
					}
				}




				firstStartWithDup.clear();
				firstEndWithDup.clear();
				isyllable = syllableSet.begin();
				subindex = 1;
			}
			else if (isyllable != syllableSet.end()) isyllable++;
		}

	}





}
void				ReduceDataSet(std::stringset &syllableSet)
{

	/************************************************************************/
	/* Các biến                                                             */
	/************************************************************************/
	int							totalReduce = 0;
	int							index = 1;
	int							total = 1;
	/************************************************************************/
	/* Xóa bỏ trùng lặp nội syllableSet                                     */
	/************************************************************************/
	index = 1;
	total = syllableSet.size();
	int currentY = gui::GetY();
	for (auto isyllable = syllableSet.begin(); isyllable != syllableSet.end(); isyllable++)
	{
		gui::GoToXY(0, currentY);
		printf("Reduce inner dup : index %d/%d/%d - Reduce %d bytes   \n", index++, total, syllableSet.size(), totalReduce);
		int syllableLength = isyllable->size();
		if (syllableLength > 1)
		{
			for (int iStart = 0; iStart < syllableLength; iStart++)
			{
				for (int isubLeng = 1; isubLeng < syllableLength - iStart; isubLeng++)
				{
					std::string subStr = isyllable->substr(iStart, isubLeng);
					if (subStr.size() && subStr != *isyllable)
					{
						auto iDel = syllableSet.find(subStr);
						if (iDel != syllableSet.end())
						{
							totalReduce += iDel->size();
							syllableSet.erase(subStr);
						}
					}
				}
			}
		}
	}
	return;
	/************************************************************************/
	/* Tìm kiếm sự giao nhau                                                */
	/************************************************************************/
	std::stringlist			sortedDupList;
	{
		std::stringintmap			startCount;
		std::stringintmap			endCount;
		std::stringset				allSubSet;
		std::stringset				dupSet;

		int							dupSetMaxSize = 0;
		index = 1;
		total = syllableSet.size();
		for (auto isyllable = syllableSet.begin(); isyllable != syllableSet.end(); isyllable++)
		{
			printf("Scan dup : index %d/%d - Sub %d/%d/%d\n", index++, total, startCount.size(), endCount.size(), allSubSet.size());
			std::string bufferCurrentWord = *isyllable;
			int length = bufferCurrentWord.size();

			for (int iSize = 1; iSize < length; iSize++)
			{
				std::string bufferCurrentStart = bufferCurrentWord.substr(0, iSize);
				startCount[bufferCurrentStart]++;
				allSubSet.insert(bufferCurrentStart);

				std::string bufferCurrentEnd = bufferCurrentWord.substr(length - iSize);
				endCount[bufferCurrentEnd]++;
				allSubSet.insert(bufferCurrentEnd);
			}
		}
		for (auto isub = allSubSet.begin(); isub != allSubSet.end(); isub++)
		{
			if (startCount.find(*isub) != startCount.end() && endCount.find(*isub) != endCount.end())
			{
				dupSet.insert(*isub);
				if (int(isub->size()) > dupSetMaxSize) dupSetMaxSize = isub->size();
			}
		}
		for (int iSize = dupSetMaxSize; iSize > 0; iSize--)
		{
			for (auto idup = dupSet.begin(); idup != dupSet.end(); idup++)
			{
				if (idup->size() == iSize)
				{
					sortedDupList.insert(sortedDupList.end(), *idup);
				}
			}
		}
		allSubSet.clear();
	}
	/************************************************************************/
	/* Nối                                                                  */
	/************************************************************************/
	index = 1;
	for (auto idup = sortedDupList.begin(); idup != sortedDupList.end(); idup++, index++)
	{
		std::string firstStartWithDup;
		std::string firstEndWithDup;
		int subindex = 1;
		for (auto isyllable = syllableSet.begin(); isyllable != syllableSet.end();)
		{
			printf("Join : index %d/%d - %d/%d\n", index, sortedDupList.size(), subindex++, syllableSet.size());
			if (firstStartWithDup.size() == 0 && StartWith(*isyllable, *idup) && (*isyllable) != firstEndWithDup) firstStartWithDup = *isyllable;
			else if (firstEndWithDup.size() == 0 && EndWith(*isyllable, *idup) && (*isyllable) != firstStartWithDup) firstEndWithDup = *isyllable;
			if (firstStartWithDup.size() && firstEndWithDup.size())
			{
				std::string newSyllable = firstEndWithDup;
				newSyllable += firstStartWithDup.substr(idup->size());
				syllableSet.insert(newSyllable);
				syllableSet.erase(firstStartWithDup);
				syllableSet.erase(firstEndWithDup);



				int syllableLength = newSyllable.size();
				for (int iStart = 0; iStart < syllableLength; iStart++)
				{
					for (int isubLeng = 1; isubLeng < syllableLength - iStart; isubLeng++)
					{
						std::string subStr = newSyllable.substr(iStart, isubLeng);
						if (subStr.size() > 1 && subStr != newSyllable)
						{
							auto iDel = syllableSet.find(subStr);
							if (iDel != syllableSet.end())
							{
								totalReduce += iDel->size();
								syllableSet.erase(subStr);
							}
						}
					}
				}




				firstStartWithDup.clear();
				firstEndWithDup.clear();
				isyllable = syllableSet.begin();
				subindex = 1;
			}
			else if (isyllable != syllableSet.end()) isyllable++;
		}

	}





}
void				RemoveExtraSpace(std::wstring& wstr)
{
	Replace(wstr, L"  ", L" ");
	while (wstr.size() && wstr[0] == L' ') wstr.erase(0, 1);
	while (wstr.size() && wstr[wstr.size() - 1] == L' ') wstr.erase(wstr.size() - 1);
}
std::wstring		GetSubWString(const wchar_t* str, int subLength)
{
	std::wstring result;
	for (int ilenth = 0; ilenth < subLength && str[ilenth]; ilenth++) result += str[ilenth];
	return result;
}
std::wstring		GetSubString(const wchar_t* str, int subLength)
{
	std::wstring result;
	for (int ilength = 0; ilength < subLength && str[ilength]; ilength++) result += str[ilength];
	return result;
}
/************************************************************************/
/* Combining                                                            */
/************************************************************************/
std::wstring		GetSyllableWithCombiningTone(const std::wstring& wstr)
{
	std::wstring result;
	for (int i = 0; i < (int)wstr.size(); i++)
	{
		result += GetBase(wstr[i]);
		switch (GetTone(wstr[i]))
		{
		case VIETNAMESE_TONE_HUYEN:	result += (wchar_t)0x300/*VIETNAMESE_TONE_HUYEN*/; break;
		case VIETNAMESE_TONE_NGA:	result += (wchar_t)0x303/*VIETNAMESE_TONE_NGA*/; break;
		case VIETNAMESE_TONE_HOI:	result += (wchar_t)0x309/*VIETNAMESE_TONE_HOI*/; break;
		case VIETNAMESE_TONE_SAC:	result += (wchar_t)0x301/*VIETNAMESE_TONE_SAC*/; break;
		case VIETNAMESE_TONE_NANG:	result += (wchar_t)0x323/*VIETNAMESE_TONE_NANG*/; break;
		}
	}
	return result;
}
std::wstring		GetSyllableWithCombiningAccent(const std::wstring& wstr)
{
	std::wstring result;
	for (int i = 0; i < (int)wstr.size(); i++)
	{
		switch (wstr[i])
		{
		case L'ê':	result += (wchar_t)L'e'; result += (wchar_t)0x302; break;
		case L'ô':	result += (wchar_t)L'o'; result += (wchar_t)0x302; break;
		case L'â':	result += (wchar_t)L'a'; result += (wchar_t)0x302; break;
		case L'Ê':	result += (wchar_t)L'E'; result += (wchar_t)0x302; break;
		case L'Ô':	result += (wchar_t)L'O'; result += (wchar_t)0x302; break;
		case L'Â':	result += (wchar_t)L'A'; result += (wchar_t)0x302; break;
		case L'ề':	result += (wchar_t)L'e'; result += (wchar_t)0x302; result += (wchar_t)0x300/*VIETNAMESE_TONE_HUYEN*/; break;
		case L'ồ':	result += (wchar_t)L'o'; result += (wchar_t)0x302; result += (wchar_t)0x300/*VIETNAMESE_TONE_HUYEN*/; break;
		case L'ầ':	result += (wchar_t)L'a'; result += (wchar_t)0x302; result += (wchar_t)0x300/*VIETNAMESE_TONE_HUYEN*/; break;
		case L'Ề':	result += (wchar_t)L'E'; result += (wchar_t)0x302; result += (wchar_t)0x300/*VIETNAMESE_TONE_HUYEN*/; break;
		case L'Ồ':	result += (wchar_t)L'O'; result += (wchar_t)0x302; result += (wchar_t)0x300/*VIETNAMESE_TONE_HUYEN*/; break;
		case L'Ầ':	result += (wchar_t)L'A'; result += (wchar_t)0x302; result += (wchar_t)0x300/*VIETNAMESE_TONE_HUYEN*/; break;
		case L'ế':	result += (wchar_t)L'e'; result += (wchar_t)0x302; result += (wchar_t)0x301/*VIETNAMESE_TONE_SAC*/; break;
		case L'ố':	result += (wchar_t)L'o'; result += (wchar_t)0x302; result += (wchar_t)0x301/*VIETNAMESE_TONE_SAC*/; break;
		case L'ấ':	result += (wchar_t)L'a'; result += (wchar_t)0x302; result += (wchar_t)0x301/*VIETNAMESE_TONE_SAC*/; break;
		case L'Ế':	result += (wchar_t)L'E'; result += (wchar_t)0x302; result += (wchar_t)0x301/*VIETNAMESE_TONE_SAC*/; break;
		case L'Ố':	result += (wchar_t)L'O'; result += (wchar_t)0x302; result += (wchar_t)0x301/*VIETNAMESE_TONE_SAC*/; break;
		case L'Ấ':	result += (wchar_t)L'A'; result += (wchar_t)0x302; result += (wchar_t)0x301/*VIETNAMESE_TONE_SAC*/; break;
		case L'ễ':	result += (wchar_t)L'e'; result += (wchar_t)0x302; result += (wchar_t)0x303/*VIETNAMESE_TONE_NGA*/; break;
		case L'ỗ':	result += (wchar_t)L'o'; result += (wchar_t)0x302; result += (wchar_t)0x303/*VIETNAMESE_TONE_NGA*/; break;
		case L'ẫ':	result += (wchar_t)L'a'; result += (wchar_t)0x302; result += (wchar_t)0x303/*VIETNAMESE_TONE_NGA*/; break;
		case L'Ễ':	result += (wchar_t)L'E'; result += (wchar_t)0x302; result += (wchar_t)0x303/*VIETNAMESE_TONE_NGA*/; break;
		case L'Ỗ':	result += (wchar_t)L'O'; result += (wchar_t)0x302; result += (wchar_t)0x303/*VIETNAMESE_TONE_NGA*/; break;
		case L'Ẫ':	result += (wchar_t)L'A'; result += (wchar_t)0x302; result += (wchar_t)0x303/*VIETNAMESE_TONE_NGA*/; break;
		case L'ể':	result += (wchar_t)L'e'; result += (wchar_t)0x302; result += (wchar_t)0x309/*VIETNAMESE_TONE_HOI*/;  break;
		case L'ổ':	result += (wchar_t)L'o'; result += (wchar_t)0x302; result += (wchar_t)0x309/*VIETNAMESE_TONE_HOI*/;  break;
		case L'ẩ':	result += (wchar_t)L'a'; result += (wchar_t)0x302; result += (wchar_t)0x309/*VIETNAMESE_TONE_HOI*/;  break;
		case L'Ể':	result += (wchar_t)L'E'; result += (wchar_t)0x302; result += (wchar_t)0x309/*VIETNAMESE_TONE_HOI*/;  break;
		case L'Ổ':	result += (wchar_t)L'O'; result += (wchar_t)0x302; result += (wchar_t)0x309/*VIETNAMESE_TONE_HOI*/;  break;
		case L'Ẩ':	result += (wchar_t)L'A'; result += (wchar_t)0x302; result += (wchar_t)0x309/*VIETNAMESE_TONE_HOI*/;  break;
		case L'ệ':	result += (wchar_t)L'e'; result += (wchar_t)0x302; result += (wchar_t)0x323/*VIETNAMESE_TONE_NANG*/; break;
		case L'ộ':	result += (wchar_t)L'o'; result += (wchar_t)0x302; result += (wchar_t)0x323/*VIETNAMESE_TONE_NANG*/; break;
		case L'ậ':	result += (wchar_t)L'a'; result += (wchar_t)0x302; result += (wchar_t)0x323/*VIETNAMESE_TONE_NANG*/; break;
		case L'Ệ':	result += (wchar_t)L'E'; result += (wchar_t)0x302; result += (wchar_t)0x323/*VIETNAMESE_TONE_NANG*/; break;
		case L'Ộ':	result += (wchar_t)L'O'; result += (wchar_t)0x302; result += (wchar_t)0x323/*VIETNAMESE_TONE_NANG*/; break;
		case L'Ậ':	result += (wchar_t)L'A'; result += (wchar_t)0x302; result += (wchar_t)0x323/*VIETNAMESE_TONE_NANG*/; break;
		default:result += wstr[i]; break;
		}
	}
	return result;
}
std::wstring		GetSyllableWithCombiningInvertedBreve(const std::wstring& wstr)
{
	std::wstring result;
	for (int i = 0; i < (int)wstr.size(); i++)
	{
		switch (wstr[i])
		{
		case L'ê':	result += (wchar_t)L'e'; result += (wchar_t)0x311; break;
		case L'ô':	result += (wchar_t)L'o'; result += (wchar_t)0x311; break;
		case L'â':	result += (wchar_t)L'a'; result += (wchar_t)0x311; break;
		case L'Ê':	result += (wchar_t)L'E'; result += (wchar_t)0x311; break;
		case L'Ô':	result += (wchar_t)L'O'; result += (wchar_t)0x311; break;
		case L'Â':	result += (wchar_t)L'A'; result += (wchar_t)0x311; break;
		case L'ề':	result += (wchar_t)L'e'; result += (wchar_t)0x311; result += (wchar_t)0x300/*VIETNAMESE_TONE_HUYEN*/; break;
		case L'ồ':	result += (wchar_t)L'o'; result += (wchar_t)0x311; result += (wchar_t)0x300/*VIETNAMESE_TONE_HUYEN*/; break;
		case L'ầ':	result += (wchar_t)L'a'; result += (wchar_t)0x311; result += (wchar_t)0x300/*VIETNAMESE_TONE_HUYEN*/; break;
		case L'Ề':	result += (wchar_t)L'E'; result += (wchar_t)0x311; result += (wchar_t)0x300/*VIETNAMESE_TONE_HUYEN*/; break;
		case L'Ồ':	result += (wchar_t)L'O'; result += (wchar_t)0x311; result += (wchar_t)0x300/*VIETNAMESE_TONE_HUYEN*/; break;
		case L'Ầ':	result += (wchar_t)L'A'; result += (wchar_t)0x311; result += (wchar_t)0x300/*VIETNAMESE_TONE_HUYEN*/; break;
		case L'ế':	result += (wchar_t)L'e'; result += (wchar_t)0x311; result += (wchar_t)0x301/*VIETNAMESE_TONE_SAC*/; break;
		case L'ố':	result += (wchar_t)L'o'; result += (wchar_t)0x311; result += (wchar_t)0x301/*VIETNAMESE_TONE_SAC*/; break;
		case L'ấ':	result += (wchar_t)L'a'; result += (wchar_t)0x311; result += (wchar_t)0x301/*VIETNAMESE_TONE_SAC*/; break;
		case L'Ế':	result += (wchar_t)L'E'; result += (wchar_t)0x311; result += (wchar_t)0x301/*VIETNAMESE_TONE_SAC*/; break;
		case L'Ố':	result += (wchar_t)L'O'; result += (wchar_t)0x311; result += (wchar_t)0x301/*VIETNAMESE_TONE_SAC*/; break;
		case L'Ấ':	result += (wchar_t)L'A'; result += (wchar_t)0x311; result += (wchar_t)0x301/*VIETNAMESE_TONE_SAC*/; break;
		case L'ễ':	result += (wchar_t)L'e'; result += (wchar_t)0x311; result += (wchar_t)0x303/*VIETNAMESE_TONE_NGA*/; break;
		case L'ỗ':	result += (wchar_t)L'o'; result += (wchar_t)0x311; result += (wchar_t)0x303/*VIETNAMESE_TONE_NGA*/; break;
		case L'ẫ':	result += (wchar_t)L'a'; result += (wchar_t)0x311; result += (wchar_t)0x303/*VIETNAMESE_TONE_NGA*/; break;
		case L'Ễ':	result += (wchar_t)L'E'; result += (wchar_t)0x311; result += (wchar_t)0x303/*VIETNAMESE_TONE_NGA*/; break;
		case L'Ỗ':	result += (wchar_t)L'O'; result += (wchar_t)0x311; result += (wchar_t)0x303/*VIETNAMESE_TONE_NGA*/; break;
		case L'Ẫ':	result += (wchar_t)L'A'; result += (wchar_t)0x311; result += (wchar_t)0x303/*VIETNAMESE_TONE_NGA*/; break;
		case L'ể':	result += (wchar_t)L'e'; result += (wchar_t)0x311; result += (wchar_t)0x309/*VIETNAMESE_TONE_HOI*/;  break;
		case L'ổ':	result += (wchar_t)L'o'; result += (wchar_t)0x311; result += (wchar_t)0x309/*VIETNAMESE_TONE_HOI*/;  break;
		case L'ẩ':	result += (wchar_t)L'a'; result += (wchar_t)0x311; result += (wchar_t)0x309/*VIETNAMESE_TONE_HOI*/;  break;
		case L'Ể':	result += (wchar_t)L'E'; result += (wchar_t)0x311; result += (wchar_t)0x309/*VIETNAMESE_TONE_HOI*/;  break;
		case L'Ổ':	result += (wchar_t)L'O'; result += (wchar_t)0x311; result += (wchar_t)0x309/*VIETNAMESE_TONE_HOI*/;  break;
		case L'Ẩ':	result += (wchar_t)L'A'; result += (wchar_t)0x311; result += (wchar_t)0x309/*VIETNAMESE_TONE_HOI*/;  break;
		case L'ệ':	result += (wchar_t)L'e'; result += (wchar_t)0x311; result += (wchar_t)0x323/*VIETNAMESE_TONE_NANG*/; break;
		case L'ộ':	result += (wchar_t)L'o'; result += (wchar_t)0x311; result += (wchar_t)0x323/*VIETNAMESE_TONE_NANG*/; break;
		case L'ậ':	result += (wchar_t)L'a'; result += (wchar_t)0x311; result += (wchar_t)0x323/*VIETNAMESE_TONE_NANG*/; break;
		case L'Ệ':	result += (wchar_t)L'E'; result += (wchar_t)0x311; result += (wchar_t)0x323/*VIETNAMESE_TONE_NANG*/; break;
		case L'Ộ':	result += (wchar_t)L'O'; result += (wchar_t)0x311; result += (wchar_t)0x323/*VIETNAMESE_TONE_NANG*/; break;
		case L'Ậ':	result += (wchar_t)L'A'; result += (wchar_t)0x311; result += (wchar_t)0x323/*VIETNAMESE_TONE_NANG*/; break;
		default:result += wstr[i]; break;
		}
	}
	return result;
}
std::wstring		GetSyllableWithCombiningBreve(const std::wstring& wstr)
{
	std::wstring result;
	for (int i = 0; i < (int)wstr.size(); i++)
	{
		switch (wstr[i])
		{
		case L'ă':	result += (wchar_t)L'a'; result += (wchar_t)0x306; break;
		case L'Ă':	result += (wchar_t)L'A'; result += (wchar_t)0x306; break;
		case L'ằ':	result += (wchar_t)L'a'; result += (wchar_t)0x306;	result += (wchar_t)0x300/*VIETNAMESE_TONE_HUYEN*/; break;
		case L'Ằ':	result += (wchar_t)L'A'; result += (wchar_t)0x306;	result += (wchar_t)0x300/*VIETNAMESE_TONE_HUYEN*/; break;
		case L'ẵ':	result += (wchar_t)L'a'; result += (wchar_t)0x306;	result += (wchar_t)0x303/*VIETNAMESE_TONE_NGA*/; break;
		case L'Ẵ':	result += (wchar_t)L'A'; result += (wchar_t)0x306;	result += (wchar_t)0x303/*VIETNAMESE_TONE_NGA*/; break;
		case L'ẳ':	result += (wchar_t)L'a'; result += (wchar_t)0x306;	result += (wchar_t)0x309/*VIETNAMESE_TONE_HOI*/; break;
		case L'Ẳ':	result += (wchar_t)L'A'; result += (wchar_t)0x306;	result += (wchar_t)0x309/*VIETNAMESE_TONE_HOI*/; break;
		case L'ắ':	result += (wchar_t)L'a'; result += (wchar_t)0x306;	result += (wchar_t)0x301/*VIETNAMESE_TONE_SAC*/; break;
		case L'Ắ':	result += (wchar_t)L'A'; result += (wchar_t)0x306;	result += (wchar_t)0x301/*VIETNAMESE_TONE_SAC*/; break;
		case L'ặ':	result += (wchar_t)L'a'; result += (wchar_t)0x306;	result += (wchar_t)0x323/*VIETNAMESE_TONE_NANG*/; break;
		case L'Ặ':	result += (wchar_t)L'A'; result += (wchar_t)0x306;	result += (wchar_t)0x323/*VIETNAMESE_TONE_NANG*/; break;
		default:result += wstr[i]; break;
		}
	}
	return result;
}
std::wstring		GetSyllableWithCombiningCaron(const std::wstring& wstr)
{
	std::wstring result;
	for (int i = 0; i < (int)wstr.size(); i++)
	{
		switch (wstr[i])
		{
		case L'ă':	result += (wchar_t)L'a'; result += (wchar_t)0x30C; break;
		case L'Ă':	result += (wchar_t)L'A'; result += (wchar_t)0x30C; break;
		case L'ằ':	result += (wchar_t)L'a'; result += (wchar_t)0x30C;	result += (wchar_t)0x300/*VIETNAMESE_TONE_HUYEN*/; break;
		case L'Ằ':	result += (wchar_t)L'A'; result += (wchar_t)0x30C;	result += (wchar_t)0x300/*VIETNAMESE_TONE_HUYEN*/; break;
		case L'ẵ':	result += (wchar_t)L'a'; result += (wchar_t)0x30C;	result += (wchar_t)0x303/*VIETNAMESE_TONE_NGA*/; break;
		case L'Ẵ':	result += (wchar_t)L'A'; result += (wchar_t)0x30C;	result += (wchar_t)0x303/*VIETNAMESE_TONE_NGA*/; break;
		case L'ẳ':	result += (wchar_t)L'a'; result += (wchar_t)0x30C;	result += (wchar_t)0x309/*VIETNAMESE_TONE_HOI*/; break;
		case L'Ẳ':	result += (wchar_t)L'A'; result += (wchar_t)0x30C;	result += (wchar_t)0x309/*VIETNAMESE_TONE_HOI*/; break;
		case L'ắ':	result += (wchar_t)L'a'; result += (wchar_t)0x30C;	result += (wchar_t)0x301/*VIETNAMESE_TONE_SAC*/; break;
		case L'Ắ':	result += (wchar_t)L'A'; result += (wchar_t)0x30C;	result += (wchar_t)0x301/*VIETNAMESE_TONE_SAC*/; break;
		case L'ặ':	result += (wchar_t)L'a'; result += (wchar_t)0x30C;	result += (wchar_t)0x323/*VIETNAMESE_TONE_NANG*/; break;
		case L'Ặ':	result += (wchar_t)L'A'; result += (wchar_t)0x30C;	result += (wchar_t)0x323/*VIETNAMESE_TONE_NANG*/; break;
		default:result += wstr[i]; break;
		}
	}
	return result;
}
std::wstring		GetSyllableWithCombiningHorn(const std::wstring& wstr)
{
	std::wstring result;
	for (int i = 0; i < (int)wstr.size(); i++)
	{
		switch (wstr[i])
		{
		case L'ơ':	result += (wchar_t)L'o'; result += (wchar_t)0x31B; break;
		case L'ờ':	result += (wchar_t)L'o'; result += (wchar_t)0x31B; result += (wchar_t)0x300/*` VIETNAMESE_TONE_HUYEN*/; break;
		case L'ợ':	result += (wchar_t)L'o'; result += (wchar_t)0x31B; result += (wchar_t)0x323/*. VIETNAMESE_TONE_NANG*/; break;
		case L'ở':	result += (wchar_t)L'o'; result += (wchar_t)0x31B; result += (wchar_t)0x309/*? VIETNAMESE_TONE_HOI*/; break;
		case L'ớ':	result += (wchar_t)L'o'; result += (wchar_t)0x31B; result += (wchar_t)0x301/*' VIETNAMESE_TONE_SAC*/; break;
		case L'ỡ':	result += (wchar_t)L'o'; result += (wchar_t)0x31B; result += (wchar_t)0x303/*~ VIETNAMESE_TONE_NGA*/; break;
		case L'Ơ':	result += (wchar_t)L'Ơ'; result += (wchar_t)0x31B; break;
		case L'Ờ':	result += (wchar_t)L'O'; result += (wchar_t)0x31B; result += (wchar_t)0x300/*` VIETNAMESE_TONE_HUYEN*/; break;
		case L'Ợ':	result += (wchar_t)L'O'; result += (wchar_t)0x31B; result += (wchar_t)0x323/*. VIETNAMESE_TONE_NANG*/; break;
		case L'Ở':	result += (wchar_t)L'O'; result += (wchar_t)0x31B; result += (wchar_t)0x309/*? VIETNAMESE_TONE_HOI*/; break;
		case L'Ớ':	result += (wchar_t)L'O'; result += (wchar_t)0x31B; result += (wchar_t)0x301/*' VIETNAMESE_TONE_SAC*/; break;
		case L'Ỡ':	result += (wchar_t)L'O'; result += (wchar_t)0x31B; result += (wchar_t)0x303/*~ VIETNAMESE_TONE_NGA*/; break;
		default:result += wstr[i]; break;
		}
	}
	return result;
}
std::wstring		GetSyllableWithCombiningToneMark(const std::wstring& wstr)
{
	std::wstring result;
	for (int i = 0; i < (int)wstr.size(); i++)
	{
		result += GetBase(wstr[i]);
		switch (GetTone(wstr[i]))
		{
		case VIETNAMESE_TONE_HUYEN:	result += (wchar_t)0x340/*VIETNAMESE_TONE_HUYEN*/; break;
		case VIETNAMESE_TONE_NGA:	result += (wchar_t)0x303/*VIETNAMESE_TONE_NGA*/; break;
		case VIETNAMESE_TONE_HOI:	result += (wchar_t)0x309/*VIETNAMESE_TONE_HOI*/; break;
		case VIETNAMESE_TONE_SAC:	result += (wchar_t)0x341/*VIETNAMESE_TONE_SAC*/; break;
		case VIETNAMESE_TONE_NANG:	result += (wchar_t)0x323/*VIETNAMESE_TONE_NANG*/; break;
		}
	}
	return result;
}


/************************************************************************/
/*                                                                      */
/************************************************************************/
bool				IsEnglishVowelCharacter(wchar_t wch)
{
	switch (wch)
	{
	case L'a':return true; break;
	case L'e':return true; break;
	case L'i':return true; break;
	case L'o':return true; break;
	case L'u':return true; break;
	case L'y':return true; break;
	}
	return false;
}
bool				IsEnglishVowelPhoneme(const std::wstring &phoneme)
{
	//	xntree<wchar_t> q;
	//	q.Insert(L"aa0", 4, (void*)1);
	//	q.Insert(L"ae0", 4, (void*)1);
	//	q.Insert(L"ah0", 4, (void*)1);
	//	q.Insert(L"ao0", 4, (void*)1);
	//	q.Insert(L"aw0", 4, (void*)1);
	//	q.Insert(L"ax0", 4, (void*)1);
	//	q.Insert(L"ay0", 4, (void*)1);
	//	q.Insert(L"eh0", 4, (void*)1);
	//	q.Insert(L"el0", 4, (void*)1);
	//	q.Insert(L"em0", 4, (void*)1);
	//	q.Insert(L"en0", 4, (void*)1);
	//	q.Insert(L"er0", 4, (void*)1);
	//	q.Insert(L"ey0", 4, (void*)1);
	//	q.Insert(L"ih0", 4, (void*)1);
	//	q.Insert(L"ix0", 4, (void*)1);
	//	q.Insert(L"iy0", 4, (void*)1);
	//	q.Insert(L"ow0", 4, (void*)1);
	//	q.Insert(L"oy0", 4, (void*)1);
	//	q.Insert(L"uh0", 4, (void*)1);
	//	q.Insert(L"uw0", 4, (void*)1);
	//	q.Insert(L"aa1", 4, (void*)1);
	//	q.Insert(L"ae1", 4, (void*)1);
	//	q.Insert(L"ah1", 4, (void*)1);
	//	q.Insert(L"ao1", 4, (void*)1);
	//	q.Insert(L"aw1", 4, (void*)1);
	//	q.Insert(L"ax1", 4, (void*)1);
	//	q.Insert(L"ay1", 4, (void*)1);
	//	q.Insert(L"eh1", 4, (void*)1);
	//	q.Insert(L"el1", 4, (void*)1);
	//	q.Insert(L"em1", 4, (void*)1);
	//	q.Insert(L"en1", 4, (void*)1);
	//	q.Insert(L"er1", 4, (void*)1);
	//	q.Insert(L"ey1", 4, (void*)1);
	//	q.Insert(L"ih1", 4, (void*)1);
	//	q.Insert(L"ix1", 4, (void*)1);
	//	q.Insert(L"iy1", 4, (void*)1);
	//	q.Insert(L"ow1", 4, (void*)1);
	//	q.Insert(L"oy1", 4, (void*)1);
	//	q.Insert(L"uh1", 4, (void*)1);
	//	q.Insert(L"uw1", 4, (void*)1);
	//	q.Insert(L"aa2", 4, (void*)1);
	//	q.Insert(L"ae2", 4, (void*)1);
	//	q.Insert(L"ah2", 4, (void*)1);
	//	q.Insert(L"ao2", 4, (void*)1);
	//	q.Insert(L"aw2", 4, (void*)1);
	//	q.Insert(L"ax2", 4, (void*)1);
	//	q.Insert(L"ay2", 4, (void*)1);
	//	q.Insert(L"eh2", 4, (void*)1);
	//	q.Insert(L"el2", 4, (void*)1);
	//	q.Insert(L"em2", 4, (void*)1);
	//	q.Insert(L"en2", 4, (void*)1);
	//	q.Insert(L"er2", 4, (void*)1);
	//	q.Insert(L"ey2", 4, (void*)1);
	//	q.Insert(L"ih2", 4, (void*)1);
	//	q.Insert(L"ix2", 4, (void*)1);
	//	q.Insert(L"iy2", 4, (void*)1);
	//	q.Insert(L"ow2", 4, (void*)1);
	//	q.Insert(L"oy2", 4, (void*)1);
	//	q.Insert(L"uh2", 4, (void*)1);
	//	q.Insert(L"uw2", 4, (void*)1);
	//	q.Gen(fopen("gen.cpp", "wb"));


	switch (phoneme[0])/*start switch : 60 way and 5 case*/
	{
	case 0x61/*a*/:
		switch (phoneme[1])/*start with [a..] : 21 way and 7 case. Cost 1*/
		{
		case 0x61/*a*/:
			switch (phoneme[2])/*start with [aa..] : 3 way and 3 case. Cost 2*/
			{
			case 0x30/*0*/:/*way [aa0] cost 4*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x31/*1*/:/*way [aa1] cost 5*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x32/*2*/:/*way [aa2] cost 6*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			}//end of switch (way[2])/*start with [aa..]*/
			break;
		case 0x65/*e*/:
			switch (phoneme[2])/*start with [ae..] : 3 way and 3 case. Cost 3*/
			{
			case 0x30/*0*/:/*way [ae0] cost 5*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x31/*1*/:/*way [ae1] cost 6*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x32/*2*/:/*way [ae2] cost 7*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			}//end of switch (way[2])/*start with [ae..]*/
			break;
		case 0x68/*h*/:
			switch (phoneme[2])/*start with [ah..] : 3 way and 3 case. Cost 4*/
			{
			case 0x30/*0*/:/*way [ah0] cost 6*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x31/*1*/:/*way [ah1] cost 7*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x32/*2*/:/*way [ah2] cost 8*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			}//end of switch (way[2])/*start with [ah..]*/
			break;
		case 0x6F/*o*/:
			switch (phoneme[2])/*start with [ao..] : 3 way and 3 case. Cost 5*/
			{
			case 0x30/*0*/:/*way [ao0] cost 7*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x31/*1*/:/*way [ao1] cost 8*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x32/*2*/:/*way [ao2] cost 9*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			}//end of switch (way[2])/*start with [ao..]*/
			break;
		case 0x78/*x*/:
			switch (phoneme[2])/*start with [ax..] : 3 way and 3 case. Cost 6*/
			{
			case 0x30/*0*/:/*way [ax0] cost 8*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x31/*1*/:/*way [ax1] cost 9*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x32/*2*/:/*way [ax2] cost 10*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			}//end of switch (way[2])/*start with [ax..]*/
			break;
		case 0x79/*y*/:
			switch (phoneme[2])/*start with [ay..] : 3 way and 3 case. Cost 7*/
			{
			case 0x30/*0*/:/*way [ay0] cost 9*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x31/*1*/:/*way [ay1] cost 10*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x32/*2*/:/*way [ay2] cost 11*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			}//end of switch (way[2])/*start with [ay..]*/
			break;
		case 0x77/*w*/:
			switch (phoneme[2])/*start with [aw..] : 3 way and 3 case. Cost 8*/
			{
			case 0x30/*0*/:/*way [aw0] cost 10*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x31/*1*/:/*way [aw1] cost 11*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x32/*2*/:/*way [aw2] cost 12*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			}//end of switch (way[2])/*start with [aw..]*/
			break;
		}//end of switch (way[1])/*start with [a..]*/
		break;
	case 0x65/*e*/:
		switch (phoneme[1])/*start with [e..] : 18 way and 6 case. Cost 2*/
		{
		case 0x68/*h*/:
			switch (phoneme[2])/*start with [eh..] : 3 way and 3 case. Cost 3*/
			{
			case 0x30/*0*/:/*way [eh0] cost 5*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x31/*1*/:/*way [eh1] cost 6*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x32/*2*/:/*way [eh2] cost 7*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			}//end of switch (way[2])/*start with [eh..]*/
			break;
		case 0x6C/*l*/:
			switch (phoneme[2])/*start with [el..] : 3 way and 3 case. Cost 4*/
			{
			case 0x30/*0*/:/*way [el0] cost 6*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x31/*1*/:/*way [el1] cost 7*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x32/*2*/:/*way [el2] cost 8*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			}//end of switch (way[2])/*start with [el..]*/
			break;
		case 0x6D/*m*/:
			switch (phoneme[2])/*start with [em..] : 3 way and 3 case. Cost 5*/
			{
			case 0x30/*0*/:/*way [em0] cost 7*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x31/*1*/:/*way [em1] cost 8*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x32/*2*/:/*way [em2] cost 9*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			}//end of switch (way[2])/*start with [em..]*/
			break;
		case 0x6E/*n*/:
			switch (phoneme[2])/*start with [en..] : 3 way and 3 case. Cost 6*/
			{
			case 0x30/*0*/:/*way [en0] cost 8*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x31/*1*/:/*way [en1] cost 9*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x32/*2*/:/*way [en2] cost 10*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			}//end of switch (way[2])/*start with [en..]*/
			break;
		case 0x72/*r*/:
			switch (phoneme[2])/*start with [er..] : 3 way and 3 case. Cost 7*/
			{
			case 0x30/*0*/:/*way [er0] cost 9*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x31/*1*/:/*way [er1] cost 10*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x32/*2*/:/*way [er2] cost 11*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			}//end of switch (way[2])/*start with [er..]*/
			break;
		case 0x79/*y*/:
			switch (phoneme[2])/*start with [ey..] : 3 way and 3 case. Cost 8*/
			{
			case 0x30/*0*/:/*way [ey0] cost 10*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x31/*1*/:/*way [ey1] cost 11*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x32/*2*/:/*way [ey2] cost 12*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			}//end of switch (way[2])/*start with [ey..]*/
			break;
		}//end of switch (way[1])/*start with [e..]*/
		break;
	case 0x69/*i*/:
		switch (phoneme[1])/*start with [i..] : 9 way and 3 case. Cost 3*/
		{
		case 0x68/*h*/:
			switch (phoneme[2])/*start with [ih..] : 3 way and 3 case. Cost 4*/
			{
			case 0x30/*0*/:/*way [ih0] cost 6*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x31/*1*/:/*way [ih1] cost 7*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x32/*2*/:/*way [ih2] cost 8*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			}//end of switch (way[2])/*start with [ih..]*/
			break;
		case 0x78/*x*/:
			switch (phoneme[2])/*start with [ix..] : 3 way and 3 case. Cost 5*/
			{
			case 0x30/*0*/:/*way [ix0] cost 7*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x31/*1*/:/*way [ix1] cost 8*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x32/*2*/:/*way [ix2] cost 9*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			}//end of switch (way[2])/*start with [ix..]*/
			break;
		case 0x79/*y*/:
			switch (phoneme[2])/*start with [iy..] : 3 way and 3 case. Cost 6*/
			{
			case 0x30/*0*/:/*way [iy0] cost 8*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x31/*1*/:/*way [iy1] cost 9*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x32/*2*/:/*way [iy2] cost 10*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			}//end of switch (way[2])/*start with [iy..]*/
			break;
		}//end of switch (way[1])/*start with [i..]*/
		break;
	case 0x6F/*o*/:
		switch (phoneme[1])/*start with [o..] : 6 way and 2 case. Cost 4*/
		{
		case 0x79/*y*/:
			switch (phoneme[2])/*start with [oy..] : 3 way and 3 case. Cost 5*/
			{
			case 0x30/*0*/:/*way [oy0] cost 7*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x31/*1*/:/*way [oy1] cost 8*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x32/*2*/:/*way [oy2] cost 9*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			}//end of switch (way[2])/*start with [oy..]*/
			break;
		case 0x77/*w*/:
			switch (phoneme[2])/*start with [ow..] : 3 way and 3 case. Cost 6*/
			{
			case 0x30/*0*/:/*way [ow0] cost 8*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x31/*1*/:/*way [ow1] cost 9*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x32/*2*/:/*way [ow2] cost 10*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			}//end of switch (way[2])/*start with [ow..]*/
			break;
		}//end of switch (way[1])/*start with [o..]*/
		break;
	case 0x75/*u*/:
		switch (phoneme[1])/*start with [u..] : 6 way and 2 case. Cost 5*/
		{
		case 0x68/*h*/:
			switch (phoneme[2])/*start with [uh..] : 3 way and 3 case. Cost 6*/
			{
			case 0x30/*0*/:/*way [uh0] cost 8*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x31/*1*/:/*way [uh1] cost 9*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x32/*2*/:/*way [uh2] cost 10*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			}//end of switch (way[2])/*start with [uh..]*/
			break;
		case 0x77/*w*/:
			switch (phoneme[2])/*start with [uw..] : 3 way and 3 case. Cost 7*/
			{
			case 0x30/*0*/:/*way [uw0] cost 9*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x31/*1*/:/*way [uw1] cost 10*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			case 0x32/*2*/:/*way [uw2] cost 11*/if (phoneme[3] == 0x0/*NULL*/) { return 1; }break;
			}//end of switch (way[2])/*start with [uw..]*/
			break;
		}//end of switch (way[1])/*start with [u..]*/
		break;
	}//end of switch (way[0])/*start with [..]*/
	 //Total Insert			: 000060 Ways
	 //Total Result			: 000060 Times
	 //Total if				: 000060 Times
	 //Total ==				: 000060 Times
	 //T
	return false;
}
bool				IsEnglishConsonantCharacter(wchar_t wch)
{
	switch (wch)
	{
	case L'b':return true; break;
	case L'd':return true; break;
	case L'f':return true; break;
	case L'g':return true; break;
	case L'k':return true; break;
	case L'l':return true; break;
	case L'm':return true; break;
	case L'p':return true; break;
	case L'r':return true; break;
	case L't':return true; break;
	case L'v':return true; break;
	case L'w':return true; break;
	case L'h':return true; break;
	case L'j':return true; break;
	case L'q':return true; break;
	case L'x':return true; break;
	case L'c':return true; break;
	case L'z':return true; break;
	case L's':return true; break;
	case L'n':return true; break;
	}
	return false;
}








/************************************************************************/
/* Other                                                                */
/************************************************************************/
/*constructor*/		wstringpool::wstringpool()
{
	this->originalSize = 0;
}
int					wstringpool::Insert(const std::wstring & wstr)
{
	originalSize += wstr.size();
	if (dataSet.insert(wstr).second == true)
	{
		int rIndex = dataSet.size() + 1;
		dataToIndexMap[wstr] = rIndex;
		return rIndex;
	}
	else return dataToIndexMap[wstr];
}
const std::wstring&	wstringpool::Build(void)
{
	/************************************************************************/
	/* Các biến                                                             */
	/************************************************************************/
	int					loopIndex = 1;
	std::wstringlist	sortedDuplicateList;
	std::wstringmap		startSubToDataList;
	std::wstringmap		endSubToDataList;
	/************************************************************************/
	/* Xóa bỏ trùng lặp nội syllableSet                                     */
	/************************************************************************/
	loopIndex = 1;
	for (auto isyllable = dataSet.begin(); isyllable != dataSet.end(); isyllable++)
	{//Tại
		printf("Reduce inner dup : index %d - current data set %d\n", loopIndex++, dataSet.size());
		int syllableLength = isyllable->size();
		if (syllableLength > 1)
		{
			for (int iStart = 0; iStart < syllableLength; iStart++)
			{
				for (int isubLeng = 1, maxSubLength = syllableLength - iStart + 1; isubLeng < maxSubLength; isubLeng++)
				{
					if (iStart != 0 || isubLeng < syllableLength - 1) dataSet.erase(isyllable->substr(iStart, isubLeng));
				}
			}
		}
	}
	/************************************************************************/
	/* Tìm kiếm sự giao nhau                                                */
	/************************************************************************/
	{
		std::wstringset		allSubSet;
		std::wstringset		dupSet;
		std::wstringintmap	startCount;
		std::wstringintmap	endCount;
		unsigned int		dupSetMaxSize = 0;
		loopIndex = 1;
		//tìm mọi sub con có thể có
		for (auto isyllable = dataSet.begin(); isyllable != dataSet.end(); isyllable++)
		{
			printf("Scan sub set : index %d / %d\n", loopIndex++, dataSet.size());
			for (int iSize = 1, length = isyllable->size(); iSize < length; iSize++)
			{
				std::wstring bufferCurrentStart = isyllable->substr(0, iSize);
				startCount[bufferCurrentStart]++;
				allSubSet.insert(bufferCurrentStart);

				std::wstring bufferCurrentEnd = isyllable->substr(length - iSize);
				endCount[bufferCurrentEnd]++;
				allSubSet.insert(bufferCurrentEnd);
			}
		}
		loopIndex = 1;
		//tìm sự giao nhau giữa các sub set
		for (auto isub = allSubSet.begin(); isub != allSubSet.end(); isub++)
		{
			printf("Scan dup set : index %d / %d\n", loopIndex++, dataSet.size());
			if (startCount.find(*isub) != startCount.end() && endCount.find(*isub) != endCount.end())
			{
				dupSet.insert(*isub);
				if (isub->size() > dupSetMaxSize) dupSetMaxSize = isub->size();
			}
		}
		//duyệt lại lần nữa
		loopIndex = 1;
		for (auto isyllable = dataSet.begin(); isyllable != dataSet.end(); isyllable++, loopIndex++)
		{
			printf("Rescan data set : index %d / %d\n", loopIndex++, dataSet.size());

			for (int iSize = 1, length = isyllable->size(); iSize < length; iSize++)
			{
				std::wstring bufferCurrentStart = isyllable->substr(0, iSize);
				if (dupSet.find(bufferCurrentStart) != dupSet.end())
				{
					startSubToDataList[bufferCurrentStart] += L" " + (*isyllable) + L" ";
				}

				std::wstring bufferCurrentEnd = isyllable->substr(length - iSize);
				if (dupSet.find(bufferCurrentEnd) != dupSet.end())
				{
					endSubToDataList[bufferCurrentEnd] += L" " + (*isyllable) + L" ";
				}
			}
		}
		//xắp xếp dupset
		for (int iSize = dupSetMaxSize; iSize > 0; iSize--)
		{
			printf("Sort dup set : index %d / %d\n", iSize, dupSetMaxSize);
			for (auto idup = dupSet.begin(); idup != dupSet.end();)
			{
				if (idup->size() == iSize)
				{
					sortedDuplicateList.insert(sortedDuplicateList.end(), *idup);
					if (idup == dupSet.begin())
					{
						dupSet.erase(idup);
						idup = dupSet.begin();
					}
					else
					{
						auto idupnext = idup;
						idupnext++;
						dupSet.erase(idup);
						idup = idupnext;
					}
				}
				else idup++;
			}
		}
	}


	/************************************************************************/
	/* Xu ly trung lap                                                      */
	/************************************************************************/
	loopIndex = 1;
	for (auto idup = sortedDuplicateList.begin(); idup != sortedDuplicateList.end(); idup++)
	{
		printf("Remove duplicate : index %d / %d\n", loopIndex++, sortedDuplicateList.size());
		std::wstringset startWithSet;
		Split(startSubToDataList[*idup], startWithSet, L' ');
		std::wstringset endWithSet;
		Split(endSubToDataList[*idup], endWithSet, L' ');


		for (auto iend = endWithSet.begin(); iend != endWithSet.end() && startWithSet.size();)
		{
			int flagNeedToJump = 1;
			auto istart = startWithSet.begin();
			while (istart != startWithSet.end() && (*istart) == (*iend)) istart++;
			if (istart != startWithSet.end() && (*istart) != (*iend))
			{
				wprintf(L"Concat [%s - %s] : Start Set %d - End Set %d\n", GetTelex(*iend).c_str(), GetTelex(*istart).c_str(), startWithSet.size(), endWithSet.size());

				std::wstring concatStr = *iend;
				concatStr += istart->substr(idup->size());

				startWithSet.erase(istart);
				flagNeedToJump = 0;
				endWithSet.erase(iend);
				iend = endWithSet.begin();

				//insert to data
				dataSet.insert(concatStr);
				int concatStrLength = concatStr.size();
				for (int iStart = 0; iStart < concatStrLength; iStart++)
				{
					for (int isubLeng = 1, maxSubLength = concatStrLength - iStart + 1; isubLeng < maxSubLength; isubLeng++)
					{
						if (iStart != 0 || isubLeng < concatStrLength - 1)
						{
							std::wstring bufferRemove = concatStr.substr(iStart, isubLeng);
							dataSet.erase(bufferRemove);

							for (auto ksubstart = startSubToDataList.begin(); ksubstart != startSubToDataList.end(); ksubstart++)
							{
								Replace(ksubstart->second, L" " + bufferRemove + L" ", L" ");
							}
							for (auto ksubend = endSubToDataList.begin(); ksubend != endSubToDataList.end(); ksubend++)
							{
								Replace(ksubend->second, L" " + bufferRemove + L" ", L" ");
							}

							startWithSet.erase(bufferRemove);
							endWithSet.erase(bufferRemove);
						}
					}
				}

				if (StartWith(concatStr, *idup)) startWithSet.insert(concatStr);
				if (EndWith(concatStr, *idup)) endWithSet.insert(concatStr);



			}
			if (flagNeedToJump) iend++;
		}
	}

	poolData = L"";
	for (auto idata = dataSet.begin(); idata != dataSet.end(); idata++) poolData += *idata;
	return poolData;
}
const std::wstring& wstringpool::PoolData(void)
{
	return poolData;
}







#define qwchar wchar_t
static void	ConvertUtf8toUnicode(const unsigned char * utf8str, qwchar* ucs2buffer)
{
	int utf8strlength = strlen((char*)utf8str);
	for (int ichar = 0; ichar < utf8strlength; ichar++)
	{
		if ((utf8str[0] & 0xE0) == 0xC0 && (utf8str[1] & 0xC0) == 0x80)
		{
			/* 2 bytes UTF-8 Character.*/
			*ucs2buffer = (((qwchar)(utf8str[0] & 0x001f)) << 6) | (utf8str[1] & 0x3f);
			ucs2buffer++;
			utf8str += 2;
		}
		else if ((utf8str[0] & 0xf0) == 0xE0 && (utf8str[1] & 0xc0) == 0x80 && (utf8str[2] & 0xc0) == 0x80)
		{
			/* 3bytes UTF-8 Character.*/
			*ucs2buffer = (((qwchar)(utf8str[0] & 0x000f)) << 12) | (((qwchar)(utf8str[1] & 0x3F)) << 6) | ((qwchar)(utf8str[2] & 0x3F));
			ucs2buffer++;
			utf8str += 3;
		}
		else
		{
			/* 1 byte UTF-8 Character.*/
			*ucs2buffer = *utf8str;
			ucs2buffer++;
			utf8str++;
		}
	}
}
static int	ConvertUnicodetoUtf8(const qwchar *ucs2str, int ucs2length, unsigned char* utf8buffer)
{
	int length = 0;
	int step = 0;
	int counter = 0;
	int end = ucs2length;
	qwchar temp_ucs2str_index = *ucs2str;
	unsigned char* out = utf8buffer;
	if (ucs2str == 0 || utf8buffer == 0) return 0;

	for (counter = 0; counter < end; counter++)
	{
		if (0x0080 > *ucs2str)
		{
			/* 1 byte UTF-8 Character.*/
			*out = (unsigned char)(temp_ucs2str_index);
			length++;
			step = 1;
			ucs2str++;
			temp_ucs2str_index = *(ucs2str);
			out += step;
		}
		else if (0x0800 > *ucs2str)
		{
			if (*(out - 1) == 20)
			{
				*out = (unsigned char)(temp_ucs2str_index);
				length++;
				step = 1;
				ucs2str++;
				temp_ucs2str_index = *(ucs2str);
				out += step;
				continue;
			}

			/*2 bytes UTF-8 Character.*/
			*out = ((unsigned char)(temp_ucs2str_index >> 6)) | 0xc0;
			*(out + 1) = ((unsigned char)(temp_ucs2str_index & 0x003F)) | 0x80;
			length += 2;
			step = 2;
			ucs2str++;
			temp_ucs2str_index = *(ucs2str);
			out += step;
		}
		else
		{
			/* 3 bytes UTF-8 Character .*/
			*out = ((unsigned char)(temp_ucs2str_index >> 12)) | 0xE0;
			*(out + 1) = ((unsigned char)((temp_ucs2str_index & 0x0FC0) >> 6)) | 0x80;
			*(out + 2) = ((unsigned char)(temp_ucs2str_index & 0x003F)) | 0x80;
			length += 3;
			step = 3;
			ucs2str++;
			temp_ucs2str_index = *(ucs2str);
			out += step;
		}
	}
	//out++;
	*out = 0;
	return length;
}
int			CountCharacter(const std::wstring& str, wchar_t wch)
{
	int result = 0;
	for (int ichar = 0, length = (int)str.size(); ichar < length; ichar++)
	{
		if (str[ichar] == wch) result++;
	}
	return result;
}


