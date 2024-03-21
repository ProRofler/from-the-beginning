#include <iostream>


/*
enums - a set of user defined datatype
it corresponds with the integer value
value will be assigned automatically starting from zero if not explicitly defined by user
great for a set of potential options
*/

enum EInstruments
{
    Guitar = 1,
    Ukulele = 2,
    Piano = 3,
    Drums = 4
};



enum class ECBrands // c++ introduced consepts
{
    Abibas,
    Gussi,
    Crapsiaga
};


int main()
{

    EInstruments Instrument = Guitar;

    ECBrands Brand = ECBrands::Abibas; // enums class requires explicit scoping

    switch (Instrument)
    {
    case Guitar:
        std::cout << "It's a guitar!\n";
        break;

    case Ukulele:
        std::cout << "It's a ukulele!\n";
        break;

    case Piano:
        std::cout << "It's a piano!\n";
        break;    

    default:
        std::cout << "It's a drums!\n";
        break;
    }

    switch (Brand)
    {
    case ECBrands::Abibas:
        std::cout << "It's Abibas!\n";
        break;

    case ECBrands::Gussi:
        std::cout << "It's Gucci!\n";
        break;  

    default:
        std::cout << "It's Crapsiaga!\n";
        break;
    }

    return 0;
}