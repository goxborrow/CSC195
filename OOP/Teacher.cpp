#include "Teacher.h"
#include <iostream>

void Teacher::Read() {
	std::cout << "TEACHER\n";
	Human::Read(); // Call the base class Read function
	std::cout << "Class Name: ";
	std::cin >> m_className;

	std::cout << "Classroom: ";
	std::cin >> m_classroom;
}

void Teacher::Write() {
	std::cout << "TEACHER\n";
	Human::Write(); // Call the base class Write function
	std::cout << "Class Name: " << m_className << std::endl;
	std::cout << "Classroom: " << m_classroom << std::endl;
}