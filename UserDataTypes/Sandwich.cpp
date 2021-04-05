#include "Sandwich.h";
#include <iostream>;

const float Sandwich::TAX = 0.01f;

void Sandwich::Read()
{
	std::cout << "Name: ";
	std::cin >> name;
}

void Sandwich::Write()
{
	std::cout << name << std::endl;
}