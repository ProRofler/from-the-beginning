#include <iostream>
#include <string>

// int this example we're taking the user input for an array but the size of an array is defined. So it's a static memory


int main(){

    std::string cars[5];
    std::string temp;
    int ArraySize = sizeof(cars)/sizeof(cars[0]);

    for (int i = 0; i < ArraySize; i++){

        std::cout << "Enter letter 'q' to quit or the name for the car #" << i + 1 << ": ";
        getline(std::cin >> std::ws, temp);

        if (temp == "q"){
            break;
        }
        else{
            cars[i] = temp;
        }
        

    }


    for(int i =0; !cars[i].empty(); i++){
        std::cout << "Your choice " << cars[i] << '\n';
    }


}