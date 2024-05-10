#include <iostream>
#include <fstream>
#include <cstdio>
#include "Map.h"

using namespace std;

int main() {
    Map<int, const char *> m;
    m[10] = "C++";
    m[20] = "test";
    m[30] = "Poo";

    cout << m[10] << endl; // Output: C++
    cout << m[20] << endl; // Output: test
    cout << m[30] << endl; // Output: Poo

    const char* value;
    if (m.Get(20, value))
        cout << "Found value: " << value << endl;
    else
        cout << "Value not found" << endl;

    cout << "Count: " << m.Count() << endl;
    
    m.Delete(20);
    cout << "Count after deletion: " << m.Count() << endl;

    Map<int, const char *> anotherMap;
    anotherMap[10] = "C++";
    anotherMap[30] = "Poo";
    cout << "Includes: " << m.Includes(anotherMap) << endl;

    m.Clear();
    cout << "Count after clearing: " << m.Count() << endl;
    // for (auto[key, value, index] : m)
    // {
    //     printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    // }
    // m[20] = "result";
    // for (auto[key, value, index] : m)
    // {
    //     printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    // }
    return 0;
}
