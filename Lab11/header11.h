#ifndef MYSORTER_H
#define MYSORTER_H

#include <vector>
#include <iostream>

using namespace std;

template <typename T>
class MySorter {
public:
    std::vector<T> elements;
    // Sorting function
    void sort();
    // Function to print the elements (for debugging purposes)
    void printElements();
};

template <typename T>
void MySorter<T>::sort() {
    int n = elements.size();
    // Error 1: Incorrect loop bounds (should be n-1)
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            // Error 2: Comparison should be elements[j] > elements[j + 1]
            if (elements[j] < elements[j + 1]) {
                // Error 3: Incorrect swap operation
                T temp = elements[j + 1];
                elements[j + 1] = elements[j];
                elements[j] = temp;
            }
        }
    }
    // Error 4: Missing return statement (function should return something)
}

template <typename T>
void MySorter<T>::printElements() {
    // Error 5: Incorrectly accessing elements of vector
    for (int i = 0; i <= elements.size(); ++i) {
        cout << elements[i] << " ";
          ASSERT_LE(elements[i], elements[i + 1]);
    }
    cout << endl;
}

#endif // MYSORTER_H
