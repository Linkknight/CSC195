#include "Array.h"
#include <iostream>

void DisplayArray(const n::array<std::string, 4>& a)
{
	for (size_t i = 0; i < a.size(); i++)
	{
		std::cout << a[i] << "";
	}
	std::cout << std::endl;
}

int main()
{
	std::cout << "Array\n";
	n::array<std::string, 4>words{ "Hello", "World", "Neumont", "College" };
	words[0] = "Welcome";
	DisplayArray(words);

	std::cout << "Copy\n";
	n::array<std::string, 4> copy{ words };
	copy[1] = "to";
	DisplayArray(copy);

	std::cout << "Swap\n";
	words.swap(copy);
	DisplayArray(words);
	DisplayArray(copy);

	std::cout << "Fill\n";
	copy.fill("now!");
	DisplayArray(copy);

	std::cout << "Front: " << words.front() << std::endl;
	std::cout << "Back: " << words.back() << std::endl;
	std::cout << "Size: " << words.size() << std::endl;
	std::cout << "Data: " << words.data() << std::endl;
}