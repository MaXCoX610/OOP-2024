#include "Contact.h"
#ifndef ACQUAINTANCE_H
#define ACQUAINTANCE_H

using namespace std;

class Acquaintance: public Contact
{
    public:
    string phoneNumber;
    void printPhoneNumber(){
        cout<<"Aceasta cunostinta are numarul de telefon: "<<phoneNumber<<endl;
    }
};

#endif