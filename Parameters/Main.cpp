#include <iostream>
#include <string>
#include <time.h>
using namespace std;


void func0(int i)
{

}

void func1(int& i)
{
	i = 10;
}

void func2(const string& text)
{
	//
}

void func3(int* i)
{
	if(i) // 0 == false / everything else == true 
		{
			cout << i << endl;
		}
}

int Random(int max)
{
	int r = rand() % max + 1;

	return r;

}

class A
{
public:
	A() : i{0} {  }
	A(int v) : i{ v } { i = v; }

	void Set(int v) { i = v; }
	int Get() const { return i; }
	int& GetRef() { return i; }
	const int& GetConstRef() const { return i; }
	int* GetPtr() { return &i; }

	int& operator [] (int index) { return m_elements[index]; }
	const int& operator [] (int index) const { return m_elements[index]; }
public:
	int i;
	int m_elements[10];
};

void func4(const A& a)
{
	a.GetConstRef();
	cout << a[2] << endl;
}




int main()
{

	A a;
	a.Set(12);
	
	a[3] = 12;

	//return values
	srand(static_cast<unsigned int>(time(NULL)));
	cout << Random(10) << endl;

	//parameters
	int i = 0;
	func1(i);
	cout << i << endl;

	string text = "Hello!";

	time_t start = time(NULL);
	for (int i = 0; i < 1000000; i++)
	{
		func2(text);
	}
	time_t end = time(NULL);
	cout << end - start << endl;

	int* P = &i;
	func3(P);
}