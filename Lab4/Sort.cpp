#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
using namespace std;

///random values intr-un interval
Sort::Sort(int num_elements, int vmin, int vmax) {
	size = num_elements;
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		this->a[i] = vmin + rand() % (vmax - vmin + 1);
	}
}

Sort::Sort(int arr[], int num_elements) {
	size = num_elements;
	for (int i = 0; i < size; i++) {
		this-> a[i] = arr[i];
	}
}

Sort::Sort(int count, ...) {
	size = count;
	va_list args;
	va_start(args, count);
	for (int i = 0; i < count; i++) {
		a[i] = va_arg(args, int);
	}
	va_end(args);
}

Sort::Sort(initializer_list<int> init_list) {
	size = init_list.size();
	int i = 0;
	for (int value : init_list) {
		a[i++] = value;
	}
}

Sort::Sort(char c[1001]) {
	int k = 0;
	char* ch = strtok(c, ",");
	while (c != NULL)
		a[k++] = atoi(c), ch = strtok(NULL, ","); ///ceva greseala aici????!
}

void Sort::InsertSort(bool ascendent) {
	int key, j;
	for (int i = 1; i < this->size; i++) {
		key = this->a[i];
		j = i - 1;
		while ( j >= 0 && ((ascendent &&  this->a[j] > key) || (!ascendent && this->a[j] < key))) {
			this->a[j + 1] = this->a[j];
			j = j - 1;
		}
		this->a[j + 1] = key;
	}
}

void Sort::BubbleSort(bool ascendent) {
	bool sortat;
	int m = size;
	do
	{
		sortat = true;
		int p = m;
		for (int i = 0; i < p - 1; i++)
			if ((ascendent && this->a[i] > this->a[i + 1]) || (!ascendent && this->a[i] < this->a[i + 1])) {
				swap(this->a[i], this->a[i + 1]);
				sortat = false;
				m = i + 1;
			}
	} while (!sortat);
}

int Sort::GetElementsCount(){
	return size;
}

int Sort::GetElementFromIndex(int index) {
	if (index >= 0 && index < size) {
		return a[index];
	}
	else {
		cout << "Index out of bounds!" << endl;
		return -1;
	}
}

void Sort::Print() {
	for (int i = 0; i < size; i++)
		cout << this->a[i] << ' ';
	cout << '\n';
}