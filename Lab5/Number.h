#include <cstdarg>
#include <cstdlib>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <cstring>

class Number
{
	char* sir;
	int nrBase;
	unsigned int sirLen;
	// add data members
public:
	Number(const char* value, int base); // where base is between 2 and 16
	~Number();
	bool operator <(const Number& otherNumber);
	bool operator <=(const Number& otherNumber);
	bool operator >=(const Number& otherNumber);
	bool operator >(const Number& otherNumber);
	int operator -(const Number& otherNumber);
	// add operators and copy/move constructor
	unsigned int GetBase10Number() const;
	bool operator <(const Number& otherNumber);

	void SwitchBase(int newBase);
	void Print();
	int  GetDigitsCount(); // returns the number of digits for the current number
	int  GetBase(); // returns the current base
};


//Organize the code in the following way:

//a header file called Number.h
//a cpp file called Number.cpp that contains the source code for class Number
//a main file called main.cpp that contains the main function and has an example on how to use Number.The example must include using all methods from the class.
//add the following operators : addition, subtraction, index operator, relation operators(> , < , >= , <= , == , etc)
//add copy& move constructors and move assignment operator
//when performing operations with two Number object that have a different base, the result(except for the relation and index operators) will have the biggest base of the two Number instances.
//for addition and subtraction use friend functions
//implement the -- operator with the following syntax : if used in a prefix form it will remove the first(most significant digit) from the number; if used in a post - fix form it will remove the last(least significant) digit from the number;