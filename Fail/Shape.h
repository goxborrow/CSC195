#pragma once
class Shape {
public:
	Shape() {
		std::cout << "Shape Constructor called" << std::endl;
	}
	~Shape() {

	}
	virtual float Area() = 0;
};
