#include "complex.hpp"

int main()
{
	Complex test1(3, -1);
	Complex test2(-5 ,2);
	Complex test = test1 / test2;
	std::cout << test.real() << " " << test.imag() << std::endl;
}
