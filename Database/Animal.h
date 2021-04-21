#pragma once
#include <String>
#include <iostream>

class Animal
{
public:
	enum class eType
	{
		Bird = 1,
		Mammal
	};

public:
	std::string getName() { return m_name; }
	virtual eType getType() = 0;

	virtual void Read(std::ostream& ostream, std::istream& istream);
	virtual void Write(std::ostream& ostream);
protected:
	std::string m_name;
	int m_lifespan = 0;

	void Animal::Read(std::ostream& ostream, std::istream istrem);
};

