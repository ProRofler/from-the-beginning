#include <iostream>

// to pass the variable by reference and not a value we need to use &(adress-of-operator)
// when we pass by value we pass the copy and when we pass by reference - we're referencing the variable, it's faster and more efficient

void ReferenceSwap(std::string &RefTest1, std::string &RefTest2);
void ValueSwap(std::string ValTest1, std::string ValTest2);


int main()
{

    std::string RefTest1 = "PASSED BY REFERENCE 1";
    std::string RefTest2 = "PASSED BY REFERENCE 2";
    std::string ValTest1 = "PASSED BY VALUE 1";
    std::string ValTest2 = "PASSED BY VALUE 2";

    std::cout << "\n***************************PASSED BY REFERENCE************************\n";

    ReferenceSwap(RefTest1, RefTest2);
    std::cout << "Reference test 1 = " << RefTest1 << " at adress: " << &RefTest1 << '\n' << "Reference test 2 = " << RefTest2 << " at adress: " << &RefTest2 << '\n';
    std::cout << "\nAs we can see in this example, the values are swapped as expected and we have the same memory adresses withn the both main and void functions\n\n";


    std::cout << "*************************************************************************\n";

    std::cout << "\n***************************PASSED BY VALUE************************\n";
    
    ValueSwap(ValTest1, ValTest2);
    std::cout << "Value test 1 = " << ValTest1 << " at adress: " << &ValTest1 << '\n' << "Value test 2 = " << ValTest2 << " at adress: " << &ValTest2 << '\n';
    std::cout << "\nAs we can see in this example, the values are NOT swapped as expected and we have the different memory adresses withn the both main and void functions\n\n";
    std::cout << "*************************************************************************\n";




    return 0;
}


void ReferenceSwap(std::string &RefTest1, std::string &RefTest2)
{
    std::string temp;

    temp = RefTest1;
    RefTest1 = RefTest2;
    RefTest2 = temp;


     std::cout << "Void Reference test 1 adress = " << &RefTest1 << '\n' << "Void Reference test 2 adress = " << &RefTest2 << '\n';

}

void ValueSwap(std::string ValTest1, std::string ValTest2)
{
    std::string temp;

    temp = ValTest1;
    ValTest1 = ValTest2;
    ValTest2 = temp;


     std::cout << "Void Value test 1 adress = " << &ValTest1 << '\n' << "Void Value test 2 adress = " << &ValTest2 << '\n';

}