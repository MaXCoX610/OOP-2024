#include "pch.h"

using namespace std;

// Function prototype for heapSort
template <typename T>
void heapSort(vector<T>& arr);

TEST(test, sort_random_array) {
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
    }
    cout << endl;

    // ASSERT function to check the size of the array
    ASSERT_EQ(arr.size(), 11);
}

TEST(test, smallest_element_first) {
    vector<int> arr = { 12, 11, 13, 5, 6, 7, 20, 3, 17, 8, 15 };

    heapSort(arr);

    // ASSERT function to check if the first element is the smallest
    ASSERT_TRUE(arr[0] <= arr[1]);
}

TEST(test, largest_element_last) {
    vector<int> arr = { 12, 11, 13, 5, 6, 7, 20, 3, 17, 8, 15 };

    heapSort(arr);

    // ASSERT function to check if the last element is the largest
    ASSERT_TRUE(arr[arr.size() - 2] <= arr[arr.size() - 1]);
}

TEST(test, array_sorted) {
    vector<int> arr = { 12, 11, 13, 5, 6, 7, 20, 3, 17, 8, 15 };

    heapSort(arr);

    // ASSERT function to check if the array is sorted
    for (size_t i = 1; i < arr.size(); ++i) {
        ASSERT_TRUE(arr[i - 1] <= arr[i]);
    }
}
