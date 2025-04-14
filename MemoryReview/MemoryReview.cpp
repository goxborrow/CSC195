#include <iostream>
using namespace std;
struct Person
{
	char name[32];
	int id;
};
	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter(i = i * i)

int Square(int& a) {
	a = a * a;
	return a;
}

	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter(i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!

int Double(int* a) {
	*a = *a * 2;
	return *a;
}
int main()
{
	// ** REFERENCE **
	//
	// declare an int variable and set the value to some number (less than 10)
	int i = 5;
	// declare a int reference and set it to the int variable above
	int& r = i;
	// output the int variable
	cout << "i: " << i << endl;
	// set the int reference to some number
	r = 10;
	// output the int variable
	cout << "i: " << i << endl;
	// what happened to the int variable when the reference was changed? (insert answer)
	// it was updated alongside the reference.
	 
	// output the address of the int variable
	cout << "i: " << &i << endl;
	// output the address of the int reference
	cout << "r: " << &r << endl;
	// are the addresses the same or different? (insert answer)
	// they're the same
	
	// call the Square function with the int variable created in the REFERENCE section
	Square(i);
	// output the int variable to the console
	cout << "i: " << i << endl;
	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	Square(r);
	cout << "r: " << r << endl;
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""

	// ** POINTER VARIABLE **
	//
	// declare an int pointer, set it to nullptr (it points to nothing)
	int *pointer = nullptr;
	// set the int pointer to the address of the int variable created in the REFERENCE section
	pointer = &i;
	// output the value of the pointer
	cout << "pointer: " << pointer << endl;
	// what is this address that the pointer is pointing to? (insert answer)
	// 0000009CD7EFFA64 (the address of i)
	// output the value of the object the pointer is pointing to (dereference the pointer)
	cout << "pointer: " << *pointer << endl;
	// ** POINTER PARAMETER **
	//
	// call the Double function with the pointer created in the POINTER VARIABLE section
	Double(pointer);
	// output the dereference pointer
	cout << "pointer: " << *pointer << endl;
	// output the int variable created in the REFERENCE section
	cout << "i: " << i << endl;
	// did the int variable's value change when using the pointer?
	// yes, it did.
}