#include "LongestWord.h"

LongestWord::LongestWord(string name)
{
    this->name=name;
}

string LongestWord::GetName()
{
    return name;
}

int LongestWord::Compute(string s)
{
    int kmax=0, k=0; 
    for(int i=0; i<=s.length(); i++){
        if(s[i]==' ' || s[i]=='\0')
        {
            if(k>kmax)
                kmax=k;
        k=0;
        }
        else{
            k++;
        }
    }
    return kmax;
}
