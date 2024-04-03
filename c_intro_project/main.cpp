// main.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include <algorithm>
#include "Hello.h"


int main()
{
    std::cout << "Hello World!\n";

    // create our object
    Hello myObj;

    // call the C-style function
    print_hw();

    // call our object function
    myObj.print_hw_obj_method();

    // take in user input
    const int name_len = 50;
    char name[name_len]; // stack allocated array
    std::cout << "What's your name?" << std::endl;
    std::cin.getline(name, name_len); // save user input to stack allocated array

    // copy stack allocated array to heap allocated array
    char* heap_name = new char[name_len];
    std::copy(std::begin(name), std::end(name), heap_name);

    std::cout << "Nice to meet you, " << name << std::endl;
    std::cout << "Your name on heap: " << heap_name << std::endl;

    delete[] heap_name; // not necessary in this case, but is best practice
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
