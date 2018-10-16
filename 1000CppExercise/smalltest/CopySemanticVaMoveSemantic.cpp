//#include "iostream"
//
//class Array
//{
//private:
//	int* _pData;
//	int _n;
//
//public:
//	Array(int n)
//	{
//		std::cout << "Goi normal constructor " << std::endl;
//		_pData = new int[n];
//		_n = n;
//	}
//
//	/* Copy constructor, đối số là 1 lvalue reference
//	=> Nó chỉ được gọi khi đối số truyền vào là lvalue
//	(Xét trong TH move constructor được định nghĩa) */
//	Array(const Array& value)
//	{
//		/* Định nghĩa việc copy dữ liệu từ đối tượng value
//		dựa theo "copy semantics" */
//		std::cout << "goi copy constructor" << std::endl;
//		this->_n = value._n;
//		this->_pData = new int[this->_n];
//		for (int i = 0; i < this->_n; i++)
//		{
//			this->_pData[i] = value._pData[i];
//		}
//	}
//
//	/* Move constructor, đối số là một rvalue reference
//	=> Nó được gọi KHI VÀ CHỈ KHI đối số truyền vào là rvalue
//	(temporary object) */
//	Array(Array&& value)
//	{
//		/* Định nghĩa việc copy dữ liệu từ đối tượng value
//		dựa vào "move semantics" */
//		std::cout << "Goi move constructor" << std::endl;
//		this->_n = value._n;
//		this->_pData = value._pData;
//		value._pData = nullptr;
//	}
//};
//
//int main()
//{
//	Array a(3);
//
//	// Vì b là một lvalue, do đó copy constructor sẽ được gọi
//	Array b(a);
//
//	// Vì Array(1000000) là một rvalue, do đó move constructor sẽ được gọi
//	Array c(Array(3));
//	return 1;
//}