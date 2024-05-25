#include<iostream>
using namespace std;

template<typename T, int length>
class Array
{
    public:
    T a[length];
    void fill(T value){
    for (int i=0; i<length; i++)
            a[i] = value;
}
    T &at(int index){
    return a[index];
}
};