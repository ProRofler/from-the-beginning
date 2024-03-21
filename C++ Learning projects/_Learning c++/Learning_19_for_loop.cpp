#include <iostream>
#include <random>

using namespace std;

// for - loops the code and must contain three check statements
// break - stops the loop
// continue - skip the iteration

int main () 
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(1, 5); // Define the range of random numbers
    int rn1 = dis(gen); // Generate a random number within the specified range
    int rn2 = dis(gen); // Generate a random number within the specified range
    int rn3 = dis(gen); // Generate a random number within the specified range

    int a = rn1;
    int b = rn2;
    int c = a + b;
    int i;

for (i != c; i != c; i != c) {
    cout << "Enter the sum of " << a << " and " << b << '\n' << "Sum:";
    cin >> i;
}

cout << "Correct!";

return 0;
}