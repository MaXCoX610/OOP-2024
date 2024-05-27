#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#ifndef CONTACT_H
#define CONTACT_H

using namespace std;

class Contact{
    public: 
    string name;
    virtual ~Contact() = default;
    void printName(){
        cout<<this->name<<endl;
    }
};

#endif