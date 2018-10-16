//// class templates
//#include <iostream>
//using namespace std;
//
//template <class T>
//class mypair {
//	T a, b;
//public:
//	mypair(T first, T second)
//	{
//		a = first; b = second;
//	}
//	T getmax();
//};
//
//template <class T>
//T mypair<T>::getmax()
//{
//	T retval;
//	retval = a > b ? a : b;
//	return retval;
//}
//
//int main() {
//	mypair <float> myobject(100.5, 759.2);
//	cout << myobject.getmax();
//	return 0;
//}
//===========================================================================
//// function template
//#include <iostream>
//using namespace std;
//
//template <class T>
//T GetMax(T a, T b) {
//	T result;
//	result = (a > b) ? a : b;
//	return (result);
//}
//
//int main() {
//	int i = 5, j = 6, k;
//	long l = 10, m = 5, n;
//	k = GetMax<int>(i, j);
//	n = GetMax<long>(l, m);
//	cout << k << endl;
//	cout << n << endl;
//	return 0;
//}

//================================================================================
// template specialization
//#include <iostream>
//using namespace std;
//
//// class template:
//template <class T>
//class mycontainer {
//	T element;
//public:
//	mycontainer(T arg) { element = arg; }
//	T increase() { return ++element; }
//};
//
//// class template specialization:
//template <>
//class mycontainer <char> {
//	char element;
//public:
//	mycontainer(char arg) { element = arg; }
//	char uppercase()
//	{
//		if ((element >= 'a') && (element <= 'z'))
//			element += 'A' - 'a';
//		return element;
//	}
//};
//
//int main() {
//	mycontainer<int> myint(7);
//	mycontainer<char> mychar('j');
//	cout << myint.increase() << endl;
//	cout << mychar.uppercase() << endl;
//	return 0;
//}