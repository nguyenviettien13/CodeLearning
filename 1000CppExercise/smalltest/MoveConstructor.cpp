//#include <string>
//#include <iostream>
//#include <iomanip>
//#include <utility>
//
//struct A
//{
//	std::string s;
//	A() : s("test") { }
//	A(const A& o) : s(o.s) { std::cout << "move failed!\n"; }
//	A(A&& o) noexcept : s(std::move(o.s)) { }
//};
//
//A f(A a)
//{
//	return a;
//}
//
//struct B : A
//{
//	std::string s2;
//	int n;
//	// implicit move constructor B::(B&&)
//	// calls A's move constructor
//	// calls s2's move constructor
//	// and makes a bitwise copy of n
//};
//
//struct C : B
//{
//	~C() { } // destructor prevents implicit move constructor C::(C&&)
//};
//
//struct D : B
//{
//	D() { }
//	~D() { }          // destructor would prevent implicit move constructor D::(D&&)
//	D(D&&) = default; // forces a move constructor anyway
//};
//
//int main()
//{
//	std::cout << "Trying to move A\n";
//	A a1 = f(A()); // move-constructs from rvalue temporary
//	A a2 = std::move(a1); // move-constructs from xvalue
//
//	std::cout << "Trying to move B\n";
//	B b1;
//	std::cout << "Before move, b1.s = " << std::quoted(b1.s) << "\n";
//	B b2 = std::move(b1); // calls implicit move constructor
//	std::cout << "After move, b1.s = " << std::quoted(b1.s) << "\n";
//
//	std::cout << "Trying to move C\n";
//	C c1;
//	C c2 = std::move(c1); // calls copy constructor
//
//	std::cout << "Trying to move D\n";
//	D d1;
//	D d2 = std::move(d1);
//}