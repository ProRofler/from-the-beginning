#include <iostream>

using namespace std;

int main () {

int salary = 4000;
int yearly = salary * 12;
double tax = 0.13;

double salary_t = salary - salary * tax;
double yearly_t = salary_t * 12;
double steal = yearly - yearly_t;
double aed_r = 3.86;
double aed = yearly_t * aed_r; 

cout << "Yearly salary before tax will be: " << yearly << '\n';
cout << "Yearly salary after tax will be: " << yearly_t << "\n";
cout << "The amount stolen by government: " << steal << "\n";
cout << "The amount in AED after tax will be: " << aed << "\n";

    return 0;
}