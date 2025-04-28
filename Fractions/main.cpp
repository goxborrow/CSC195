#include <iostream>
#include "Fraction.h"

int main()
{
	mathlib::Fraction<int> a = mathlib::Fraction<int>(1,3);
	mathlib::Fraction<int> b = mathlib::Fraction<int>(3,4);

	std::cout << a + b << std::endl;
	//std::cout << a - b << std::endl;
	//std::cout << a * b << std::endl;
	//std::cout << a / b << std::endl;

}

