#include <iostream>
#include <set>

#define UNUSED(variable) (void)variable

int main() {
  int sum = 0;
  std::multiset<int> in = {-4, -15, -25};

  for (auto i = in.find(0); i != in.end(); i++) {
    sum += *i;
  }

  std::cout << sum << '\n';

  return 0;
}