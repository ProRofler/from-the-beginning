#include <iostream>

     #define __PRETY_FUNCTION__ __FUNCTION__ 


 void foo(){
     std::cout << __PRETY_FUNCTION__;
 }

#define UNUSED(variable) (void)variable

int main() {

    int i = 0;

    foo();

    UNUSED(i);
    
    return 0;
}