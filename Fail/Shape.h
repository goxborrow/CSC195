#pragma once
class Shape {
public:
	Shape() {
		std::cout << "Shape Constructor called" << std::endl;
	}
	~Shape() {
		std::cout << "Shape Destructor called" << std::endl;
	}
	virtual float Area() = 0;
};
