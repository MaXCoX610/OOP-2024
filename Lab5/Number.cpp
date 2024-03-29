#define _CRT_SECURE_NO_WARNINGS
#include "Number.h"
using namespace std;
Number::Number(const char* value, int base) {
	sir = new char[1001] {};
	strcpy(sir, value);
	sirLen = strlen(sir);
	nrBase = base;
}

unsigned int Number::GetBase10Number() const {
	unsigned int result = 0, power = 1;
	int i;
	for (i = sirLen - 1; i >= 0; i--)
	{
		if (sir[i] >= '0' && sir[i] <= '9') {
			result = (result + sir[i] - '0') * power;
		}
		else
			result = result + (sir[i] - 'A');
		power = power * nrBase;
	}
	return result;
}

bool Number::operator <(const Number& otherNumber)
{
	return GetBase10Number() < otherNumber.GetBase10Number();
}

void Number::Print() {
	cout << "Numarul " << sir << " este in baza " << nrBase << '\n';
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
	for (int i=0; i<strlen(sir); i++)
		if (b < static_cast<int>(sir[i])) 
			if(sir[i]<='9')
				b = static_cast<int>(sir[i])-'0'+2;
			else
				b = static_cast<int>(sir[i]) - 'A' + 11;
	return b;
}

void Number::SwitchBase(int newBase) {
	if (nrBase <= 10) {
		int nr = std::stoi(std::string(sir), nullptr, nrBase); 
		std::string result = ""; 
		while (nr > 0) {
			int digit = nr % newBase;
			result.push_back(digit + '0'); 
			nr /= newBase;
		}
		reverse(result.begin(), result.end()); 
		strcpy(sir, result.c_str()); 
		nrBase = newBase; 
	}
}

Number::~Number()
{
	delete[] sir;
	sir = nullptr;
}