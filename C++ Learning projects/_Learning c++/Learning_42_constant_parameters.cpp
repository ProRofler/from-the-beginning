#include <iostream>


void PrintVariables(const std::string &month, const int &day);

// const parameter is parameter that's read only
// makes the program more secure and conveys intent
// useful for references and pointers

int main()
{
    std::string month = "February";
    int day = 24;

    PrintVariables(month, day);

    return 0;    
}


void PrintVariables(const std::string &month, const int &day)
{
  //  month = "GLGLALGLSAG";
  //  day = 241241;
    std::cout << day << " " << month;
}