#include "Combinations.h"


int main()
{

   
    std::vector<int> comb = {0};

    int size = comb.size();

    std::cout << "Amount of permutations: " << CountCombinations(comb, size) << '\n';

    return 0;
}


int CountCombinations(const std::vector<int> &comb, const int &size)
{

    int result = 1;

    for (int i = 0; i < size; i++)
    {
        result *= comb[i];
    }
    

    return result;
}