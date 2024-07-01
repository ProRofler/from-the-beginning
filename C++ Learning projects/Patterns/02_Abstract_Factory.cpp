#include <iostream>
#include <memory>

class cpu {
 public:
  ~cpu() = default;
  virtual void compute() = 0;
};

class ram {
 public:
  ~ram() = default;
  virtual void read_write() = 0;
};

// ARM
class arm_cpu : public cpu {
  void compute() override { std::cout << "ARM computing\n"; }
};

class arm_ram : public ram {
  void read_write() override { std::cout << "ARM RAM operation\n"; }
};

// x86
class x86_cpu : public cpu {
  void compute() override { std::cout << "x86 computing \n"; }
};

class x86_ram : public ram {
  void read_write() override { std::cout << "x86 RAM operation\n"; }
};

// fabric interface
class operations {
 public:
  ~operations() = default;
  virtual std::unique_ptr<cpu> cpu_operation() = 0;
  virtual std::unique_ptr<ram> ram_operation() = 0;
};

class arm_operations : public operations {
  std::unique_ptr<cpu> cpu_operation() override {
    return std::make_unique<arm_cpu>();
  }

  std::unique_ptr<ram> ram_operation() override {
    return std::make_unique<arm_ram>();
  }
};

class x86_operations : public operations {
  std::unique_ptr<cpu> cpu_operation() override {
    return std::make_unique<x86_cpu>();
  }

  std::unique_ptr<ram> ram_operation() override {
    return std::make_unique<x86_ram>();
  }
};

// client code

void client_code(operations& op) {
  auto cpu = op.cpu_operation();
  auto ram = op.ram_operation();

  cpu->compute();
  ram->read_write();
}

int main() {
  std::unique_ptr<operations> op;

  op = std::make_unique<arm_operations>();
  client_code(*op);

  op = std::make_unique<x86_operations>();
  client_code(*op);

  return 0;
}