#include <iostream>
#include <random>


using namespace std;

int main(){

int a;
int b;
char c;

    random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<int> dis(1, 40); // Define the range of random numbers
        int rn1 = dis(gen); // Generate a random number within the specified range
        int rn2 = dis(gen); // Generate a random number within the specified range
        int rn3 = dis(gen); // Generate a random number within the specified range

//cout << "Input a:";
//cin >> a;
//cout << "Input b:";
//cin >> b;
//cout << "Input c:";
//cin >> c;


for (int i = 1; i <= rn1; i++){
    for (int j = 1; j <= rn2; j++){
            
        if (i == rn3) {
            continue;
        }
                cout << i << " ";

    }

                cout << '\n';

}
    
   
} 


