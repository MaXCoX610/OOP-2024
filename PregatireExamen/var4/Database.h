#include "Entry.h"
#include "IntegerData.h"
#include "StringData.h"

using namespace std;

class Database {
	vector<Entry*> entries;
public:
	Database& operator+=(Entry* entry);
	//Database& operator-=(??);
	vector<Entry*>::iterator begin();
	vector<Entry*>::iterator end();
	void Print();
};