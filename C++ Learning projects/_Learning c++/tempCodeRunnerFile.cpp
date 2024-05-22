#include <iostream>
#include <vector>
#include <string>
#include <utility>

     #define __PRETTY_FUNCTION__ __FUNCTION__ 


 void foo(){
     std::cout << __PRETTY_FUNCTION__;
 }

struct SIncaps
{
private:
    int a = 25;
};




#define UNUSED(variable) (void)variable

int main() {

    int i = 0;
    // foo();
    UNUSED(i);

    const auto size = 4ull;
    int arr[size];
    
    std::vector<std::string> list_1 {"One", "Two", "Three"};
    std::vector<std::string> list_2;

    SIncaps I;

    list_2.push_back(list_1.back());
    list_1.pop_back();

    //I.a = 14;

    std::cout << list_2.front() << ' ' << list_1.back();



    return 0;
}