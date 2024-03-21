#include <iostream>

// pointer - a variable that contains an adress of an another variable
//              sometimes it's easier and more efficient to work with adress

// USING
// & - adress-of operator
// * - dereference operator

// pointer must be the same datatype

int main()
{
    std::string cpu = "Intel Core i7";

    int gen[3] = {1, 2, 3};

    std::string *pCpu = &cpu; //standard naming convention is 'p' before a name

    int *pGen = gen; // since the array itself by default returning the adress, we dont need to use adress-of operator

    std::cout << "Output without dereference op will result in displaying memory adress: " << pCpu << '\n' << "Output with dereference op will result in displaying the variable itself: " << *pCpu << '\n';

    std::cout << "Outputing array pointer with dereference operator will return first element of an array: " << *pGen << '\n';

    return 0;
}