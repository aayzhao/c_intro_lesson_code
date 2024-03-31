#pragma once // precompiler directive
#include <string> // include string class

void print_hw();

class Hello
{
private:
	std::string myString;
	int myInt;

public:
	Hello();
	Hello(int i);
	void print_hw_obj_method();
	int get_myInt();
};