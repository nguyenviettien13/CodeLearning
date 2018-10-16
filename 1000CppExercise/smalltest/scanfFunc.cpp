///* scanf example */
//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif
//#include <stdio.h>
//#include <conio.h>
//#include <iostream>
//
//void main()
//{
//	char xau[100];
//	int x;
//
//	scanf("%2X", &x);
//	std::cout << x << std::endl;
//	//cau 1
//	//Xây dựng chương trình nhập vào 1 chuỗi dùng hàm scanf (nhập cả dấu cách) 
//	/*fflush(stdin);
//	scanf("%[^\n]", xau);
//	printf(xau);*/
//
//	//cau 2
//	//Xây dựng chương trình nhập vào 1 chuỗi giống như câu lệnh copy con trong Dos (nhập cả dấu cách, cả xuống dòng và khi ấn f6 rồi enter thì thoát )
//	/*fflush(stdin);
//	scanf("%[^\0]", xau);
//	printf(xau);
//*/
//	//cau 3
//	//xây dựng chương trình nhập vào 1 chuỗi ko có kí tự số
//	/*fflush(stdin);
//	scanf("%[^0-9]", xau);
//	printf(xau);*/
//
//
//	//cau 4
//	//a. Xây dựng chương trình nhập vào 1 chuỗi chỉ có chữ cái thường và số 8, dấu cách và dấu * và dấu ^
//	//b.Xây dựng chương trình nhập vào 1 chuỗi, việc nhập kết thúc khi ấn ^ rồi ấn enter
//	/*fflush(stdin);
//	scanf("%[a-z8*^ ]", xau);
//	printf(xau);
//	fflush(stdin);*/
//	/*printf(xau);
//	fflush(stdin);
//	scanf("%[^^]", xau);
//	printf(xau);*/
//	//cau 5
//	//xây dựng chương trình nhập vào 1 chuỗi ko có điểm ngừng (dùng scanf) . Nhập mãi mãi ko dừn
//
//	/*fflush(stdin);
//	scanf("%[]", xau);
//	printf(xau);*/
//	_getch();
//}