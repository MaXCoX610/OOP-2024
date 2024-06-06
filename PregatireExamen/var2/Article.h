#include<iostream>
#include<string>
using namespace std;

class Article{
    public:
    virtual string GetType();
    virtual int GetQuantity();
    virtual int GetPrice();
    virtual void Print();
};