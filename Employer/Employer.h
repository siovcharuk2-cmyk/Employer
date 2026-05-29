#pragma once
#include <string>

class Employer
{
protected:
	std::string name;
	std::string surname;

public:
	Employer(std::string_view name, std::string_view surname)
		: name{ name }, surname{ surname }
	{
	}

	virtual void Print() const = 0;
};

