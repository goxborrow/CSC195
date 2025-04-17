#pragma once
#include <iostream>

using age_t = unsigned short; 
using room_t = unsigned short; // Using typedef to define age_t and room_t


class Human {
public:
	enum class Type {
		STUDENT,
		TEACHER
	};

public:
	Human() {
		std::cout << "Human Constructor called" << std::endl;
		m_count++;
	}
	Human(std::string name, age_t age) : m_name{ name }, m_age{ age } {
		std::cout << "Human Constructor called" << std::endl;
		m_count++;
	}

	~Human() {
		std::cout << "Destructor called" << std::endl;
		m_count--;
	}

	virtual void Read();
	virtual void Write();

	std::string GetName() { return m_name; }
	age_t GetAge() { return m_age; }

	void SetAge(age_t age);

	virtual Type GetType() = 0;
	virtual void Work() = 0;

	static int GetCount() { return m_count; }

	protected:
		std::string m_name;
		age_t m_age = 0;

		static int m_count; // Static member variable to keep track of the number of instances
		static const float m_tax;

};

	void func();