// includes
#include "pch.h" // always include the precompiled header file
#include "Hello.h"
#include <iostream>

void print_hw() // C-style function
{
	std::cout << "Hello world! (c-style)" << std::endl;
}

// class definitions for our Hello class

//constructor definition
Hello::Hello()
{
	myString = "Hello world but from a string!";
	myInt = -1;
}

Hello::Hello(int i)
{
	myString = "Hello world but from a string!";
	myInt = i;
}

void Hello::print_hw_obj_method() 
{
	std::cout << myString << std::endl;
}

int Hello::get_myInt()
{
	return myInt;
}