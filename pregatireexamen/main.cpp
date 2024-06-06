#include <iostream>
#include "Sentence.h"
#include "ComputeVowals.h"
#include "CountLetter.h"
#include "LongestWord.h"

using namespace std;

int main()
{
    ComputeVowals procesorVowals("Voc");
    cout<< procesorVowals.Compute("mata coaie");
    // CountLetter procesorCount("countE", [](char ch){ return ch=='e';});
    // cout<<procesorCount.Compute("Second POO test")<<endl;

    // LongestWord procesorLongestWord("long");
    // cout<<procesorLongestWord.Compute("Se POO test")<<endl;

    // Sentence s("Second POO test");
    // (s += new ComputeVowals("Voc")) += new CountLetter("CountE", [](char ch) { return ch == 'e'; });
    // s += new LongestWord("long");
    // s.ListAll();
    // std::cout << "=====================" << std::endl;
    // s.RunAll();
    // std::cout << "=====================" << std::endl;
    // s.Run("CountE");
    return 0;
}

