#include <iostream>
#include <memory>

//main abstract product, this is interface
class product{
 public:
    product() = default;
    ~product() = default;
    virtual void action() = 0;
};

class product_1 : public product{
  public:
    void action() final{
        std::cout << "Hey! I'm product 1!" << '\n';
    }
};

class product_2 : public product{
  public:
    void action() final{
        std::cout << "Hey! I'm product 2!" << '\n';
    }
};

// main creator, abstract. It's meant to define the way of making an object
class creator{
  public:
    creator() = default;
    ~creator() = default;
    virtual std::unique_ptr<product> create() = 0;

    void make_action(){
        std::cout << "Manufacturing a product\n";
        std::unique_ptr<product> product = create();
        product->action();
    }
};

class creator_1 : public creator{
  public:
    virtual std::unique_ptr<product> create() override{
        std::cout << "Creating product 1" << '\n';
        return std::make_unique<product_1>();
    }
};  

class creator_2 : public creator{
  public:
    virtual std::unique_ptr<product> create() override{
        std::cout << "Creating product 2" << '\n';
        return std::make_unique<product_2>();
    }
};




int main(){

const auto product_1_creator = std::make_unique<creator_1>();
const auto product_2_creator = std::make_unique<creator_2>();

product_1_creator->make_action();
product_2_creator->make_action();

const auto product_1_result = product_1_creator->create();
const auto product_2_result = product_2_creator->create();

product_1_result->action();
product_2_result->action();

    return 0;
}