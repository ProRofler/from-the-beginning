#include <iostream>
#include <ctime>

using namespace std;


// using random numbers which not truly random but close



int main () 
{
    srand(time(NULL)); // within the prentacies we define the seed

    int a = rand() % 15 +1; // this will generate a random number between 1 and 15
    int b = rand() % 15 +1;
    int c = a + b;
    int i;

for (i != c; i != c; i != c) {
    cout << "Enter the sum of " << a << " and " << b << '\n' << "Sum:";
    cin >> i;
}

cout << "Correct!";

return 0;
}
