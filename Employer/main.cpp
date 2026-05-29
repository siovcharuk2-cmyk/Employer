#include <iostream>
#include "Employer.h"
#include "Manager.h"
#include "Worker.h"
#include "President.h"

int main()
{
	Employer* employers[] =
	{
		new Worker("John", "Doe", 15, 160),
		new Manager("Jane", "Smith", 3000, 500),
		new President("Alice", "Johnson", 5000, 1000)
	};
	
	for (const auto& employer : employers)
	{
		employer->Print();
		delete employer;
	}
}