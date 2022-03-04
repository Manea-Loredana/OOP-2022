#include "NumberList.h"
#include <iostream>

void NumberList::Init()
{   
	count=0;
   
}

bool NumberList::Add(int x)
{
    count++;
    if (count > 10)
    {
        count--;
        return 0;

    }
    numbers[count-1]=x;


}

void NumberList::Sort()
{
    int aux;
    for ( int i = 0; i < count; ++i)
    {
        for (int j = i + 1; j < count; ++j)
        {
            if (numbers[i] > numbers[j])
            {
                aux = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = aux;
            }
        }
    }
}

void NumberList::Print()
{
    for (int i = 0; i < count; ++i)
        std::cout << numbers[i] << std::endl;
    

}
