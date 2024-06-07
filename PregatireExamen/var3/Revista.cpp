#include "Revista.h"
using namespace std;

string Revista::GetInfo()
{
    string s;
    s = "Revista " + titlu + " cu " + to_string(nrArticole);
    return s;
}

Revista::Revista(string titlu, int nrArticole)
{
    this->titlu = titlu;
    this->nrArticole = nrArticole;
}
