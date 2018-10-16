//int main()
//{
//	int a = 197, *p = &a;
//	double b = 0, *x = &b;
//
//	// so sánh 2 con trỏ 
//	(int)p == (int)x;
//	p == (int *)x;
//	(double*)p == x;
//	(void*)p == (void*)x;
//	p == (void*)x;
//	(float*)p == (float*)x;
//
//	//so sánh con trỏ với số nguyên
//	p == (int*)9999;
//	int(p) == 9999;
//
//	// phần nâng cao và thâm thúy về con trỏ   
//	(int)p == int(main);
//	p == (int*)main;
//	(int(*)())p == main;
//	p == (void*)main;
//	// bình tĩnh tự tin theo hết tut này bạn sẽ hiểu được cái gì đang xảy ra ở 4 dòng code này
//
//}