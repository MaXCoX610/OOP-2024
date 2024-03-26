#include "Canvas.h"
using namespace std;
int main() {
    Canvas C(40,40);
    C.DrawCircle(15, 15, 5, '#');
    C.FillCircle(15, 15, 5, '#');
    C.Print();
    Sleep(5000);
    C.Clear();
    return 0;
}
