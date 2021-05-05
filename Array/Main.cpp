#include "Array.h"
#include <iostream>

void DisplayArray(const n::array& a)
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
	n::array numbers{ 1,2,3,4,5,6,7,8,9,10 };
	numbers[0] = 25;
	DisplayArray(numbers);
	std::cout << "Copy\n";
	n::array copy{ numbers };
	copy[0] = 50;
	copy[4] = 8;
	DisplayArray(copy);

	std::cout << "Swap\n";
	numbers.swap(copy);
	DisplayArray(numbers);
	DisplayArray(copy);

	std::cout << "Fill\n";
	copy.fill(21);
	DisplayArray(copy);

	std::cout << "Front: " << numbers.front() << std::endl;
	std::cout << "Back: " << numbers.back() << std::endl;
	std::cout << "Size: " << numbers.size() << std::endl;
	std::cout << "Data: " << numbers.data() << std::endl;
}