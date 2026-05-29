#pragma once
#include <iostream>
#include <string>
#include "Employer.h"

class Worker :
    public Employer
{
private:
    int wage;
	int hours;

public:
    Worker(std::string_view name, std::string_view surname, int wage, int hours)
        : Employer{name, surname},
		wage{ wage },
		hours{ hours }
	{
	}

	void Print() const override
	{
		std::cout << "Worker: " << name << " " << surname << ", salary: " << wage * hours << std::endl;
	}
};