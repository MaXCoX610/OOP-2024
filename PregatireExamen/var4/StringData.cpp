#include "StringData.h"

StringData::StringData(string name, string value) : Entry(name)
{ 
	this->name = name;
	this->value = value;
}

void StringData::Add(string toAdd)
{
	value += toAdd;
}

bool StringData::Substract(int toSubstract)
{
	return false;
}

void StringData::Print()
{
	cout << name << " = " << value << ';';
}
