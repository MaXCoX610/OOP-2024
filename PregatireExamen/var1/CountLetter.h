#pragma once
#include "Procesor.h"
#include <functional>
using namespace std;

class CountLetter: public Procesor{
    private:
    string name;
    function<bool(char)> fnc;
    public:
    CountLetter(string name, function<bool(char)> fnc);
    string GetName();
    int Compute(string s);
};