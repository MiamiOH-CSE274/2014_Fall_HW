
#include <iostream>
#include "helloworld.h"

int* foo2(int y) {
	int* myArray = new int[y]; //returns address of start of array
	for(int i=0; i<y; i++) {
		myArray[i] = i*i;
	}
	return myArray;
}
int foo(int x) {
	//x is local variable for method foo
	//each activation of foo that is called within foo has its own copy of x
	//these are all stored in a STACK
	if(x==0) {
		return 0;
	} else {
		return 1 + foo(x-1);
	}
}

int main(void) {
	helloworld h; //declare instance of the class, don't have to use "new", just same as any other type
	std::cout << h.doHelloWorld() << std::endl; //call this function of that class with "."

	//local, aka statically allocated variables (can be classes/objects)(not using new). Only live while the function is executing, then disappear
	int a = 5;
	int b = 10;

	//dynamically allocated variables (using new)(can be basic var), variables that outlive the function it is created in
	//int a = new int; //new returns the ADDRESS of the thing it made
	int* a2 = new int; //int* is a pointer that holds the address of an int
	float* b2 = new float;

	int* addr_of_a = &a; //stores the address of an a
	int** addr_of_a2 = &a2; //stores the address of the address of var

	std::cout << new int << std::endl;

	std::cout << *a2 <<std::endl; //*var gets the CONTENTS of the variable


	std::cout << a << std::endl;
	std::cout << &a << std::endl; //address of operator (a)
	std::cout << &b << std::endl; //address of operator (b) 

	//address is number that tells you where your variable starts (in HEXadecimal)
	//you can't know where the compiler is going to put them, address will change

	std::cout << sizeof(a) << std::endl; //NOT a function, it's an operator built in
	std::cout << sizeof(float) << std::endl;

	std::cout << foo(a) << std::endl;
}