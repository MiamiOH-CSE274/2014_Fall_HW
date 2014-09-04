/**
*	basic cpp code
**/

#include <iostream> //hey I need this library (in/output reading library)
//C++ and C, fundamental unit is functions, NOT classes. Can create classes if you want, but ony if you need object oriented
#include "foo.h" //copy/paste everything in foo header file into this file so you have all necessary declarations in this file
//quotes around file name MEANS look in same folder as THIS cpp file (main.cpp)

//declaration: something exists, definition: actual thing DIFFERENT
//int foo(int); declaration of foo method

int main2(void) { //returntype nameoffunction (paramlist), body in {
	std::cout << "Hello World!" << std::endl << foo(5,6) << std::endl;//this will not be built, have to DECLARE things before you use it. So main will often be last
	return 6;
			/*int a = 25 + 3;
			int b;
			int c;
			//cout = system.out = instance of a class, output stream
			//:: scope resolution operator, hint of where to look for an object (standard library for cout)
			//* + - = operators, c++ lets you write your own operators
			//<< stream output operator, try to print expression to screen  -> (OUTPUT STREAM << EXPRESSION) -> returns another output stream
			std::cout << "Hello World!" << std::endl; //or std::flush go ahead and write/flush to disk, endl says to add newline then flush
			std::cout << "The value of a: "<< a << std::endl;
			std::cout << true << '\n' << std::flush; //false -> 0, any not 0 -> true; ***don't use manual newlines because they vary by OS, use endl
			std::cout << 'b' << 'c' << 'd' << std::endl;
				//std::cout << "Hello World!" << std::endl; stmnt ends in ;
				//standard library package
			//INPUT STREAM >> VARIABLE
			std::cout << "Enter two numbers:"<< std::endl;
			std::cin >> a;
			std::cin >> b;
			std::cout << "what is the sum of " << a << " and " << b << "?" << std::endl;
			std::cin >> c;
			//cin is very smart about trying to find the data type you want in input, but will give you trash if you don't give it good input*/
}