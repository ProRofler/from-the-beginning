#include <iostream>

using namespace std;

// for - loops the code and must contain three check statements
// break - stops the loop
// continue - skip the iteration

int main()
{


for (int a = 1; a <= 10; a++) {
    if (a == 5) {
        //break; //this will stop the loop
        continue; // this skips the iteration
    }
    
    cout << a << '\n';
} 


}