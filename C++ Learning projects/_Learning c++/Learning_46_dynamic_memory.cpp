#include <iostream>

/*Dynamic memory = allocated when the program is already running
                    allocating the momory in the heap, not the stack
                    new = operator for allocating a memory
                    delete = operator we should use after finishing using the memory to avoid memory leaks
                    
                    
                    makes the program more flexible, expecially with user inputs*/


int main()
{
    std::string *pCars = nullptr;

    int size;

    std::cout << "How many cars to input? ";
    std::cin >> size;
    std::cout << '\n';

    pCars = new std::string[size]; // in this example we allocating the memory in heap, the size of an array is defined by user input

    for (int i = 0; i < size; i++)
    {
        std::cout << "Model " << i + 1 << " name: ";
        std::cin >> pCars[i];
        std::cout << '\n';
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << "Model " << i + 1 << " name: " << pCars[i] << '\n';
    }
    
    

delete[] pCars; // important to add the brackets for the array
*pCars = nullptr;

return 0;
}