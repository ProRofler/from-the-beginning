#include <iostream>


/*null value = a special value that has no value
                when a pointer holds a null value it doesn't point to anything
                
                nullptr - keyword for a null point literal
                
                it's helful to determine if the adress was assigned or not
                
                
                dereferencing a null or pointing to a free memory will cause undefined behavior*/



int main()
{

    int *pInt = nullptr;
 
    int val1 = 15;

   // pInt = &val1;

    if (pInt) 
    {
        std::cout << *pInt << '\n';
    }
    
    else
    {
        std::cout << "Null pointer found!" << '\n';
        return -1;
    }


    return 0;
}