#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

// namespace is a solution to nameing conflicts in a large projects. It allows each entity to have a unique name


int main() {

using namespace first;
using std::cout;

double y = 5.25;

cout << x << '\n';
cout << first::x << '\n';
cout << second::x << '\n';
cout << y;
return 0;
}