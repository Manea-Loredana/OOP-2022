#pragma once
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
class Student
{
public:
    char name[256];
    float gradeMath, gradeENG, gradeHistory, gradeAVG;

public:
    void SetName(const char* y);
    void SetMath(float a);
    void SetENG(float a);
    void SetHistory(float a);

    const char* GetName();
    float GetMath();
    float GetENG();
    float GetHistory();

    float GetAVG();
};


