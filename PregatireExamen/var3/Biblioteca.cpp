#include "Biblioteca.h"
using namespace std;

Biblioteca::Biblioteca()
{
	count = 0;
}

Biblioteca::~Biblioteca()
{
}

Biblioteca& Biblioteca::operator+=(Carte* c)
{
	carti.push_back(c);
	count++;
	return (*this);
}

Biblioteca::operator int()
{
	return count;
}

void Biblioteca::PrintFilter(function<bool(Carte*)> fn)
{
	for (auto it : carti)
		if (it->GetInfo()[1] == 'o') {
			cout << it->GetInfo() << endl;
		}

}

void Biblioteca::printAll()
{
	for (auto it : carti)
		cout << it->GetInfo() << endl;
}
