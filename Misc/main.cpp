// Misc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "Point.h"

#define NAME "Amia"
#define PI 3.1415926535897932384626433832795
//#define XBOX
//#define PS
//#define SWITCH

//#define DEBUG


using names_t = std::vector<std::string>;

namespace math {
	template <typename T1, typename T2>
	T1 max(T1 a, T2 b) {

		return a > b ? a : b;

	}
}

void print(const names_t& names) {

	//names[0] = "Kevin";
	for (std::string name : names) {
		std::cout << name << std::endl;
	}
}



//int max(int a, int b) {
//    
//	return a > b ? a : b;
//	
//}

int g = 5;

template<typename T>
void StreamOut(std::ostream& ostream, const T& value) {
	ostream << value << std::endl;
}

void StreamIn(std::istream& istream, std::string& text) {
	std::getline(istream, text);
}

int main()
{
#ifdef _DEBUG
	std::cout << "Program Start\n" << std::endl;
#endif
#ifdef XBOX
	//XBOX code
	std::cout << "XBOX LIVE" << std::endl;
#endif
#ifdef PS
	//PS code
	std::cout << "Playstation" << std::endl;
#endif
#ifdef SWITCH
	//SWITCH code
	std::cout << "Nintendo Switch" << std::endl;
#endif

	StreamOut(std::cout, NAME);

	math::ipoint_t p(4, 5);
	//std::cin >> p;

	

	std::cout << PI << std::endl;

	//write to file
	std::ofstream fstream("text.txt");
	StreamOut(fstream, p);
	StreamOut(fstream, "Hello");
	StreamOut(fstream, 5);
	StreamOut(fstream, 34.0f);
	fstream.close();

	//read in from file
	std::string text;
	std::ifstream ifstream("text.txt");
	if (ifstream.is_open()) {
		while (std::getline(ifstream, text)) {
			std::cout << text << std::endl;
		}
	}
		ifstream.close();




	//StreamIn(std::cin, text);
	//std::cout << text << std::endl;

	math::ipoint_t p1(23, 34);
	math::ipoint_t p2(12, 10);
	math::ipoint_t p3;
	p3 = p1 + p2;


	std::cout << p3.getX() << " " << p3.getY() << std::endl;
	//std::cout << p1.Add(p2) << std::endl;

	/*std::cout << p1.getX() << " " << p1.getY() << " " << std::endl;

	std::cout << std::max(5, 10) << std::endl;
	std::cout << math::max(6, 10.0f) << std::endl;

	names_t names = { "John", "Jane", "Doe" };
	print(names);*/
}
