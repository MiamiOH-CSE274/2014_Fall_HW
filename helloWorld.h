//Angle brackets mean look in the libraries 
#include <string>


class helloWorld {

public:
	helloWorld(); //Constructor

	//Returns the string "Hello World! "
	std::string doHelloWorld();

protected:

private:
	//Everything is private by default
	//0 is English, 1 is French
	int whichLanguage;
};