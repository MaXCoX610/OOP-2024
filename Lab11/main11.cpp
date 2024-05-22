#include "header11.h"
#include <iostream>

int main() {
    // Create an instance of MySorter with integer type
    MySorter<int> sorter;

    // Add some elements to the vector
    sorter.elements.push_back(5);
    sorter.elements.push_back(3);
    sorter.elements.push_back(8);
    sorter.elements.push_back(6);
    sorter.elements.push_back(2);

    // Print elements before sorting
    std::cout << "Before sorting: ";
    sorter.printElements();

    // Sort the elements
    sorter.sort();

    // Print elements after sorting
    std::cout << "After sorting: ";
    sorter.printElements();

    return 0;
}
