#include <iostream>

/*
Struct - a speccial structure which can contain related variables under one name
It can contain different datatypes
they're known as "members
members can be accessed with . "Class Member Access Operator"
*/

struct Schiz
{
    std::string Name;
    int Age;
    bool OnPills = true; //you can set the defaul value for a variable in a struct
} PatientZero; //we can declare the variable of the sctructure type right away



union SchizUnited // function like struct, but this one will share the same memory blocks. The size of a memory allocated will equal to the biggest datatype
{
    bool Guilty = false;
    short int sentence;
    double ratio;
    std::string LastWords;

};



int main()
{
    Schiz *pSchiz, Patient3; // making a pointer to a structure
    pSchiz = &Patient3; // assgning a pointer to a variable

    Schiz Patient1;
    Patient1.Name = "Goblak";
    Patient1.Age = 70;

    Schiz Patient2;
    Patient2.Name = "Kamikadze D";
    Patient2.Age = 37;
    Patient2.OnPills = false;

    pSchiz -> Name = "Rybnikov(F)";
    pSchiz -> Age = 36;
    pSchiz -> OnPills = false;

    std::cout   << Patient1.Name << '\n'
                << Patient1.Age << '\n'
                << Patient1.OnPills << "\n\n";

    std::cout   << Patient2.Name << '\n'
                << Patient2.Age << '\n'
                << Patient2.OnPills << "\n\n";

    std::cout   << PatientZero.Name << '\n'
                << PatientZero.Age << '\n'
                << PatientZero.OnPills << "\n\n";

    if (pSchiz)
    {
    
    std::cout   << pSchiz -> Name << '\n'
                << pSchiz -> Age << '\n'
                << (*pSchiz).OnPills << "\n\n"; // another way of dereferecing a pointer, accesing a member of a structure
    }
    else
    {
        std::cout << "Null pointer found!\n";
    }
    
    std::cout   << "Size of union: " << sizeof(SchizUnited) << " bytes" << '\n'
                 << "Size of a structure: " << sizeof(Schiz) << " bytes" << '\n';

    return 0;
}