#include <iostream>
#include <cmath>

    //std::cout << "What's your bodyfat?" << '\n' ;
        //std::cin >> fat;
            //fat > 30 ? std::cout << "You're fatso!" : std::cout << "Good job!" ;
            // so basically you can check the statement with the question mark ---    bool ? command 1 : command 2; 

int main () {

    using std::cout;
    using std::cin;

    bool fat = false;
    char yn;

bool LoopActive = true;

while (LoopActive){
        cout << "are you over 30% bodyfat y/n?" << '\n';
            cin >> yn;

    switch (yn) {

        case ('y'):
            fat = !fat;
            LoopActive = false;
        break;

        case ('n'):
            fat = fat;
            LoopActive = false;
        break;

        default:
            cout << "Please use only y/n answer";
    } 
}

//cout << (fat == true ? "You're fat! \n" : "Good job! \n");
cout << (fat ? "You're obese! \n" : "Good job! \n"); //I left this one as a more efficient and readable here
// fat ? cout << "You're fat! \n" : cout << "Good job! \n";
    system("pause"); // this one prevent console from closing, however it put's the "Press any key to continue..." message
    //cin.get(); // this one is supposedly expected to make the console wait for input before closing and returning zero, hovewer it seems like we're getting an empty line that's picked by it
    //exit(0); // this one supposed to kill the program
    return 0;
}