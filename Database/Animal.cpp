#include "Animal.h"
#include <iostream>

void Animal::Read(std::ostream& ostream, std::istream& istream)
{
	ostream << "Enter Name: ";
	istream >> m_name;

	ostream << "Enter Lifespan: ";
	istream >> m_lifespan;
}

void Animal::Write(std::ostream& ostream)
{
	ostream << "Name: " << m_name << std::endl << "Lifespan: " << m_lifespan << std::endl;
}

