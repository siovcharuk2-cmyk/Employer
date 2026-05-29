#pragma once
#include <string>
#include <iostream>
#include "Employer.h"

class President :
    public Employer
{
private:
	int salary;
	int bonus;

public:
	President(std::string_view name, std::string_view surname, int salary, int bonus)
		: Employer{ name, surname },
		salary{ salary },
		bonus{ bonus }
	{
	}

	void Print() const override
	{
		std::cout << "President: " << name << " " << surname << ", salary: " << salary + bonus << std::endl;
	}
};