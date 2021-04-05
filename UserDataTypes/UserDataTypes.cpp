// UserDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() 
{
	float balance;

	{
		enum class Difficulty
		{
			Easy,
			Medium,
			Hard
		};

		Difficulty difficulty = Difficulty::Medium;
		std::cout << (int)difficulty << std::endl;
	}
}