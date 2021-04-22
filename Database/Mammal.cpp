#include "Mammal.h"
#include <iostream>
using namespace std;


void Mammal::Read(ostream& ostream, istream& istream)
{
	Animal::Read(ostream, istream);
	ostream << "Number of eyes: ";
	istream >> eyeCount;
}

void Mammal::Write(ostream& ostream)
{
	Animal::Write(ostream);
	ostream << "Number of eyes: " << eyeCount << std::endl;
}
