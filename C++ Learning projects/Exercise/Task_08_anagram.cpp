#include <iostream>
#include <string>
#include <vector>

// strings a b find if they're anagrams

bool is_anagram(const std::string& a, const std::string& b) {
  if (a.length() != b.length()) return false;

  std::vector<int> chars_1(256, 0);
  std::vector<int> chars_2(256, 0);

  for (int i = 0; i < a.length(); i++) {
    chars_1.at(a.at(i)) += 1;
    chars_2.at(b.at(i)) += 1;
  }

  return chars_1 == chars_2 ? true : false;
}

int main() {
  switch (is_anagram("fakeksadsad", "lokat")) {
    case true:
      std::cout << "It's anagram\n";
      break;

    default:
      std::cout << "It isn't anagram\n";
      break;
  }

  return 0;
}