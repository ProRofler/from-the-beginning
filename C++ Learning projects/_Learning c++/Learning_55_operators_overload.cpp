#include <iostream>

class TD
{

public:

int x,y,z;

TD(){ x = y = z = 0;}
TD(int x, int y, int z){this -> x = x; this -> y = y; this -> z = z;}

TD operator+(TD op);
TD operator=(TD op);
TD operator/(TD op);

};

TD TD::operator+(TD op)
{

    TD temp;

    temp.x = x + op.x;
    temp.y = y + op.y;
    temp.z = z + op.z;

    return temp;
}

TD TD::operator/(TD op)
{

    TD temp;

    temp.x = x / op.x;
    temp.y = y / op.y;
    temp.z = z / op.z;

    return temp;
}

TD TD::operator=(TD op)
{

    x = op.x;
    y = op.y;
    z = op.z;

    return *this;
}

int main() 
{

    TD A(5, 4, 3), B(2, 6, 8), C;

    C = A + B;
    C = C / C;

    std::cout << C.x << " " << C.y << " " << C.z << " " << std::endl;

    return 0;
}