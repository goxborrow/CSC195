#pragma once
#include <iostream>
#include "Human.h"	

class Teacher : public Human {
public:
	Teacher() {
		std::cout << "Teacher Constructor called" << std::endl;
	}
	Teacher(std::string name, age_t age, std::string className, room_t classroom) :
		Human{ name, age },
		m_className{ className },
		m_classroom{ classroom }
	{
		std::cout << "Teacher Constructor called" << std::endl;

	}

	void Read() override;
	void Write() override;



	void SetClassName(std::string className) { m_className = className;	}
	std::string GetClassName() { return m_className; }

	void SetClassroom(room_t classroom) {
		if (classroom < 300 || classroom > 400) {
			std::cout << "Invalid classroom number" << std::endl;
			return;
		}
		m_classroom = classroom;
	}
	room_t GetClassroom() { return m_classroom; }

	Type GetType() override { return Type::TEACHER; }

	void Work() override {
		std::cout << "Teacher work..." << std::endl;
	}


private:
	std::string m_className;
	room_t m_classroom;
};

