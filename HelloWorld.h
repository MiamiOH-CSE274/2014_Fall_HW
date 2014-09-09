// angle brackets mean look in the libraries
#include <string> 


class helloWorld {
public:
	helloWorld(); //constructor


	//returns the string "Hello World"
	std::string doHelloWorld();

protected:
	// protected ones here
private:
	// private vars and methods declared here\

	//0 is English, 1 is Pig Latin
	int whichLanguage;
};