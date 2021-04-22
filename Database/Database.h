#pragma once
#include <vector>
#include "Animal.h"

class Database
{
public:
	~Database();

	void Create(Animal::Type type);
	void DisplayAll();
	void Display(std::string name);
	void Display(Animal::Type type);

private:
	std::vector<Animal*> m_animals;
};

