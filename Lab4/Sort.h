#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <cstdarg>
#include <cstring>
#include <initializer_list>

class Sort
{
private:
    int a[1001]; // data members
    int size; // size of the array

public:
    // constructors
    Sort(int num_elements, int min_value, int max_value); // random values within a specific interval
    Sort(int arr[], int num_elements); // existing array
    Sort(int count, ...);
    Sort(std::initializer_list<int> init_list);
    Sort(char c[1001]);  

    // methods
    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};
