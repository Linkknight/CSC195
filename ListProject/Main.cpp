#include "List.h";
#include <iostream>


int main()
{
	nc::list<int> lst;

	lst.push_front(1);
	lst.push_front(2);
	lst.push_front(3);

	lst.write(std::cout);
}