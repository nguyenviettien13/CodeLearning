// factorial as an integral_constant
#include <iostream>
#include <type_traits>

template <unsigned n>
struct factorial :
	std::integral_constant<unsigned, n* factorial<n - 1>::value>{};
template <>
struct factorial<0>:
	std::integral_constant<unsigned, 1>{};

/*
int main()
{
	std::cout << factorial<5>::value << std::endl;
	return 1;
}
*/