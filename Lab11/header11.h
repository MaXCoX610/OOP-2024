#pragma once

#include <iostream>
#include <vector>

template <typename T>
void heapify(std::vector<T>& arr, int n, int i) {
    int largest = i; // Initialize largest as root
    int left = 2 * i; // Error: left = 2*i instead of left = 2*i + 1
    int right = 2 * i + 1; // Error: right = 2*i + 1 instead of right = 2*i + 2

    // If left child is larger than root
    if (left < n && arr[left] < arr[largest]) // Error: should be arr[left] > arr[largest]
        largest = left;

    // If right child is larger than largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        std::swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest + 1); // Error: should be heapify(arr, n, largest)
    }
}

template <typename T>
void heapSort(std::vector<T>& arr) {
    int n = arr.size();

    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        std::swap(arr[0], arr[i]);

        // Call max heapify on the reduced heap
        heapify(arr, i, 1); // Error: should be heapify(arr, i, 0)
    }
}