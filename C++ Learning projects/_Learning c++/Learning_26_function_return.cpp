#include <iostream>


// return - returns a value back to the spot
// a function has to start with the datatype in case if it has to return a value


using namespace std;


string constr (string str1, string str2);

    int main(){

string fn = "Dam";
string ln = "Pier";
string cn = constr (fn, ln);


cout << "Hey mr. " << cn << '\n';
                return 0;  
}

string constr (string str1, string str2) {
    return str1 + " " + str2;
}

