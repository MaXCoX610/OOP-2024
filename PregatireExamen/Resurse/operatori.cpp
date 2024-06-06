#include "operatori.h"
using namespace std;

int main() {
    Operatori op1, op2;

    op1.a.x = 10;
    op1.a.y = 11;

    Operatori::img rez = op1(22, 12);
    cout << rez.x << ' ' << rez.y << endl;

    op2.a.x = 5;
    op2.a.y = 7;

    // Use the overloaded + operator for img
    Operatori::img rez2 = op1.a + op2.a;
    cout << rez2.x << ' ' << rez2.y << endl;

    return 0;
}
