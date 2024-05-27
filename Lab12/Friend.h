#include "Contact.h"
#ifndef FRIEND_H
#define FRIEND_H
using namespace std;

class Friend: public Contact
{
    public:
    struct DoB{
        int year, month, day;
    }date_of_birth;
    string phoneNumber;
    string address;
    void printDoB(){
        cout<<"Acest prieten s-a nascut pe data de: "<<date_of_birth.day<<". "<<date_of_birth.month<<". "<<date_of_birth.year<<endl;
    }
    void printPhoneNumber(){
        cout<<"Aceast prieten are numarul de telefon: "<<phoneNumber<<endl;
    }
    void printAddress(){
        cout<<"Acest prieten locuieste la adresa: "<< address<<endl;
    }
};
#endif