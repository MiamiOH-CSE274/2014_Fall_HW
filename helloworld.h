//Declaring the class

//Need to import string - angle brackets means to look in the libraries
//The standard library does not have file extensions (no .h)
#include <string>

class helloworld{
//Everything after this is public (no need to declare every function as public like in Java)
//Declare things in sections; by default everything is private
public:
	//Constructor - no return type, no parameters
	helloworld();
	//Call ont the method that returns the string "Hello World" and has no inputs
	std::string doHelloWorld();

protected:
	//protected ones here

private:
	//private ones here

	//0 is English, 1 is Pig Latin
	int whichLanguage;

};//REMEMBER THE SEMICOLON!