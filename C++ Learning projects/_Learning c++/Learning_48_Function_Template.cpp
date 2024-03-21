#include <iostream>

/*Function template is used to create many overloaded functions while using the same code
they can accept as many datatypes as required*/

template <typename T, typename U> //here we're declaring two possible datatypes for the function. Important to understand that the datatype will be assigned upon input

auto ReturnMin (T Value1, U Value2) //auto will allow the compiler to decide which datatype should be returned
{
    return (Value1 < Value2) ? Value1 : Value2;
}


int main()
{
    std::cout << ReturnMin(55, 8.24) << '\n';   

    return 0;
}