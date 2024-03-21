#include <iostream>

/*Recursion - approach in which you invoke a function within a fuction
Similar to makin a loops but slightly different, sometimes more readable. Potentially easier to write

disadvantages - slower and requires more memory*/


int FactorialIterative(const int &num); // standard iterative approach via for loop
int FactorialRecursion(int num); // recursive approach via if statement, be careful not to create an endless loop'
int RecursionPractice(int Value[], int Size);



int main() // lets write a factorial example with recursion and iterative approach
{

int Array[] = {2, 3, 4, 2, 4, 5, 8};
int Size = sizeof(Array)/sizeof(Array[0]);

//FactorialIterative(10);
//FactorialRecursion(4);

std::cout << RecursionPractice(Array, Size - 1);

return 0;
}


int FactorialIterative(const int &num)
{

    int result = num;

    for (int i = 1; i < num -1; i++)
    {
        result *= (num - i);
        std::cout << "Step: " << i << " Iterative approach: " << result << '\n';
    }
    
    std::cout << "\nIterative approach: " << result << '\n';
    return result;
}

int FactorialRecursion(int num)
{

    // can't say that it's easier to understand rather than traditional loop, in this example the output will be backwards

    if(num > 1)
    {
        int result = num * FactorialRecursion(num - 1); // it can be simply - return num * FactorialRecursion(num - 1); but I added the result variable to make the output for each step
        std::cout << "Step number: " << num << " Recursive approach: " << result << '\n';
        return result;
    
    }
    
    else
    {
        std::cout << "Last iteration, returning zero\n";
        return 1;
    }


    std::cout << "Returning zero";
    return 0;
     
}

//simple recursion for practice, objective is to find the sum of a numbers in array
int RecursionPractice(int Value[], int Size)
{

    if (Size >= 0)
    {
        
        std::cout << "Size: " << Size << " Value: " << Value[Size] << '\n';
        return Value[Size] + RecursionPractice(Value, Size - 1);
        
    }
    
    else 
    {
    return 0;
    }
    
    return -1;
}