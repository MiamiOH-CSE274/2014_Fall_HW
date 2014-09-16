#include "HelloWorld.h"

helloWorld::helloWorld(){
	whichLanguage = 0;
}


std::string helloWorld::doHelloWorld(){
	switch(whichLanguage){
		case 0:
			return "Hello World!";
		case 1:
		default:
			return "Ello-hay orld-way!";
	}
}