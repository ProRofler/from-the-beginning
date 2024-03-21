#include <iostream>

int main() {


// integer - whole number
    int x ; //declaration
    x = 5; // assigned 5 to x var
    int y = 14;
    int sum = x + y;

    // double - contains decimal
    double c = 14.25;

    // char - single characte
    char grade = 'A';
    char currency = '$';

    // bool - state true or false
    bool student = true;
    bool power = false;
     
    // string - sequenec of a text
    std::string name = "Damien";

    std::cout << "Sup " << name << '\n';
    std::cout << currency << '\n';
    std::cout << sum << '\n'; 

    return 0;
}