#include"Compare.h"


int CompareName(Student& s1, Student& s2)
{
    if (strcmp(s1.GetName(), s2.GetName()) == 0)
        return 0;
    if (strcmp(s1.GetName(), s2.GetName()) < 0)
        return -1;
    return 1;
}

int CompareENG(Student& s1, Student& s2)
{
    if (s1.GetENG() == s2.GetENG())
        return 0;
    if (s1.GetENG() < s2.GetENG())
        return -1;
    return 1;
}

int CompareMath(Student& s1, Student& s2)
{
    if (s1.GetMath() == s2.GetMath())
        return 0;
    if (s1.GetMath() < s2.GetMath())
        return -1;
    return 1;
}

int CompareHistory(Student& s1, Student& s2)
{
    if (s1.GetHistory() == s2.GetHistory())
        return 0;
    if (s1.GetHistory() < s2.GetHistory())
        return -1;
    return 1;
}

int CompareAVG(Student& s1, Student& s2)
{
    if (s1.GetAVG() == s2.GetAVG())
        return 0;
    if (s1.GetAVG() < s2.GetAVG())
        return -1;
    return 1;
}


