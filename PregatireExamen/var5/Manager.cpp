#include "Manager.h"

using namespace std;

void Manager::Lucreaza()
{
	cout << "===================="<<endl;
	cout << numeEchipa << endl;
	cout<< "====================" << endl;
	cout << numeEchipa << endl;
	for (auto it : echipa) {
		cout <<'[' << it->GetNume()<<"]:"<<endl;
		it->Lucreaza();
	}
}

bool Manager::Angajeaza(Angajat* x)
{
	echipa.push_back(x);
	return true;
}

bool Manager::Concediaza(Angajat* x)
{
	for (auto it = echipa.begin(); it != echipa.end(); ++it)
	{
		if ((*it)->GetNume() == x->GetNume())
		{
			echipa.erase(it);
			return true;
		}
	}
	return false;
}

//Angajat Manager::GetAngajat(int id)
//{
//	for(int i=0; i<=echipa.size(); i++)
//		if(echipa[i].id==id)
//			return *this;
//}

Manager::Manager(string numeEchipa, string nume, int salariu, int id): Angajat(nume,salariu,id)
{
	this->numeEchipa = numeEchipa;
	this->id = id;
	this->salariu = salariu;
}
