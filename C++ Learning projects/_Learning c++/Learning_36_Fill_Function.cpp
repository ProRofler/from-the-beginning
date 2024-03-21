#include <iostream>

// Fill() - fuction to fill a range of elements with a specified value
// fill(begin, end, value)

int main(){

    const int SIZE = 30;
    std::string test[SIZE];
    
    fill(test, test + (SIZE/3), "LAL KEK");
    fill(test+(SIZE/3), test + ((SIZE/3)*2), "KEK LAL");
    fill(test+((SIZE/3)*2), test + SIZE, "ROFL");


    for(std::string ForTest : test){
        std::cout << ForTest << '\n';
    }


}