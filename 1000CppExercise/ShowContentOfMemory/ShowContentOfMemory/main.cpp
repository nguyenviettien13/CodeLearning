//#include <iostream>
//
//using namespace std;
//
//void showContentOfMemory(const void * a, int size);
//
//int main()
//{
//	int a[] = { 16, 64, 128, 1025 };
//	cout << sizeof(a) << endl << endl << endl;
//	showContentOfMemory(a, sizeof(a));
//	return 1;
//}
//
//void showContentOfMemory(const void * a, int size)
//{
//	const unsigned char * c = (const unsigned char *) a;
//	for (auto i = 0; i < size; i++)
//	{
//		printf("%02hhx", c[i]);
//		printf("\n");
//	}
//	cout << endl;
//}
