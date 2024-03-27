#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h";

using namespace std;

int v[1001] = { 1,4,7,2,9 },n;
char chr[1001] = "11,43,23,67,32,54";
int main() {
	Sort rand_s(7, 2, 34);
	Sort init_s({ 5, 2, 8, 9, 1 });
	Sort vectr_s(v, 5);
	Sort variadic_s(6, 22, 11, 55, 77, 33, 111);
	///Sort chr_s(chr);  ///E GRESIT CEVA SI NU GASESC GRESEALA FOR SOME REASON AICI!!!!
	n=rand_s.GetElementsCount();
	rand_s.BubbleSort(true);
	cout << n << '\n';
	rand_s.Print();
	
	cout << '\n';

	n = init_s.GetElementsCount();
	init_s.InsertSort();
	cout << n << '\n';
	init_s.Print();

	cout << '\n';

	n = vectr_s.GetElementsCount();
	vectr_s.InsertSort();
	cout << n << '\n';
	vectr_s.Print();

	cout << '\n';

	n = variadic_s.GetElementsCount();
	variadic_s.InsertSort();
	cout << n << '\n';
	variadic_s.Print();

	return 0;
}