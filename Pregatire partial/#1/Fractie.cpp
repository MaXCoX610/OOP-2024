// Fractie.cpp
#include "Fractie.h"
using namespace std;

Fractie::Fractie(int numitor, int numarator)
{
    a = numitor;
    b = numarator;
    getRezultat(a, b);
}
    
float Fractie::getRezultat(int a, int b) {
    float rezultat = (float) a / b;
    return rezultat;
}

int Fractie::convert(char s[]) {
    int i = 0, nr = 0;
    while (s[i] != NULL) {
        if (s[i] >= '0' && s[i] <= '9') { // check if s[i] is a digit
            nr = s[i++] - '0' + nr * 10;
        }
        else {
            i++;
        }
    }
    return nr;
}

Fractie::Fractie(const char c[])
{
    int i = 0, am_trecut_la_al_doilea_nr = 0, k1 = 0, k2 = 0;
    char nr1[101] = {}, nr2[101] = {};
    while (c[i] != NULL)
    {
        if (c[i] >= '0' && c[i] <= '9') { // check if c[i] is a digit
            if (am_trecut_la_al_doilea_nr == 0)
                nr1[k1++] = c[i];
            else
                nr2[k2++] = c[i];
        }
        else if (c[i] == '/') {
            am_trecut_la_al_doilea_nr = 1;
        }
        i++;
    }
    a = convert(nr1);
    b = convert(nr2);
    if (b == 0)
        b = 1;
}

Fractie::Fractie(int v[2])
{
    a = v[0];
    b = v[1];
}

void Fractie::print() {
    cout << this->a << '/' << this->b;
}

int Fractie::CMMMC(int a, int b) {
    int numitorcomun = 0, n=a, m=b;
    while (m != n)
        if (n < m)
            n += a;
        else if (n > m)
            m += b;
    numitorcomun = m;
    return numitorcomun;
}

int Fractie::CMMDC(int a, int b) {
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

Fractie Fractie::simplify() {
    while (CMMDC(this->a, this->b)!=1) {
        int div_com = CMMDC(this->a, this->b);
        this->a /= div_com;
        this->b /= div_com;
    }
    return *this;
}

Fractie operator +(Fractie& fr1, Fractie& fr2) {
    int a=0, b=0;
    Fractie fr3(a,b);
    if (fr1.b == fr2.b)
    {
        fr3.b = fr2.b;
        fr3.a = fr2.a + fr1.a;
    }
    else
    {
        fr3.b = fr3.CMMMC(fr1.b, fr2.b);
        fr3.a = ((fr3.b / fr1.b) * fr1.a) + ((fr3.b / fr2.b) * fr2.a);
    }
	return fr3;
}

Fractie operator -(Fractie& fr1, Fractie& fr2) {
    int a = 0, b = 0;
    Fractie fr3(a, b);
    if (fr1.b == fr2.b)
    {
        fr3.b = fr2.b;
        fr3.a = fr2.a - fr1.a;
    }
    else
    {
        fr3.b = fr3.CMMMC(fr1.b, fr2.b);
        fr3.a = ((fr3.b / fr1.b) * fr1.a) - ((fr3.b / fr2.b) * fr2.a);
    }
    return fr3;
}

Fractie operator *(Fractie& fr1, Fractie& fr2) {
    int a = 0, b = 0;
    Fractie fr3(a, b);
    fr3.b = fr1.b * fr2.b;
    fr3.a = fr2.a * fr1.a;
    return fr3;
}

