#include <iostream>
#include <string>
#include <vector>

// strings a b find if they're anagrams

bool is_anagram(const std::string& a, const std::string& b) {
  if (a.length() != b.length()) return false;

  std::vector<int> chars(256, 0);

  for (int i = 0; i < a.length(); i++) {
    chars.at(a.at(i)) += 1;
    chars.at(b.at(i)) -= 1;
  }

  for (auto& c : chars) {
    if (c != 0) return false;
  }

  return true;
}

int main() {
  switch (is_anagram("fak", "rac")) {
    case true:
      std::cout << "It's anagram\n";
      break;

    default:
      std::cout << "It isn't anagram\n";
      break;
  }

  return 0;
}