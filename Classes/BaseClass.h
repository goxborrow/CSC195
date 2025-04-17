#pragma once
#include <string>

class BaseClassName {
public:
	enum class eType
	{
		CAT,
		DOG,
		BIRD
	}; // example animal based classes
	std::string name;
	unsigned int price;
public:
	virtual void Read(std::ostream& ostream, std::istream& istream);
	virtual void Write(std::ostream& ostream);
	std::string GetName();
	eType GetType() = 0;



};