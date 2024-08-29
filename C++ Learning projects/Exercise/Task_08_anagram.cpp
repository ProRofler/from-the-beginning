#include <iostream>
#include <string>
#include <vector>

// strings a b find if they're anagrams

bool is_anagram(const std::string& a, const std::string& b) {
  std::vector<int> chars_1(256, 0);
  std::vector<int> chars_2(256, 0);

  for (int i = 0; i < a.length(); i++) {
    chars_1.at(a.at(i)) = chars_1.at(a.at(i)) + 1;
  }

  for (int i = 0; i < b.length(); i++) {
    chars_2.at(b.at(i)) = chars_2.at(b.at(i)) + 1;
  }

  return chars_1 == chars_2 ? true : false;
}

int main() {
  switch (is_anagram("takol", "lokat")) {
    case true:
      std::cout << "It's anagram\n";
      break;

    default:
      std::cout << "It isn't anagram\n";
      break;
  }

  return 0;
}