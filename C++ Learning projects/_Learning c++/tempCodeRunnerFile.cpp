#include <iostream>

class Base {
public:
    virtual void print() const {
        std::cout << "Printing from Base class" << std::endl;
    }
};

class Derived : public Base {
public:
    void print() const override {
        std::cout << "Printing from Derived class" << std::endl;
    }
};

void processObject(Base& obj) {
    obj.print(); // Вызов метода print() объекта obj
}

int main() {
    Derived derivedObj;
    processObject(derivedObj); // Передача объекта производного класса в функцию processObject
    return 0;
}
