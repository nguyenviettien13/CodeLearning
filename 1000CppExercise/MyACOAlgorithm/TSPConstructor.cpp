//#include "iostream"
//#include "fstream"
//#include "ctime"
//
//#define MAX_CITIES 30
//#define MAX_DIST 100
//
//struct CityType
//{
//	//toa do cua thanh pho
//	int x;
//	int y;
//} cities[MAX_CITIES];
//
//
//int main()
//{
//	std::ofstream f1;
//	f1.open(L"TSP.txt");
//	srand((unsigned int)std::time(NULL));
//
//	for (auto it = 0; it < MAX_CITIES; it++)
//	{
//		cities[it].x = rand() % MAX_DIST;
//		cities[it].y = rand() % MAX_DIST;
//		f1 << cities[it].x << " " << cities[it].y << std::endl;
//	}
//
//	f1.close();
//}