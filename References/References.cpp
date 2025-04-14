// References.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void Swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void Swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int i1 = 5;
	int i2 = 20;
	int* p1 = &i1;
	//p1 = nullptr;

	int& r1 = i1; //reference to pointer
	r1 = 10;

	std::cout << "i1: " << i1 << "\ti2: " << i2 << std::endl;
	Swap(&i1, &i2);
	std::cout << "i1: " << i1 << "\ti2: " << i2 << std::endl;
	Swap(i1, i2);
	std::cout << "i1: " << i1 << "\ti2: " << i2 << std::endl;


	std::cout << &i1 << std::endl;

	//std::cout << &r1 << std::endl;
	//std::cout << &i1 << std::endl;

	for (int i = 0; i < 1000; i++) {
		std::cout << p1++ << std::endl;
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
