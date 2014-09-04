//just declaring class, not defining

#include <string> //<> mean look in the libraries

class helloworld{
public:
	//everything in this chunk is public
	helloworld(); //constructor

	//returns the string "Hello World"
	std::string doHelloWorld();


protected:
	//protected ones here
private:
	// 0 is English, 1 is Pig Latin
	int whichLanguage; //instance variable
	//private vars and methods here, but by default everything is private

}; //every class declaration must end in ;