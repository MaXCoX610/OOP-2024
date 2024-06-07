#pragma once
#include "Carte.h"

using namespace std;

class Roman : public Carte {
private:
	string nume;
	string autor;
public:
	string GetInfo();
	Roman(string name, string autor);
};