#pragma once
#include <vector>
#include "Animal.h"

class Database
{
public:
	~Database();

	void Create(Animal::eType type);
	void DisplayAll();
	void Display(std::string name);
	void Display(Animal::eType type);

private:
	std::vector<Animal*> m_animals;
};

