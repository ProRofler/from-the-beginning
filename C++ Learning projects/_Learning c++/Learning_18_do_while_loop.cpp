#include <iostream>
#include <istream>
#include <string>

// do while - does block of code and THEN checks the statement

//using namespace std;
 int main () {

std::string name = "Default";

std::cout << "Choose your username" << '\n' << "Note: it must be no longer than 10 characters" << '\n' << "Username: ";
std::cout << "Current username: " << name << '\n';
getline (std::cin, name);


do {
        std::cout << '\n' << "Username can't be empty \n" << "Please enter username: ";
    getline (std::cin, name);
} while (name.empty()); 

if (name.length() <= 10) {
    std::cout << '\n' << "Welcome " << name << "!";
}
else {
    name.erase(10);
    std::cout << '\n' <<  "You're username is too long and will be reduced to ten characters" << '\n' << "Your new username is " << name;
}
    return 0;
}