#include "Carte.h"
#include "Revista.h"
#include "Roman.h"
#include <vector>
#include <functional>
using namespace std;

class Biblioteca {
private:
	vector<Carte*> carti;
	int count;
public:
	Biblioteca();
	~Biblioteca();
	Biblioteca& operator+=(Carte* c);
	Carte& begin();
	Carte& end();
	operator int();
	void PrintFilter(function<bool(Carte*)> fn);
	void printAll();
};