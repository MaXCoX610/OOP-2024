#include "StudentFunctions.h"

int compareByName(const Student& s1, const Student& s2)
{
    if (s1.getName() == s2.getName())
        return 0;
    return (s1.getName() < s2.getName()) ? -1 : 1;
}

int compareByMathGrade(const Student& s1, const Student& s2)
{
    if (s1.getMathGrade() == s2.getMathGrade())
        return 0;
    return (s1.getMathGrade() < s2.getMathGrade()) ? -1 : 1;
}

int compareByEnglishGrade(const Student& s1, const Student& s2)
{
    if (s1.getEnglishGrade() == s2.getEnglishGrade())
        return 0;
    return (s1.getEnglishGrade() < s2.getEnglishGrade()) ? -1 : 1;
}

int compareByHistoryGrade(const Student& s1, const Student& s2)
{
    if (s1.getHistoryGrade() == s2.getHistoryGrade())
        return 0;
    return (s1.getHistoryGrade() < s2.getHistoryGrade()) ? -1 : 1;
}

int compareByAverageGrade(const Student& s1, const Student& s2)
{
    if (s1.getAverageGrade() == s2.getAverageGrade())
        return 0;
    return (s1.getAverageGrade() < s2.getAverageGrade()) ? -1 : 1;
}
