#include <iostream>
#include <limits>
#include "Clear_input_buffer.h"

void clearInputBuffer()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  
}