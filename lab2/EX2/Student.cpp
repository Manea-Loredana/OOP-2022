#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include "Student.h"
void Student::SetName(const char* y)

{

    strcpy(name, y);
    name[strlen(name)] = NULL;

}

const char* Student::GetName()
{
    return this->name;
}
void Student::SetMath(float a)
{
    this->gradeMath = a;
}
float Student::GetMath()
{
    return this->gradeMath;
}

void Student::SetENG(float a)
{
    this->gradeENG = a;
}
float Student::GetENG()
{
    return this->gradeENG;

}

void Student::SetHistory(float a)
{
    this->gradeHistory = a;
}
float Student::GetHistory()
{
    return this->gradeHistory;

}

float Student::GetAVG()
{
    gradeAVG = (gradeMath + gradeENG + gradeHistory) / 3;
    return this->gradeAVG;

}
