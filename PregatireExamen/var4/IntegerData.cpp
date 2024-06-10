#include "IntegerData.h"

IntegerData::IntegerData(string name, string value): Entry(name)
{
	this->name = name;
	this->value = atoi(value.c_str());
}

void IntegerData::Add(string toAdd)
{
	value+=atoi(toAdd.c_str());
}

bool IntegerData::Substract(int toSubstract)
{
	return false;
}

void IntegerData::Print()
{
	cout << name << " = " << value << ';';
}
