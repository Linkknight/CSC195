#include <iostream>
using namespace std;

const float TAX = 0.1f;
float totalHours = 0.0;
string name;
string initial;
int age;
bool isAdult;
int zipCode;
float wage;
int daysWorked;
float hoursWorkedPerDay[7];


int main() {
	std::cout << "Enter your first name please: ";
	cin >> name;
	
	std::cout << "Please enter your initials: ";
	cin >> initial;

	std::cout << "How old are you: ";
	cin >> age;

	if (age >= 18) {
		isAdult = true;
		cout << "You are over 21, you are an Adult.";
	}
	else isAdult = false;
	std::cout << "You are not over 21. How did you get here?";

	std::cout << "What is your Zip Code: ";
	cin >> zipCode;

	std::cout << "How many days do you work a week: ";
	cin >> daysWorked;

	for (int i = 0; i < daysWorked; i++) {
		cout << "Enter your hours worked for the day" << i+1 << " : ";
		cin >> hoursWorkedPerDay[i];
		totalHours += hoursWorkedPerDay[i];
	}

	std::cout << "What is your wage: ";
	cin >> wage;

	int grossIncome = totalHours * (float)wage;
	int netIncome = grossIncome - TAX;

	cout << grossIncome;
	cout << netIncome;
}