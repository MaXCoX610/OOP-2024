#include "pch.h"
#include "C:\Users\radud\source\repos\Test\Lab11\sorting.cpp"
using namespace std;

TEST(test, original_adevarat) {
        vector<int> arr = { 12, 11, 13, 5, 6, 7, 20, 3, 17, 8, 15 };
        cout << "Original array:\n";
        for (int i : arr) {
            cout << i << " ";
        }
        cout << endl;

        heapSort(arr);

        cout << "Sorted array:\n";
        for (int i : arr) {
            cout << i << " ";
            ASSERT_TRUE(arr[i-1] < arr[i]);
        }

        cout << endl;
 }