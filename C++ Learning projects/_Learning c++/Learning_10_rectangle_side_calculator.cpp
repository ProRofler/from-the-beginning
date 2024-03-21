#include <iostream>
#include <cmath>



int main () {

double a;
double b;
double c;

std::cout << "Enter the side of A ";
std::cin >> a;

std::cout << "Enter the side of B ";
std::cin >> b;

c = sqrt(pow(a, 2) + pow(b,2)); //made by the formula

std::cout << "C equals " << c;


    return 0;
}