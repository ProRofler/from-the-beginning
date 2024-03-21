#include <iostream>
#include "version.h"

int main(int argc, char * argv[])
{
    std::cout << "Cmake build HELLO!" << '\n';
    std::cout << "Version number: " << version::Version() << '\n';

    return 0;
}