#include <iostream>
#include <string>

// << this is for extraction
// >> this is for insertion 
// std::getline(std::cin, color); - getline function goes if you need to input some text with spaces 
// std::getline(std::cin >> std::ws, color); - to fix the issue with previosly inserted info
// std::endl - new line and clear the buffer?




int main() {

std::string color;
int rank;

std::cout << "What is your rank?";
std::cin >> rank;

std::cout << "What is the color of night?";
std::getline(std::cin >> std::ws, color);

std::cout << color << " my brother" << '\n';
std::cout << rank << " is your rank";



    return 0;
}