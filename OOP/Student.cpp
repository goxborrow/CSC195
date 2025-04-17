#include "Student.h"
#include <iostream>
#include "Console.h" // Assuming this is where GetInt() is defined

void Student::Read(){
	std::cout << "STUDENT\n";
	Human::Read(); // Call the base class Read function
	std::cout << "GPA: ";
	m_gpa = GetData<float>(); // Assuming GetFloat() is a function that safely reads a float from cin
}

void Student::Write() {
	std::cout << "STUDENT\n";
	Human::Write(); // Call the base class Write function
	std::cout << m_gpa << std::endl;
}