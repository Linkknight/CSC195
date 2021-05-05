#include <iostream>
using namespace std;

//int max(int i1, int i2)
//{
//	return (i1 > i2) ? i1 : i2;
//}

template <typename T>
T max(T i1, T i2)
{
	return (i1 > i2) ? i1 : i2;
}

template <typename T>
T min(T i1, T i2)
{
	return (i1 < i2) ? i1 : i2;
}


int main()
{
	cout << max(10, 14) << endl;
	cout << max(3.5f, 6.7f) << endl;
}