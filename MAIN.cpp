/**
 * Hello world, cpp class 
 **/

#include <iostream>
#include "foo.h" //Quotes around file name means look in the same folder as this copy of file.
#include "helloWorld.h"
// Declaration of foo moved to foo.h header file!!


int main(void){
	
	std::string myString = "This is a test string!";
	std::cout << myString.size() << std::endl;
	std::cout << myString[1] << std::endl;
	std::cout << myString.substr(1,3) << std::endl;

	
	//helloWorld h;
	//std::cout << h.doHelloWorld() << std::endl;

	//std::cout << "Hello World! " << foo(5,7) << std::endl;
	
	/**
	//cout is like System.out
	int a = 5 + 6;
	int b;
	int c;
	std::cout << "Hello World!" << std::endl; //Stream output operator: <<
	// (OUTPUT STREAM << EXPRESSION) --> returned value is another OUTPUT STREAM
	std::cout << 'a'<< std::endl;
	std::cout << 1.015 << std::endl;
	std::cout << "This is true: " << true << std::endl;
	std::cout << "This is false: " << false << std::endl;
	std::cout << a << std::endl;

	// INPUT STREAM >> VARIABLE
	std::cout << "Enter two numbers: " << std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cout << "What is the sum of " << a << " and " << b << "?" << std::endl;
	std::cin >> c;
	**/
	}

// Definition of foo mooved to foo.cpp!!
