#include "Matrix.h"
using namespace std;

Matrix::Matrix(int coloane, int linii) {
	inaltime = coloane;
	lungime = linii;
	size = inaltime * lungime;
}

void Matrix::print() {
	for (int i = 0; i < this->lungime; i++) {
		for (int j = 0; j < this->inaltime; j++)
			cout << this->a[i][j] << "  ";
		cout << endl;
	}
}

void Matrix::fill(int a) {
	for (int i = 0; i < this->lungime; i++)
		for (int j = 0; j < this->inaltime; j++)
		{
			this->a[i][j] = 5;
		}
}
int& Matrix::operator()(int x, int y) {
		return a[y][x];
}

int Matrix::operator[](const char x[6]) {
	if (x[0]=='w') {
		return this->inaltime;
	}
	if (x[0] == 'h') {
		return this->lungime;
	}
	if (x[0] == 's') {
		return this->size*4;
	}
}