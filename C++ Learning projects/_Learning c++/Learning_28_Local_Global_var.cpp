#include <iostream>

/*
local variables declared inside of fuctions
global variables are in global namespace and declared in the header

fucntions can't see into each other

local variables are adressed first and the global ones after]=
with the scope :: we can force using the global variable
*/

int numF = 3;

void numPrint(int input);

int main(){
    int num = 1; // declaring a local variable
    numPrint(num);


    return 0;
}

void numPrint(int input){
    int numF = 2;
    std::cout << "Number from main: " << input << '\n' << "Number from fucntion: " << numF << '\n' << "Number from Global: " << ::numF;
    
}