#pragma once

class Employee
{
public:
	void Read();
	void Write();

private:
	char Name[32];
	int Age;
	int zipCode;
	float wage;
	int daysWorked;
	float hoursWorkedPerWeek[7];
	static const float TAX;
};