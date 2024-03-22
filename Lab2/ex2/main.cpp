
#include "NumberList.h"
using namespace std;
int main(){
    NumberList n;
    n.Init();
    for(int i=0; i<10; i++)
        if(i%2==0)
            n.Add(i*10-i*15);
        else
            n.Add(i*10);
    if(!n.Add(110))
        cout<<"Cannot add as the array is full"<<'\n';
    n.Print();
    cout<<'\n';
    n.Sort();
}