//defining the class

#include "helloworld.h"

//when writing cpp definition, don't use the words "class" or "private" etc anywhere in this file

helloworld::helloworld() {
	whichLanguage = 1;
}

std::string helloworld::doHelloWorld() { //doHelloWorld function that belongs to helloworld class
	switch(whichLanguage) {
	case 0:
		return "Hello World!";
	case 1:
		return "Ello-hay Orld-way!";
	default:
		return "Ello-hay Orld-way!";
	}
}
