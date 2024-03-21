#include <iostream>


// function name + parameters know as function signature
// fucntions can share a same name as long as they have a different set of parameters

using namespace std;

void testFunction() {
    cout << "Overload 1: \n";
}    
void testFunction(string test1) {
    cout << "Overload 1: " << test1 << '\n';
}
void testFunction(string test1, string test2) {
    cout << "Overload 1: " << test1 << " AND " << test2 << '\n';
}   
void testFunction(int quantity, string test1, string test2) {
    cout << "Enter the integer amount ";
    cin >> quantity;
    cout << "Test integer " << quantity << " Overload 1: " << test1 << " AND overload 2: " << test2 << '\n';
}   


int main() {

    int qua;
    testFunction(qua, "Input main 1", "Input main 2"); // the amount of input will choose the corresponding function
    return 0;
}

