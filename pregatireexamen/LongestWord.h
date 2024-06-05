#include "Procesor.h"
using namespace std;

class LongestWord: public Procesor{
    string name;
    public:
    LongestWord(string name);
    string GetName();
    int Compute(string s);
};