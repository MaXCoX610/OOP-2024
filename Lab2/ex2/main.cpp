#include "Student.h"
#include "StudentFunctions.h"

using namespace std;
int main()
{
    Student s1, s2;
    s1.setName("Dan");
    s1.setMathGrade(9.5f);
    s1.setEnglishGrade(8.7f);
    s1.setHistoryGrade(9.3f);
    
    s2.setName("Vlad");
    s2.setMathGrade(9.7f);
    s2.setEnglishGrade(8.5f);
    s2.setHistoryGrade(9.1f);
    
    cout << "name 1 " << s1.getName() << endl << "name 2 " << s2.getName()<<endl;
    cout << "name: " << compareByName(s1, s2) << endl;
    cout << "math grade: " << compareByMathGrade(s1, s2) << endl;
    cout << "English grade: " << compareByEnglishGrade(s1, s2) << endl;
    cout << "history grade: " << compareByHistoryGrade(s1, s2) << endl;
    cout << "average grade: " << compareByAverageGrade(s1, s2) << endl;

    return 0;
}
