#include <iostream>

using namespace std;
float TAX = 0.1f;
float totalHours = 0.0;


int main() {
	string name;
	string initial;
	int age;
	bool isAdult;
	int zipCode;
	float wage;
	float grossIncome = totalHours * wage;
	float netIncome = grossIncome - TAX;
	int daysWorked;
	float hoursWorkedPerDay[7];

	cout << "Enter your first name please: ";
	cin >> name;
	
	cout << "Please enter your initials: ";
	cin >> initial;

	cout << "How old are you: ";
	cin >> age;

	if (age >= 18) {
		isAdult = true;
		cout << "You are over 21, you are an Adult.";
	}
	else isAdult = false;
	cout << "You are not over 21. How did you get here?";

	cout << "What is your Zip Code: ";
	cin >> zipCode;

	cout << "What is your wage: ";
	cin >> wage;

	cout << "How many days do you work: ";
	cin >> daysWorked;

	/*for (int i = 0; i < daysWorked; i++) {
		cout << "Enter your hours worked for the day: ";
		cin >> hoursWorkedPerDay;
	}*/

	cout << "Name: " + name;
	cout << "Initials: " + initial;
	cout << "Age: " + age;
	cout << "Zipcode: " + zipCode;
	cout << "Wage: " + wage;
	cout << "Days Worked: " + daysWorked;
	cout << "Gross Income: " + grossIncome;
	cout << "Net Income: " + netIncome;

}