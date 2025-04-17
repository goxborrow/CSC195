#include "Human.h"
#include "Console.h" // Assuming this is where GetInt() is defined

int Human::m_count = 0; // Initialize static member variable outside the class
const float Human::m_tax = 0.0825f;

void func() {
	std::cout << "Funky\n";
}

void Human::Read()
{
	std::cout << "Name: ";
	m_name = GetData<std::string>();
	std::cout << "Age: ";
	m_age = GetData<age_t>();
	//std::cin >> m_age; // 20
}

void Human::Write() {
	std::cout << "Name: " << m_name << std::endl;
	std::cout << "Age: " << m_age << std::endl;

}

void Human::SetAge(age_t age) {
	if (age > 0 && age < 120) {
		m_age = age;
	}
	else {
		std::cout << "Invalid age" << std::endl;
	}
}