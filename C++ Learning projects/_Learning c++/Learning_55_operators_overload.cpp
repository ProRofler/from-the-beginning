#include <iostream>

class TD
{

public:

int x,y,z;

TD(){ x = y = z = 0;}
TD(int x, int y, int z){this -> x = x; this -> y = y; this -> z = z;}

TD operator+(TD op);
TD operator-(TD op);
TD operator-=(TD op);
TD operator=(TD op);
TD operator/(TD op);
TD operator++(); // prefix form of increment operator
TD operator++(int null); // postfix form of increment operator

friend TD operator*(TD op1, TD op2); //operators can be overloaded with friend functions
friend TD operator*(TD op1, int op2); 

TD operator()(const TD op)
{

    x = x * (op.x *2);
    y = 0;
    z = 0; 


    return *this;
}


};

TD TD::operator+(const TD op)
{

    TD temp;

    temp.x = x + op.x;
    temp.y = y + op.y;
    temp.z = z + op.z;

    return temp;
}

TD TD::operator-(const TD op)
{

    TD temp;

    temp.x = x - op.x;
    temp.y = y - op.y;
    temp.z = z - op.z;

    return temp;
}

TD TD::operator-=(const TD op)
{

    x -= op.x;
    y -= op.y;
    z -= op.z;

    return *this;
}

TD TD::operator/(const TD op)
{

    TD temp;

    temp.x = x / op.x;
    temp.y = y / op.y;
    temp.z = z / op.z;

    return temp;
}

TD TD::operator=(const TD op)
{

    x = op.x;
    y = op.y;
    z = op.z;

    return *this;
}

TD TD::operator++()
{

    x++;
    y++;
    z++;

    return *this;
}

TD TD::operator++(const int null)
{

    x++;
    y++;
    z++;

    return *this;
}

TD operator*(const TD op1, const TD op2)
{

    TD temp;

    temp.x = op1.x * op2.x;
    temp.y = op1.y * op2.y;
    temp.z = op1.z * op2.z;

    return temp;
}

TD operator*(const TD op1, const int op2)
{

    TD temp;

    temp.x = op1.x * op2;
    temp.y = op1.y * op2;
    temp.z = op1.z * op2;

    return temp;
}


int main() 
{

    TD A(5, 4, 3), B(2, 6, 8), C;


    C = A + B;
    C = C / C;
    A = A * 2;

    A(B);

    std::cout   << "OBJ C: " << C.x << " " << C.y << " " << C.z << " " << std::endl
                << "OBJ A: " << A.x << " " << A.y << " " << A.z << " " << std::endl;

    return 0;
}