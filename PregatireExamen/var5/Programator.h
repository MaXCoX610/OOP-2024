#include "Angajat.h"

using namespace std;

class Programator : public Angajat{
	string cod;
public:
	void Lucreaza() override;
	void Add(string cod);
	Programator(string nume, int salariu, int id);
	string GetCode();
};