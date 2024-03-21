#include <iostream>
#include <cmath>

// switch - instead of many else if
// case goes after switch and also break
// works with characters, the should be in ' example: case 'A':

int main () {

int day;
std::cout << "Which day of the week?";
std::cin >> day;

switch (day) // you check agains the value in prentices
{
case 1:
    std::cout << "It's Monday baby!";
    break;
case 2:
    std::cout << "It's Tuesday baby!";
    break;
case 3:
    std::cout << "It's Wednesday baby!";
    break;
default:
std::cout << "Nice ROFL";
    break;    
}

    return 0;
}