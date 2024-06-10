#include "Programator.h"

void Programator::Lucreaza()
{
	cout << cod;
}

void Programator::Add(string cod)
{
	this->cod += cod;
}

Programator::Programator(string nume, int salariu, int id): Angajat(nume, salariu, id){}

string Programator::GetCode()
{
	return cod;
}
