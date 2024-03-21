#include <iostream>
#include <cmath>

// && checks if both of conditions are true
// || checks if at least one of conditions is true
// ! - reverses the logical stand



//using namespace std;

int main () {

double w;
double h;
double hm;
double bmi;

std::cout << "Enter your weight in kg '\n'";
std::cin >> w;
std::cout << "Enter your height in cm '\n'";
std::cin >> h;

hm = h/100;
bmi = w/pow(hm,2);

//std::cout << bmi;

if (bmi < 18.4 || bmi > 25) {
    std::cout << " Your BMI is " << bmi << " and it's outside of a normal range";
}

else {
    std::cout << " Your BMI is " << bmi << " and it's within the normal range";
}
    return 0;
}