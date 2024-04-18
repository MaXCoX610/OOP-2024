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
public:

    Number(const char* value, int base); 
    ~Number(); // Destructor

    unsigned int GetBase10Number() const;
    bool operator <(const Number& otherNumber);
    bool operator <=(const Number& otherNumber);
    bool operator >=(const Number& otherNumber);
    bool operator >(const Number& otherNumber);
    void operator =(const Number& otherNumber);
    void operator +=(const Number& otherNumber);
    void operator -=(const Number& otherNumber);

    friend Number operator -(const Number& nr1, const Number& nr2);
    friend Number operator +(const Number& nr1, const Number& nr2);

    void SwitchBase(int newBase);
    void Print();
    int  GetDigitsCount(); 
    int  GetBase(); 
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