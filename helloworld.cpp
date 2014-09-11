#include "helloworld.h"
//do not use public, private, protected, or class anywhere

//Define constructor over here
helloworld::helloworld(){
	whichLanguage = 0;
}

//Define the doHelloWorld function
			//look for do HelloWorld function in the helloworld class (use scope operator ::)
std::string helloworld::doHelloWorld(){
	switch(whichLanguage){
	case 0: return "Hello World!";
	case 1: 
	default: return "Ello-hay orld-way!";
	}	
	//return "Hello World!";
}