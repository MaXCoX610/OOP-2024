#include "Entry.h"

using namespace std;

class StringData: public Entry {
private:
	string value;
public:
	StringData(string name, string value);
	void Add(string toAdd) override;
	bool Substract(int toSubstract) override;
	void Print() override;
};