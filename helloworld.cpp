#include "helloworld.h"

helloworld::helloworld() {
	whichLanguage = 1;
}


std::string helloworld::doHelloWorld() {
	switch(whichLanguage){
	case 0:
		return "Hello World!";
	case 1:
	default:
		return "Ello-hay orld-way!";
	}
}

