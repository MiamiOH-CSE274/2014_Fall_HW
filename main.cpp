/**
* Hello World
**/

#include <iostream>
#include "foo.h" //Quotes around file name MEANS look in same folder as this cpp file
// Our error occurred when the file was not in the same folder as this cpp file.
#include "helloworld.h"


int main(void){
	/*
	// Whenever you declare an array, whether static or dynamic, the type
	// is always a pointer
	// Declare and allocate
	int myInts_size = 2;
	int myInts[2];
	
	int myDoubles_size = 3;
	double* myDoubles = new double[3];
	
	// Initialize 
	for(int i = 0; i < 2; i++){
		myInts[i] = 2*i;
	}
	for(int i = 0; i < 3; i++){
		myDoubles[i] = (i + 1)/ 3.0;
	}

	// Print them out
	for(int i = 0; i < 2; i++){
		std::cout << myInts[i] << ", " << &myInts[i] << std::endl;
	}
	for(int i = 0; i < 3; i++){
		std::cout << myDoubles[i] << ", " << &myDoubles[i] << std::endl;
	}

	std::cout << myInts[-1] << ", " << &myInts[-1] << std::endl;
	std::cout << myInts[5] << ", " << &myInts[5] << std::endl;

	int* p = &myInts[0];
	for(int i = 0; i < myInts_size; i++){
		// Compiler knows you mean go forward by one integer,
		// so it goes forward in memory by 4 => pointer arithmetic
		// can also replace "p" with "myInts"
		std::cout << *(p + i) << ", " << (p + i) << std::endl;
	}

	char* myString = "Hello, World!";
	int i = 0;
	while(myString[i] != '\0'){
		std::cout << myString[i] << ", " << (int)myString[i] << std::endl;
		i++;
	}

	//std::cout << main << std::endl;

	// Can reuse i here because this i is local to the for loop
	// You create a new local scope each time you have {}
	// Based on which block they are in.
	// If you print i in loop, it will first look in the current block,
	// if it does not find it there, it will look up to the next block, etc.
	for(int i = 0; i < 10; i++){
		std::cout << *((int*)myString+i) << std::endl;
	}
	*/

	int x = 15; // 0000000000000001111 in binary
	std::cout << x % 10 << std::endl;

	// Shift operators (right shift followed by left shift)
	// Very efficient for multiplying and dividing by two
	std::cout << (x>>1) << std::endl;
	std::cout << (x<<1) << std::endl;

	int z = 1;
	int y = x & z; // 1111 & 0001 // bitwise and
	int q = x | z; // bitwise or
	int r = ~x; // bitwise not

	// 0 means "everything is normal"
	// >0 means "okay, but I want to tell you something..."
	// <0 means "something bad I need to tell you about..."
	return 0;
}

