#include "Employee.h"
#include <iostream>
const float Employee::TAX = 0.01f;
float totalHours = 0;
int grossIncome, netIncome;

void Employee::Read()
{
	std::cout << "Please tell me your name: " << std::endl;
	std::cin >> Employee::Name;

	std::cout << "Please tell me your age: " << std::endl;
	std::cin >> Employee::Age;

	std::cout << "Please tell me your Zipcode: " << std::endl;
	std::cin >> Employee::zipCode;

	std::cout << "Please tell me your hourly wage: " << std::endl;
	std::cin >> Employee::wage;

	std::cout << "Please tell me how many days you work during the week: " << std::endl;
	std::cin >> Employee::daysWorked;

	for (int i = 0; i < daysWorked; i++)
	{
		std::cout << "Please enter the hours you worked for the day: " << i + 1 << std::endl;
		std::cin >> hoursWorkedPerWeek[i];
		totalHours += hoursWorkedPerWeek[i];
	}

	grossIncome = totalHours * (float)wage;
	netIncome = grossIncome - TAX;

}

void Employee::Write()
{
	std::cout << Name << std::endl;
	std::cout << Age << std::endl;
	std::cout << zipCode << std::endl;
	std::cout << wage << std::endl;
	std::cout << daysWorked << std::endl;
	std::cout << totalHours << std::endl;
	std::cout << grossIncome << std::endl;
	std::cout << netIncome << std::endl;
}