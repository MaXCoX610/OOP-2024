#include "Math.h"
#include <cmath>
using namespace std;
int main() {

    for(int i=1;i<=12;i++){
        float x= (1+sqrt(1+24*i))/6;
        if (x== (int) x)
            cout<< i<<" este nr pentagonal "<<'\n';
        else
            cout<< i<<"NU este nr pentagonal "<<'\n';
    }
    // cout << "2+3= " << Math::Add(2, 3) << endl;
    // cout << "2+3+4= " << Math::Add(2, 3, 4) << endl;
    // cout << "2.5+3.5= " << Math::Add(2.5, 3.5) << endl;
    // cout << "2.5+3.5+4.5= " << Math::Add(2.5, 3.5, 4.5) << endl;
    // cout << "2*3= " << Math::Mul(2, 3) << endl;
    // cout << "2*3*4= " << Math::Mul(2, 3, 4) << endl;
    // cout << "2.5*3.5= " << Math::Mul(2.5, 3.5) << endl;
    // cout << "2.5*3.5*4.5= " << Math::Mul(2.5, 3.5, 4.5) << endl;
    // cout << "3+2+3+4= " << Math::Add(3, 2, 3, 4) << endl;
    // char* result = Math::Add("Hello, ", "World!");
    // if (result != nullptr) {
    //     cout << "Add(\"Hello, \", \"World!\"): " << result << endl;
    //     delete[] result;
    // }
    return 0;
}
