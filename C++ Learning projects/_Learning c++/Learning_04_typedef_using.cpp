#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t
//typedef std::string text_t;
//typedef int number_t;

// typedef was replaced by 'using' in most common cases

using number_t = int;
using text_t = std::string;



int main(){

    text_t FirstName = "Damien";
    number_t lifetime = 15;

std::cout << FirstName << '\n';
std::cout << lifetime << '\n';


    return 0;
}
