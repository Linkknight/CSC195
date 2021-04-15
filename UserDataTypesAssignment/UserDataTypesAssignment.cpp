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
		Employee employee;
		employee.Read();
	}

	for (int i = 0; i < numEmployees; i++)
	{
		Employee worker;
		worker = employee[i];
		worker.Write();
	}
}
