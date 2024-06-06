#include "ComputeVowals.h"
using namespace std;

ComputeVowals::ComputeVowals(string name) : name(name){}


string ComputeVowals::GetName()
{
    return name;
}

int ComputeVowals::Compute(string s){
    int k=0;
    for(int i=0; i<=s.length(); i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            k++;
    }
    return k;
}