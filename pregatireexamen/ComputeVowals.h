#include "Procesor.h"
using namespace std;

class ComputeVowals : public Procesor
{
private:
    string name;

public:
    int Compute(string s);
    ComputeVowals(string name);
    string GetName();
};