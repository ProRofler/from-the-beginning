#include <iostream>

// sizeof() operator returns the size of the element in bytes


int main(){

    double dot = 2.5;
    int real = 4;
    char ch = 'A';
    std::string str;

    int realaray[] {1, 2, 3, 4, 5, 6, 7};
    double dotarray[] {1, 2, 3, 4, 50, 25.5};


    std::cout << "Double datatype is " << sizeof(dot) << " bytes \n";
    std::cout << "Integer datatype is " << sizeof(real) << " bytes \n";
    std::cout << "Character datatype is " << sizeof(ch) << " bytes \n";
    std::cout << "String datatype is " << sizeof(str) << " bytes \n"; // always 32 bytes because it's a reference to a memory adress
    std::cout << "Integer array datatype is " << sizeof(realaray) << " bytes \n"; //each element of array will add to size the amount of the size of a datatype
    std::cout << "Double array datatype is " << sizeof(dotarray) << " bytes \n";
    std::cout << "The amount of elements of the double array is " << sizeof(dotarray)/sizeof(double) << " elements \n"; // this is the way to find out the amount of elements in the array

        // let's iterate through loop and set the amount of loops based on the amount of elements in array

        for (int i = 0; i < sizeof(dotarray)/sizeof(double); i++)
        {
            std::cout << dotarray[i] << '\n';
        }


        //foreach loop eases the traversal through iterable dataset
        // first the variable must be declared and then iterated through : dots, the variable must be the same datatype!
        // the declared variable will represent the data from the loop

        for (int realloop : realaray)
        {
            std::cout << realloop << '\n';
        }
        
    

return 0;
}
