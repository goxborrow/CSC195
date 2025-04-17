#pragma once
#include <iostream>
#include "Human.h"


class Student : public Human {
public:
	Student() {
		std::cout << "Student Constructor called" << std::endl;

	}
	Student(std::string name, age_t age, float gpa) :
	Human{name, age},
	m_gpa{ gpa } // Member initializer list
	{
		m_name = name;
		m_age = age;
		m_gpa = gpa;

		std::cout << "Student Constructor called" << std::endl;
	}

	void Read() override;
	void Write() override;


	void setGPA(float gpa) {
		if (gpa >= 0.0f && gpa <= 4.0f) {
			m_gpa = gpa;
		}
		else {
			std::cout << "Invalid GPA" << std::endl;
		}
	}
	float GetGPA() { return m_gpa; }

	Type GetType() override { return Type::STUDENT; }
	void Work() override {
		std::cout << "Student work..." << std::endl;
	}
	
private:
	float m_gpa = 0.0f;

	
};
