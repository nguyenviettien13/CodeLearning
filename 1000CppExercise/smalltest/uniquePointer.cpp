//#include <memory>
//using namespace std;
//
//int main()
//{
//	unique_ptr<int> p1(new int[1000000]);
//
//	/* Bị lỗi, vì unique_ptr không có copy constructor và đoạn code này
//	cũng gây ra sai lệch về mặt ngữ nghĩa của unique_ptr (nếu thực hiện
//	được thì hai smart pointer p1 và p2 sẽ cùng trở tới một tài nguyên) */
//	unique_ptr<int> p2(p1);
//
//	/* Không lỗi, lúc này ta cố ý muốn chuyển tài nguyên mà p1 sở hữu
//	cho p3, và sau đó thì p3 sẽ trỏ tới tài nguyên trước đó của p1, còn
//	p1 trỏ tới null */
//	unique_ptr<int> p3(std::move(p1));
//	return 0;
//}