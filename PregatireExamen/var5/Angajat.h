#pragma once
#include<iostream>
#include <string>
#include <vector>
#include<functional>

using namespace std;

class Angajat {
protected:
	int salariu;
	string nume;
	int id;
public:
	string GetNume();
	int GetSalariu();
	bool SetSalariu(int salariu);
	virtual void Lucreaza()=0;
	Angajat(string nume, int salariu, int id);
	friend class Manager;
};