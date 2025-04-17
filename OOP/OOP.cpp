// OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include <vector>
#include "School.h"

int main() {
	School school;
	bool exit = false;

	while (!exit) {
		//system("cls");
		std::cout << "1. Add Human\n";
		std::cout << "2. Diplay All Humans\n";
		std::cout << "3. Display Human of Type\n";
		std::cout << "4. Quit\n";
		unsigned short choice;
		std::cin >> choice;
		switch (choice) {
		case 1: {
			std::cout << "Enter type (1 for Student, 2 for Teacher): ";
			unsigned short type;
			std::cin >> type;
			school.Add(static_cast<Human::Type>(type - 1));

			break;
		}
		case 2: {
			school.DisplayAll();
			break;
		}
		case 3: {


		}
		case 4: {
			exit = true;
			break;
		}
		default:
			std::cout << "Invalid choice" << std::endl;
			break;
		}
	}


	school.Add(Human::Type::STUDENT);
	school.DisplayAll();
}

