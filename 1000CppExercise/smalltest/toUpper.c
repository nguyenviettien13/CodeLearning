//#include <stdio.h>
//#include <conio.h>
//#include <ctype.h>
//#include "string.h"
//
//void main()
//{
//	char xau[200];
//
//	printf("Nhap xau : ");
//	scanf_s("%[a-zA-Z ]",xau); //nếu bạn chưa hiểu dòng lệnh này hãy xem bài viết này để hiểu sâu thêm về scanf 
//							  //http://forums.congdongcviet.com/showthread.php?t=34612
//
//							  //Viết hoa xâu  (duyệt xuôi)
//	printf("Viet hoa  : ");
//	for (char *p = xau; *p; p++) //p trỏ đến xâu; kí tự trỏ đến khác NULL;p=p+1
//		printf("%c", toupper(*p));
//
//	//viết đầy đủ sẽ là (char *p=xau;*p!=NULL;p++)
//	//viết ngắn gọn lại cho độc đáo
//
//
//	//Viết đảo ngược xâu  (duyệt ngược)
//	printf("\nDao nguoc xau : ");
//	for (char *p = xau + strlen(xau) - 1; p >= xau; p--)  // cho p trỏ vào từ cuối cùng; p còn lớn hơn xau;p=p-1
//		printf("%c", *p);
//
//
//
//	_getch();
//}