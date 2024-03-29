#define _CRT_SECURE_NO_WARNINGS
#include "Number.h"
using namespace std;
Number::Number(const char* value, int base) {
	sir = new char[100]{}; // New aloca memorie in mod dinamic (heap memory)

	//sir = malloc(100 * sizeof(char)); // Po
	strcpy(sir, value);
	sirLen = strlen(sir);
	nrBase = base;
}

unsigned int Number::GetBase10Number() const{
	unsigned int result = 0, power = 1;
	for (int i = sirLen - 1; i >= 0; i--) 
	{
		if (sir[i] >= '0' && sir[i] <= '9') {
			result = result + (sir[i] - '0') * power;
		}
		else {
			result = result + (sir[i] - 'A') * nrBase;
		}
		power = power * nrBase;
	}
	return result;
}

int Number::GetDigitsCount() {
	int k = 0;
	for (int i = 0; i < strlen(sir); i++)
	{
		if (sir[i] >= '0' && sir[i] <= '9')
			k++;
	}
	return k;
}

int Number::GetBase() {
	int b = 0;
	for (int i = 0; i < strlen(sir); i++)
		if (b < static_cast<int>(sir[i]))
			if (sir[i] <= '9')
				b = static_cast<int>(sir[i]) - '0' + 2;
			else
				b = static_cast<int>(sir[i]) - 'A' + 11;
	return b;
}

void Number::SwitchBase(int newBase) {
	if (nrBase <= 10) {
		int nr = stoi(std::string(sir), nullptr, nrBase); // Convert to decimal
		std::string result = ""; // Create a string to hold the result
		while (nr > 0) {
			int digit = nr % newBase;
			result.push_back(digit + '0'); // Convert digit to character and add to result
			nr /= newBase;
		}
		std::reverse(result.begin(), result.end()); // Reverse result to get the correct order
		std::strcpy(sir, result.c_str()); // Copy the result back to sir
		nrBase = newBase; // Update the base
	}
}




bool Number::operator <(const Number& otherNumber) {
	return GetBase10Number() < otherNumber.GetBase10Number(); 

}

bool Number::operator >=(const Number& otherNumber) {
	return GetBase10Number() >= otherNumber.GetBase10Number(); 

}

void Number::operator -=(const Number& otherNumber) {
	int higherBase = (this->nrBase > otherNumber.nrBase) ? this->nrBase : otherNumber.nrBase;
	std::string str_number = std::to_string(this->GetBase10Number() - otherNumber.GetBase10Number());
	const char* char_number = str_number.c_str();
	Number result(char_number, 10);
	result.SwitchBase(higherBase);
	strcpy(this->sir, result.sir);
	this->nrBase = result.nrBase;
	result.~Number();
}

void Number::operator +=(const Number& otherNumber) {
	int higherBase = (this->nrBase > otherNumber.nrBase) ? this->nrBase : otherNumber.nrBase;
	std::string str_number = std::to_string(this->GetBase10Number() + otherNumber.GetBase10Number());
	const char* char_number = str_number.c_str();
	Number result(char_number, 10);
	result.SwitchBase(higherBase);
	strcpy(this->sir, result.sir);
	this->nrBase = result.nrBase;
	result.~Number();
}

bool Number::operator <=(const Number& otherNumber) {
	return GetBase10Number() <= otherNumber.GetBase10Number(); 

}

void Number::operator =(const Number& otherNumber) {
	//this->sir=otherNumber.sir;
	strcpy(this->sir, otherNumber.sir);
	this->nrBase = otherNumber.nrBase;

}

bool Number::operator >(const Number& otherNumber) {
	return GetBase10Number() > otherNumber.GetBase10Number();
}

Number operator +(const Number& nr1, const Number& nr2) {
	int higherBase = (nr1.nrBase > nr2.nrBase) ? nr1.nrBase : nr2.nrBase;
	std::string str_number = std::to_string(nr1.GetBase10Number() + nr2.GetBase10Number());
	const char* char_number = str_number.c_str();
	Number result(char_number, 10);
	result.SwitchBase(higherBase);
	return result;
}

Number operator -(const Number& nr1, const Number& nr2) {
	int higherBase = (nr1.nrBase > nr2.nrBase) ? nr1.nrBase : nr2.nrBase;
	std::string str_number = std::to_string(nr1.GetBase10Number() - nr2.GetBase10Number());
	const char* char_number = str_number.c_str();
	Number result(char_number, 10);
	result.SwitchBase(higherBase);
	return result;
}

void Number::Print() {
	std::cout<< "Numarul "<<sir<<" in baza "<< nrBase;
}
Number::~Number(){
	delete[] sir;
	sir = nullptr; // RECOMANDAT!!!
}