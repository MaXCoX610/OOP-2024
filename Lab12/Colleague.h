#include "Contact.h"
#ifndef COLLEAGUE_H
#define COLLEAGUE_H
using namespace std;

class Colleague: public Contact
{
    public:
    string phoneNumber;
    string address;
    string companyName;
    void printPhoneNumber(){
        cout<<"Aceast coleg are numarul de telefon (de serviciu): "<<phoneNumber<<endl;
    }
    void printAddress(){
        cout<<"Acest coleg lucreaza la compania cu adresa: "<< address<<endl;
    }
    void printCompanyName(){
        cout<<"Acest coleg lucreaza la compania: "<< companyName<<endl;
    }
};

#endif