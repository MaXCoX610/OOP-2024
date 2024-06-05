#include "LongestWord.h"

LongestWord::LongestWord(string name)
{

}

string LongestWord::GetName()
{
    return name;
}

int LongestWord::Compute(string s)
{
    string space=" ";
    int maxLength=0, length=0;
    size_t startWord, endWord;
    startWord=s.find_first_not_of(space);
    while(startWord!= string::npos){
        endWord= s.find_first_of(space);
        length= endWord-startWord;
        if(length>maxLength)
            maxLength=length;
        startWord=s.find_first_not_of(space, endWord);
    }
    return maxLength;
}
