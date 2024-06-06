#include "Sentence.h"

Sentence::Sentence(string name)
{
    this->name=name;
}

void Sentence::RunAll()
{
    for (auto it : procesators)
		cout << "Name: " << it->GetName() <<"=> "<< it->Compute(name)<<endl;
}

void Sentence::ListAll()
{
    for (auto it : procesators)
		cout << "Name: " << it->GetName()<<endl;
}

void Sentence::Run(string s)
{
    for (auto it : procesators)
        if(it->GetName()==s)
            cout<< it->Compute(name)<<endl;
}

Sentence& Sentence::operator+=(Procesor* procesor)
{
    procesators.push_back(procesor);
	return (*this);
}
