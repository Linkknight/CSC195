#pragma once
#include "Animal.h"
class Bird :public Animal
{
public:
	Type getType() { return Type::Bird; }

	void Read(std::ostream& ostream, std::istream& istream) override;
	void Write(std::ostream& ostream)override;

protected:
	int m_numEggs = 0;
};

