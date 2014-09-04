
#include <iostream>
#include "helloworld.h"

int main(void) {
	helloworld h; //declare instance of the class, don't have to use "new", just same as any other type
	std::cout << h.doHelloWorld() << std::endl; //call this function of that class with "."
}