#pragma once
#include <string>
#include <iostream>
#include "Employer.h"

class Manager :
    public Employer
{
private:
	int salary;
	int bonus;

public:
	Manager(std::string_view name, std::string_view surname, int salary, int bonus)
		: Employer{ name, surname },
		salary{ salary },
		bonus{ bonus }
	{ }

	void Print() const override
	{
		std::cout << "Manager: " << name << " " << surname << ", salary: " << salary + bonus << std::endl;
	}
};

