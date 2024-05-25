#include "template.h"
 using namespace std;
 const int l=22;
 int main(){
    Array<int, l> intArr;
    intArr.fill(2);
    cout<<"intArray[4]= " << intArr.at(4) << endl;

    Array<string,l> strArr;
    strArr.fill("abc");
    strArr.at(6) ="123";
    for(int i=0; i<l; i++)
    {
         cout<<strArr.at(i)<<' ';
    }
    return 0;
 }
 
