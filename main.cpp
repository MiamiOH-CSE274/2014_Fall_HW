/**
* Hello World
**/

#include <iostream>
#include "foo.h" //Quotes around file name MEANS look in same folder as this cpp file
// Our error occurred when the file was not in the same folder as this cpp file.
#include "helloworld.h"

int main(void){
	
	//std::cout << "Hello World!" << std::endl << foo(5, 7) << std::endl;

	//Declared the instance of the class (called variable h) - do not have to use "new"
	//as in Java - you can use the same syntax as "int a;"
	helloworld h;
				//take object h and call one of its methods (like myObject.doSomething();)
	std::cout << h.doHelloWorld() <<std::endl;
}

