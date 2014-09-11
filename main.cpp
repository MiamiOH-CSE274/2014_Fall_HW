/**
* Hello World
**/

#include <iostream>
#include "foo.h" //Quotes around file name MEANS look in same folder as this cpp file
// Our error occurred when the file was not in the same folder as this cpp file.
#include "helloworld.h"

int foo(int x){
	int y = 0;
	if (x == 0){
		return 0;
	} else {
		return 1 + foo(x - 1);
	}
}

// arrays can be treated like arrays in Java, but they are not the same
// array pointer
int* foo2(int x ){
	int* myArray = new int[x];
	for(int i = 0; i < x; i++){
		myArray[i] = i*i;
	}
}

int main(void){
	
	//std::cout << "Hello World!" << std::endl << foo(5, 7) << std::endl;

	//Declared the instance of the class (called variable h) - do not have to use "new"
	//as in Java - you can use the same syntax as "int a;"
	//helloworld h;
				//take object h and call one of its methods (like myObject.doSomething();)
	//std::cout << h.doHelloWorld() <<std::endl;
	
	// a and b are local variables - they appear when function begins and die when function ends
	// local vars = STATICALLY ALLOCATED
	int a = 5;
	int b = 10;

	// DYNAMICALLY ALLOCATED variables - still want them to be around after function ends
	// variables outlive the function in which it was created - use "new"
	// new returns the ADDRESS of the thing it made.
	// have not yet initialized - it exists in memory, but has no value
	int* a2 = new int;
	float* b2 = new float;

	int* addr_of_a = &a;
	int** addr_of_a2 = &a2; // address of the address of a2 (the address of int*)

	// * here is the dereference operator - "got to that address and get me the value of that variable"
	std::cout << *a2 << std::endl;

	std::cout << new int << std::endl;
	std::cout << new float << std::endl;


	std::cout << foo(a) << std::endl;
	std:: cout << a << std::endl;

	// & is the "address of" operator
	std::cout << &a << std::endl;
	std::cout << &b << std::endl;
	// sizeof() is an OPERATOR, not a function
	std::cout << sizeof(float) << std::endl;
	
}

