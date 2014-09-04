//
//Hello world

#include <iostream>
#include "foo.h"  //Quotes around file name MEANS look in same folder as this cpp file
#include "helloworld.h"

int main(void) {
	helloworld h;
	std::cout << h.doHelloWorld() << std::endl << foo(5,5) << std::endl;
}
