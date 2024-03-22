#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;
class Student
{
    string name;
    float mathGrade;
    float englishGrade;
    float historyGrade;
public:
    void setName(const std::string& name);
    string getName() const;
    void setMathGrade(float grade);
    float getMathGrade() const;
    void setEnglishGrade(float grade);
    float getEnglishGrade() const;
    void setHistoryGrade(float grade);
    float getHistoryGrade() const;
    float getAverageGrade() const;
};

#endif 
