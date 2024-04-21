#include <iostream>

struct BaseException
{
    virtual const char * GetException() const = 0;
};


struct DivideByZero : public BaseException
{
    const char * GetException() const override
    {
        return "Divide by zero!";
    }
};

struct NotSupported : public DivideByZero
{
     const char * GetException() const override
    {
        return "Not supported!";
    }
};

void ThrowDivide()
{
    throw DivideByZero{};
}

void ThrowNotSupported()
{
    throw NotSupported{};
}


double Division (double a, double b)
{
    if (b == 0)
        throw std::runtime_error("Divided by zero?");
    return a/b;
}


int main()
{

    try
    {
        double c = Division(5, 0);
        std::cout << "Result: " << c << '\n';
        ThrowDivide();
        ThrowNotSupported(); //this is going to be sliced to the parent class unless handled properly
    }
    
    catch(NotSupported e) // as compiler warns here, the hierarchy should be in reversed order
    {
        std::cerr << "Exception: " << e.GetException() << '\n';   
    }
    catch(DivideByZero& e)
    {
        std::cerr << "Exception: " << e.GetException() << '\n';   
    }
    catch(const std::runtime_error& e)
    {
        std::cerr << "Exception: " << e.what() << '\n';
    }
    catch(...)
    {
        std::cerr << "Unknown exception" << '\n';
    }
    

    return 0;
}