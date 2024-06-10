#include "Database.h"


Database& Database::operator+=(Entry* entry)
{
	entries.push_back(entry);
	return *this;
}

vector<Entry*>::iterator Database::begin()
{
	return entries.begin();
}

vector<Entry*>::iterator Database::end()
{
	return entries.end();
}

void Database::Print()
{
	for (auto it : entries)
		it->Print(), cout << endl;

}
