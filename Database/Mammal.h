#pragma once
#include "Animal.h"
using namespace std;

class Mammal : public Animal
{
protected: 
	int eyeCount = 2;

public:
	Type getType() { return Type::Mammal; }

	void Read(ostream& ostream, istream& istream) override;
	void Write(ostream& ostream) override;
};

