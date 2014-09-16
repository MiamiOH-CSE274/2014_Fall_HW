/*
Just starting this file because main.cpp is getting
too cluttered
*/


#include <iostream>
#include "foo.h" //Quotes around file name means look in same folder as this cpp file
#include "HelloWorld.h"

int main(void){

	//an array with two integers

	int* array = new int[2];
	double* array2 = new double[3];

	array[0] = 5;
	array[1] = 6;

	std::cout << array << std::endl;


}