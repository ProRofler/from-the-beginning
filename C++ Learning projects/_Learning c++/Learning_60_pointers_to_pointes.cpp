#include <iostream>

int main(int argc, char * argv[]){

    int x = 5;
    int y = 9;

    int *p = &x;
    *p = 8;

    int **q = &p;
    *q = &y;

    int ***r = &q;

    std::cout << x << '\n'
              << p << ' ' << *p << '\n'
              << q << ' ' << *q << ' ' << **q << '\n'
              << r << ' ' << *r << ' ' << **r << ' ' << ***r << '\n';

    return 0;
}