#include "Angajat.h"

string Angajat::GetNume()
{
    return nume;
}

int Angajat::GetSalariu()
{
    return salariu;
}

bool Angajat::SetSalariu(int salariu)
{
    this->salariu = salariu;
    return 1;
}

Angajat::Angajat(string nume, int salariu, int id)
{
    this->nume = nume;
    this->salariu = salariu;
    this->id = id;
}
