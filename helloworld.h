//Angle brackets mean look in the libraries
#include <string>

class helloworld{
public:
	helloworld(); //Constructor

	//returns the string "Hello world"
	std::string doHelloWorld();

protected:
	//protected ones here

private:
	//private vars and methods declared here

	//0 is English, 1 is Pig Lation
	int whichLanguage;
};