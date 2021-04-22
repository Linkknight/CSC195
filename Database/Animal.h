#pragma once
#include <String>
#include <iostream>

class Animal
{
protected:
	std::string m_name;
	int m_lifespan = 0;

public:
	enum class Type
	{
		Bird = 1,
		Mammal
	};

	std::string getName() { return m_name; }
	int getLifeSpan() { return m_lifespan; }
	virtual Type getType() = 0;

	virtual void Read(std::ostream& ostream, std::istream& istream);
	virtual void Write(std::ostream& ostream);
};

