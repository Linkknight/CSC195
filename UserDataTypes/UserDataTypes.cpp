// UserDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Sandwich.h";

#define SHOP_NAME "Subway\n";

using currency = double;
typedef unsigned char byte;

int main() 
{
	Sandwich sandwich;
	sandwich.Read();
	sandwich.Write();

	f1();
	std::cout << SHOP_NAME;

#ifdef _DEBUG
	std::cout << "DEBUG\n";
#endif _DEBUG

#ifdef XBOX
	std::cout << "XBOX";
#endif XBOX

	currency balance;

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