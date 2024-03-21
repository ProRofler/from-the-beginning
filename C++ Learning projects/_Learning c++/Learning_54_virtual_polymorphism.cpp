#include <iostream>

class Obj_A
{
    protected:

    std::string name;

    public:

    virtual void ShowName()
    {
        this -> name = "Object A, base class";

        std::cout << "Name is: " << name << '\n';

    }
};

class Obj_B : public Obj_A

{
    
     void ShowName() override
    {
        Obj_A::name = "Object B, base class";

        std::cout << "Name is: " << name << '\n';

    }

};

class Obj_C : public Obj_B

{
    
    void ShowName() override
    {
        Obj_A::name = "Object C, base class";

        std::cout << "Name is: " << name << '\n';

    }

};

class Obj_D // Abstract class, it contains at least one pure virtual function - it can't be declared anywhere, only the derived classes
{
    protected:

    std::string name;

    public:

    virtual void ShowName() = 0; // pure virtual function, any derived class must declare it's own
};


class Obj_E : public Obj_D

{

    void ShowName() override
    {
        Obj_D::name = "Object E, from abstract class D";

        std::cout << "Name is: " << name << '\n';

    }    

};


int main()
{
    Obj_A *pObj = nullptr;

    Obj_A A;
    pObj = &A;
    pObj -> ShowName();

    Obj_B B;
    pObj = &B;
    pObj -> ShowName();

    pObj = &A;
    pObj -> ShowName();

    Obj_C C;
    pObj = &C;
    pObj -> ShowName();

    Obj_D *pObjAbstract;
    
    Obj_E E;
    pObjAbstract = &E;
    pObjAbstract -> ShowName();

    return 0;
}