#include "Number.h"

using namespace std;

int main() {
    Number n("123", 10);
    Number n2("123", 10);
    Number n3("125", 10);
    Number n1("101010101010", 2);

    Number nr_octa1("17", 8); //15 in decimal
    Number nr_octa2("10", 8);  //8 in decimal 
    //nr_octa1 = nr_octa1 + nr_octa2;
    nr_octa1 += nr_octa2;
    nr_octa1.Print();

    Number nr_bin1("101", 2);  //5
    Number nr_bin2("11", 2);  //3

    nr_bin1 -= nr_bin2;
    nr_bin1.Print();
    //n.Print();
    //n1.Print();
    bool t = n > n2;
    n=(n3 + n2);
    //n -= n3;
    //int y = n2.operator-(n);
    /*std::cout << t << '\n';
    */
    //n.Print();

}