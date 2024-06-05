#include "CountLetter.h"

CountLetter::CountLetter(string name, function<bool(char)> fnc)
{
    this->name=name;
    this->fnc= fnc;
}

string CountLetter::GetName()
{
    return name;
}

int CountLetter::Compute(string s)
{
    int count=0;
    unsigned int i;
    for (i=0; i<s.length(); i++){
        if (fnc(s[i])==true){
            count++;
        }
    }
    return count;
}
