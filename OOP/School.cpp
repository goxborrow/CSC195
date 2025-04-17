#include "School.h"
#include "Student.h"
#include "Teacher.h"


School::~School()
{
	for (auto human : m_humans) {
		delete human; // Free the memory allocated for each human
	}
	m_humans.clear(); // Clear the vector
}

void School::Add(Human::Type type) {
	Human* human = nullptr; // Initialize pointer to null
	switch (type)
	{
	case Human::Type::STUDENT: {
		human = new Student();

		break;
	}
	case Human::Type::TEACHER: {
		human = new Teacher();

		break;
	}
	default:
		std::cout << "Invalid type" << std::endl;
		break;
	}
	m_humans.push_back(human);
	human->Read(); // Read data for the new human


}

void School::DisplayAll() {
	for (auto human : m_humans) {
		human->Write();
	}
}