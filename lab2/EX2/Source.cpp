#define _CRT_SECURE_NO_WARNINGS
#include "Compare.h"


int main()
{
    Student stud1{}, stud2{};
    stud1.SetName("Ioana");
    stud1.SetMath(6);
    stud1.SetENG(9);
    stud1.SetHistory(7);
    

    stud2.SetName("Mihai");
    stud2.SetMath(6);
    stud2.SetENG(1);
    stud2.SetHistory(9);



    std::cout << "MATH" << std::endl;
    std::cout << CompareMath(stud1, stud2) << std::endl;
    std::cout << "ENG" << std::endl;
    std::cout << CompareENG(stud1, stud2) << std::endl;
    std::cout << "History" << std::endl;
    std::cout << CompareHistory(stud1, stud2) << std::endl;
    std::cout << "AVG" << std::endl;
    std::cout << CompareAVG(stud1, stud2) << std::endl;
    std::cout << "Name" << std::endl;
    std::cout << CompareName(stud1, stud2) << std::endl;
    return 0;
}