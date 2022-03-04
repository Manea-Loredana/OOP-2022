
#include <iostream>
#include "NumberList.h"



int main() {
    NumberList numbers;
   
    numbers.Init();
    numbers.Add(5);
    numbers.Add(6);
    numbers.Add(13);
    numbers.Add(2);
    numbers.Add(68);
    numbers.Print();
    numbers.Sort();
    numbers.Add(5);
    numbers.Add(5);
    numbers.Add(6);
    numbers.Add(13);
    numbers.Add(2);
    numbers.Add(68);
    numbers.Print();


}