#include <iostream>

// array = a data structure that can hold a multiple values
// values are accessed via index number starting with zero
// must be the same datatype


int main(){

    int num[] = {1, 2, 3, 4};

    double num2[1]; //variables of the array can be declared later but you have to set the size of the array

    num2[0] = 1,4;
    num2[1] = 3.2;

    std::cout << num[2] << '\n' << num2[1];

return 0;
}