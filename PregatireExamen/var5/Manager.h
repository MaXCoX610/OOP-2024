#include "Angajat.h"
using namespace std;

class Manager : public Angajat {
private:
	vector<Angajat*> echipa;
	string numeEchipa;
public:
	void Lucreaza() override;
	bool Angajeaza(Angajat* x);
	bool Concediaza(Angajat* x);
	Angajat* GetAngajat(int id);
	Manager(string numeEchipa, string nume, int salariu, int id);
};