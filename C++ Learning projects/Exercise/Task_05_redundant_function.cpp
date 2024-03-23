#include <iostream>

std::string Redundant(std::string value);
std::string ReturnString(std::string str);



int main()
{

    const std::string Value1 = Redundant("Redundant test string");

    std::cout << Value1 << '\n';

    return 0;
}


std::string Redundant(std::string value)
{
    value = value + " | ADDITIONAL string value from function";
    return ReturnString(value);
}


std::string ReturnString(std::string str)
{
    return str;
}