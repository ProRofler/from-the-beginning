#include <iostream>
#include <cmath>

// meters to feet and vice versa practice

int main () {

char measure;
double conv;



std::cout << "**************** Converter **************** '\n'";
std::cout << "Please choose feet(f) or meters(m)? '\n'";
std::cin >> measure;

//std::cout << "How much? '\n'";
//std::cin >> conv;

switch (measure) {
    case 'f':
std::cout << "How much feet to convert?"  << '\n';
std::cin >> conv;
std::cout << "result: " << conv << " feet equlas " << conv*0.3048 << " meters" << '\n';
    break;

    case 'm':
std::cout << "How much meters to convert?"  << '\n';
std::cin >> conv;
std::cout << "result: " << conv << " meters equals " << conv*3.2808 << " feet" << '\n';
    break;

   default:
std::cout << "Incorrect measurement unit"  << '\n';
    break;

}





std::cout << "******************************************";


    return 0;
}
