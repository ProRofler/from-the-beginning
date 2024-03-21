#include <iostream>
int main() {
    const double PI = 3.14159;
    // cosnt - does not allow changing the value of a variable, gives an error when trying to compile
    double rad = 120;
    double circ = 2 * PI * rad;


    std::cout << circ << "cm";
    
    return 0;   
}