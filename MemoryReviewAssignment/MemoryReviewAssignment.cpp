#include <iostream>
using namespace std;

struct Person
{
	char name[32];
	int id;
};

int Square(int& number) {

	int squaredNum = number * number;
	return squaredNum;
}

int Double(int number) {
	int doubleNum = number * 2;
	return doubleNum;
}

int main()
{
	// ** REFERENCE **
	// 
	// declare an int variable and set the value to some number (less than 10)
	int x = 5;

	// declare a int reference and set it to the int variable above
	int& X = x;

	// output the int variable
	cout << x << endl;;

	// set the int reference to some number
	X = 10;

	// output the int variable
	cout << x << endl;

	// what happened to the int variable when the reference was changed? (insert answer)
	// The original number is replaced by the number stated in the Reference.
	
	// output the address of the int variable
	cout << "Address of x variable: " << &x << endl;
	// output the address of the int reference
	cout << "Address of X variable: " << &X << endl;
	// are the addresses the same or different? (insert answer)
	// They are the exact same address.

	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
	// Done
	// 
	// in the function, multiply the int parameter by itself and assign it back to the parameter (i = i * i)
	// Done
	// 
	// call the Square function with the int variable created in the REFERENCE section
	// output the int variable to the console
	cout << Square(x) << endl;

	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""

	// ** POINTER VARIABLE **
	// 
	// declare an int pointer, set it to nullptr (it points to nothing)
	int* ptr = nullptr;
	// set the int pointer to the address of the int variable created in the REFERENCE section
	ptr = &X;
	int doubleNum = Double(*ptr);
	// output the value of the pointer
	cout << ptr << endl;
	// what is this address that the pointer is pointing to? (insert answer)
	// 	   00DAFE64
	// output the value of the object the pointer is pointing to (dereference the pointer)

	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter (i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLE section

	// output the dereference pointer
	cout << doubleNum << endl;
	cout << x << endl;
	// output the int variable created in the REFERENCE section
	// did the int variable's value change when using the pointer?
	//Yes it did.

	// ** ALLOCATION/DEALLOCATION **
	//
	// create an int pointer that points at an int allocated on the heap, set the allocated int value to some number
	int* var = new int(6);
	// output the pointer value, this should be the address of the int allocated on the heap
	cout << var << endl;
	// output the dereference pointer
	cout << &var << endl;
	// deallocate the int pointer to free up the memory
	delete var;
	// create an int pointer that points at an array of ints allocated on the heap, the array size should be 4-6
	int* ptr1 = new int[5];
	// use a for loop and set each int in the array to a random number (use => rand() % 10 to get a random number
	for (int i = 0; i < 5; i++) {
		ptr1[i] = rand() % 10;
		cout << "Variable Details: " << endl;
		cout << &ptr1[i] << endl;
		cout << ptr1[i] << endl;
	}
	delete[] ptr1;
	// use a for loop and output each of the ints in the array
	// use a for loop and output the address of each of the ints in the array
	// deallocate the int pointer to free up the memory block (remember it's an array)

	// ** STRUCTURE **
	//
	// create a Person pointer that points at an array of Persons allocated on the heap, the array size should be 2
	Person* people = new Person[2];
	string name;
	int id;
	// read in a name from the console and set it to the person name, do this for the id also, do this for both Persons
	for (int i = 0; i < 2; i++) {
		cout << "Enter Name: " << endl;
		cin >> name;
		cout << "Enter ID Number: " << endl;
		cin >> id;
		cout << "Welcome " << name << endl << "ID Number: " << id << endl;
	}
	delete[] people;
	// use a for loop and output the name and id of each person in the array 
	// deallocate the person pointer to free up the memory block (remember it's an array)
}