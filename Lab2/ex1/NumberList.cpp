#include "NumberList.h"
using namespace std;

NumberList::NumberList(){
    this->Init();
} //initialising the constructor

void NumberList::Init(){
    this->count=0;
}

bool NumberList::Add(int x){
    if(this->count>=10)
        return false;
    this->numbers[this->count++]=x; 
}

void NumberList::Sort(){ ///selection sort
    for(int i=0; i<this->count; i++){
        for(int j=0; j<this->count; j++){
            if(this->numbers[i]>this->numbers[j])
                swap(this->numbers[i],this->numbers[j]);
        }
    }
}

void NumberList::Print(){
    for(int i=0; i<this->count; i++)
        cout<<this->numbers[i]<<' ';
}