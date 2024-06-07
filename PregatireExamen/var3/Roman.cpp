#include "Roman.h"

string Roman::GetInfo()
{
    string s;
    s = "Roman " + nume + " de " + autor;
    return s;
}

Roman::Roman(string nume, string autor)
{
    this->nume = nume;
    this->autor = autor;
}
