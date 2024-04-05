#include <iostream>
#include <string>

using std::string;

union UTMP
{
    float a;
    string b;
};


int main() {
    UTMP * tmp;

    //tmp -> a = 1.1f;
    tmp-> b = "HEEEEEEYA";

    string added = [](const string &str){return str + " " + "LAMBDAED";};

    std::cout << added(tmp->b) << '\n';

    return 0;
}