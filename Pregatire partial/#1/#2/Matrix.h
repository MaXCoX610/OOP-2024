#include <iostream>
#include <cmath>
#include <stdio.h>
#include <cstring>

class Matrix {
private:
	int a[101][101]={}, lungime, inaltime, size;
public:
	Matrix(int coloane, int linii);
	void print();
	void fill(int a);
	int& operator()(int x, int y);
	int operator[](const char x[6]);
};
