#include "Procesor.h"
#include "LongestWord.h"
#include "CountLetter.h"
#include "ComputeVowals.h"

using namespace std;

class Sentence{
    vector<Procesor*> procesators;
	string name;
    public:
        Sentence(string s);
        void RunAll();
        void ListAll();
        void Run(string s);
        Sentence& operator+=(Procesor* procesators);
};