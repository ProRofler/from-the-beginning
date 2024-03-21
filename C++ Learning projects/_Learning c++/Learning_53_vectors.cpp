#include <iostream>
#include <vector>
#include <string>

/*
Vectors - dynamic arrays that can increase and decrease their size
std::vector<> - in the angles you have to assign the datatype for the array
*/

int main()
{
    std::vector<std::string> Vec_1 = {"First string", "Second string", "Third string"};

    
    std::cout << "Element: " << Vec_1.back() << std::endl << "Array size: " << Vec_1.size() << std::endl << "Vector capacity " << Vec_1.capacity() << std::endl;
    
    std::string UserInput;
    std::cout << "Insert at the end test: ";
    getline(std::cin >> std::ws, UserInput);
    
    Vec_1.push_back(UserInput);
    std::cout << "Element: " << Vec_1.back() << std::endl << "Array size: " << Vec_1.size() << std::endl << "Vector capacity " << Vec_1.capacity() << std::endl;

    return 0;
}