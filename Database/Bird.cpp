#include "Bird.h"

void Bird::Read(std::ostream& ostream, std::istream& istream)
{
	Animal::Read(ostream, istream);
	ostream << "Enter number of eggs: " << endl;
	istream >> m_numEggs;
}

void Bird::Write(std::ostream& ostream)
{
	Animal::Write(std::ostream & ostream);
	ostream << "Number of Eggs: " << m_numEggs << std::endl;
}
