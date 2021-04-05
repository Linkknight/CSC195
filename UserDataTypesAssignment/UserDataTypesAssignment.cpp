#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
	Employee employee[5];

	unsigned short numEmployees;
	std::cout << "What is the number of Employees you have: " << std::endl;
	std::cin >> numEmployees;

	for (int i = 0; i < numEmployees; i++)
	{
		//call Read for each employee in the array
		std::cout << "Please enter the information for this Employee: " << std::endl;
		cin >> numEmployees[i];
	}

	for (int i = 0; i < numEmployees; i++)
	{
		//call Write for each employee
	}
}
