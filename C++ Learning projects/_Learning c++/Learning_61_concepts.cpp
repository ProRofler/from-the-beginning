#include <array>
#include <concepts>
#include <iostream>

// bool type concept
template <typename T>
concept is_string = std::is_same<T, std::string>::value;

template <is_string T>
void read_string(T str) {
  std::cout << str << std::endl;
}

// complex condition type of concept
template <typename T>
concept is_even = requires(T value) {
  { value % 2 == 0 } -> std::convertible_to<bool>;
};

template <is_even T>
void check_even(T) {
  std::cout << "The value provided is even" << std::endl;
}

int main() {
  std::string str = "Hello World!";

  read_string(str);
  check_even(4);

  return 0;
}
