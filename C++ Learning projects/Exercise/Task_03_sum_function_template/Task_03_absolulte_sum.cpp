#include <iostream>
#include <vector>
#include "Task_03_absolulte_sum.h"

int main()
{
    std::vector<int> Values = {2, 4, -5, -3, 15, 9, 4};
    int Size = Values.size();

    std::cout << "Array size: " << Size << '\n';
    std::cout << "Absolute sum of array: " << AbsoluteSum(Values) << '\n';
    std::cout << "Absolute sum of array with recursion: " << AbsoluteSumRecursion(Values, Size -1) << '\n';

    return 0;
}



int AbsoluteSumRecursion(const std::vector<int> &Values, int Size)
{
    if (Size >= 0)
    {
        return Values[Size] + AbsoluteSumRecursion(Values, Size -1);
    }
    
    else
    {
        return 0;
    }

    return -1;
}