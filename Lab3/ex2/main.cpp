#include "Canvas.h"
using namespace std;
int main() {
    Canvas C(100,100);
    C.DrawCircle(10, 10, 5, '#');
    C.FillCircle(10, 10, 5, '#');
    C.DrawRect(40, 40, 50, 55, '#');
    C.FillRect(40, 40, 50, 55, '*');
    C.Print();
    Sleep(5000);
    C.Clear();
    return 0;
}