#include <iostream>
#include <cmath>
#include <stdio.h>
#include <cstring>

class Fractie {
private:
	float rezultat;
	int a, b; ///vom presupune ca a este mereu numaratorul si b este mereu numitorul
public:
	Fractie (int a, int b);
	int convert(char s[]);
	Fractie(const char c[]);
	Fractie(int v[2]);
	float getRezultat(int a, int b);
	int CMMMC(int a, int b);
	int CMMDC(int a, int b);
	Fractie simplify();
	friend Fractie operator +(Fractie& fr1, Fractie& fr2);
	friend Fractie operator -(Fractie& fr1, Fractie& fr2);
	friend Fractie operator *(Fractie& fr1, Fractie& fr2);
	void print();
};