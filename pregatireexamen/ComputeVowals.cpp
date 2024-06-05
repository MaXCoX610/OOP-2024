#include "ComputeVowals.h"
using namespace std;

ComputeVowals::ComputeVowals(string name)
{
    this->name=name;
}

string ComputeVowals::GetName()
{
    return name;
}

int ComputeVowals::Compute(string s){
    string vocale ="aeiouAEIOU";
    int nrVocale=0;
    size_t pozitie;
    pozitie=s.find_first_of(vocale);

    while(pozitie != string::npos){
        nrVocale++;
        pozitie=s.find_first_of(vocale,pozitie+1);
    }
    return nrVocale;
}