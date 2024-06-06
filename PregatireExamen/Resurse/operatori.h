#include <cstdarg>
#include <cstdlib>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

class Operatori{
    public:
    struct img{
        int x, y;
    }a;
    Operatori();
    // bool operator <(const Operatori& Number){

    // }
    // bool operator <=(const Operatori& Number){

    // }
    // bool operator >=(const Operatori& Number){

    // }
    // bool operator >(const Operatori& Number){

    // }
    void operator =(const Operatori& Number){

    }
    void operator +=(const Operatori& Number){

    }
    void operator -=(const Operatori& Number){
        
    }
    void operator ()(int x, int y){
        a.x=x;
        a.y=y;
    }

    // friend Operatori operator -(const Operatori& nr1, const Operatori& nr2);
    // friend Operatori operator +(const Operatori& nr1, const Operatori& nr2);
};

