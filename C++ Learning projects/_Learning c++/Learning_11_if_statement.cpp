#include <iostream>
#include <cmath>

int main () {
// ifs - sel explainatory
int exp;

std::cout << "What's your experience in the field?";
std::cin >> exp;

if (exp > 20) {
    std::cout << "You're overcvalified";
}

else if (exp >= 5) {
    std::cout << "Great! Your CV was sent";
}
else if (exp < 0) {
    std::cout << "Very funny";
}
else {
    std::cout << "Sorry brah not enough";
}
    return 0;
