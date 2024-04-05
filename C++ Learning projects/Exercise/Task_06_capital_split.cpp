#include <string>
#include <iostream>
#include <algorithm>
#include <iomanip>

void stringToLower(std::string& str) 
{
    std::transform(str.begin(), str.end(), str.begin(), [](const char& c){ return std::tolower(c); });
}


int main ()
{
    std::string input;
    unsigned int safelength = 50;
    
    std::cout << "Input line: " << std::endl;
    getline(std::cin >> std::ws, input);
    if (input.size() > safelength);
    {
        input.resize(safelength);
    }
    

    for (int i = 0; i < input.size(); i++)
    {
        
        //std::cout << "Step " << i << '\n';
        bool up = std::isupper(input.at(i));

        if (up && input.at(i) && i != 0)
        {
            input.insert(i, " ");
            i++;
        }        
    }

    input.shrink_to_fit();
    stringToLower(input);

    std::cout << input;

    return 0;
}