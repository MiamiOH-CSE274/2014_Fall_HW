#include "helloWorld.h"

helloWorld::helloWorld(){
	whichLanguage = 1;
}

std::string helloWorld::doHelloWorld() {
	switch(whichLanguage) {
	case 0:
		return "Hello World! ";
	case 1:
	default:
		return "Bonjour!";
	}
}
