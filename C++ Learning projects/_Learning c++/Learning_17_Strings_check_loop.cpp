#include <iostream>
#include <string>


// while - repeats the check in a loop until statement is granted

 int main () {
/*
    using std::cout;
    using std::string;
    using std::cin;
*/
std::string name;

std::cout << "Choose your username" << '\n' << "Note: it must be no longer than 10 characters" << '\n' << "Username: ";
    getline (std::cin, name);

while (name.empty()) {

    std::cout << '\n' << "Username can't be empty \n" << "Please enter username: ";
    getline (std::cin, name);
}

if (name.length() <= 10) {

    std::cout << '\n' << "Welcome " << name << "!";
}
else {
    name.erase(10);
    std::cout << '\n' <<  "You're username is too long and will be reduced to ten characters" << '\n' << "Your new username is " << name;
}
    return 0;
}