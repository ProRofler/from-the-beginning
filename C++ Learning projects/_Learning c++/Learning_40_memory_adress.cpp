#include <iostream>
#include <stdio.h>
// memory adress - a location in memory where data is stored
// it can be acessed with & - (adress-of-operator)


int main()
{

    std::string name = "Slowpoke Btard";
    int iq = 65;
    bool sciz = true;


    std::cout << &name << '\n' << &iq << '\n' << &sciz;
    

    return 0;
}