/**
* Hello world cpp class
**/

#include <iostream>
#include "foo.h" //Quotes around file name means look in same folder as this cpp file
#include "HelloWorld.h"


int main(void){
	//cout is like System.out
	int a = 6 + 5;
	int b;
	int c;
	std::cout << "Hello World!" << std::endl; // stream output operater: <<
	// (OUTPUT STREAM << EXPRESSION) --> return value is another OUTPUT STREAM
	std::cout << "The value of a: " << a  << std::endl;
	std::cout << 1.015 << std::endl;
    std::cout << true << std::endl;
	std::cout << a << std::endl;

	// INPUT STREAM >> VARIABLE (or other RVALUE)
	std::cout << "Enter two numbers: " << std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cout << "What is the sum of " << a << " and " << b << "?" << std::endl; 
	std::cin >> c;
	if(c != a+b)
		std::cout << "Incorrect : (" << std::endl;
	else
		std::cout << "Correct! : )" << std::endl;

	std::cout << "Printing the answer to the foo function: " << foo(5) << std::endl;

	helloWorld h;
	std::cout << h.doHelloWorld() << std::endl;
}
