#pragma once

void f1();

class Sandwich
{
public:
	void Read();
	void Write();

private:
	char name[32];
	float price;
	bool isHot;

	static const float TAX;
};