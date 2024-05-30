#include<iostream>
#include<string.h>

float charToFloat(const char* x) {
    int c = 1, leftEnd = 0;
    float temp = 0.0;
    if (x[0] == '-') {
        leftEnd++;
    }
    for (int i = strlen(x) - 1; i >= leftEnd; i--) {
        if (x[i] == ','||x[i]=='.') {
            temp = temp / c;
            c = 1;
        }
        if (x[i] >= '0' && x[i] <= '9') {
            temp += (x[i] - '0') * c;
            c *= 10;
        }
    }
    if (leftEnd == 1) {
        return -temp;
    }
    return temp;
}
double operator""_Kelvin(const char * x) {
    
    return charToFloat(x) -273.15;
}

double operator""_Fahrenheit(const char* x) {
    return (charToFloat(x) - 32) * 5 / 9;
}
int main()
{
    float a = 226_Kelvin;  // Expected: -47.15 in C
    float b = 53.6_Fahrenheit;  // Expected: 12 in C
    std::cout << a << '\n'; 
    std::cout << b << '\n';

    
}